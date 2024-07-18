package com.example.springboot.Controller;

import cn.hutool.core.io.FileUtil;
import cn.hutool.core.io.IoUtil;
import cn.hutool.core.util.StrUtil;
import cn.hutool.crypto.SecureUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.core.metadata.IPage;
import com.baomidou.mybatisplus.core.toolkit.CollectionUtils;
import com.baomidou.mybatisplus.core.toolkit.StringUtils;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.example.springboot.Common.NoAuth;
import com.example.springboot.Common.Result;
import com.example.springboot.Mapper.SysFileMapper;
import com.example.springboot.Service.ISysFileService;
import com.example.springboot.entity.SysFile;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiOperation;
import lombok.extern.slf4j.Slf4j;
import org.apache.commons.codec.digest.DigestUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;

import javax.annotation.Resource;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletResponse;
import java.io.*;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;
import java.util.List;
import java.util.UUID;

/**
 * @Auther: 吕宏博
 * @Date: 2024--02--24--15:25
 * @Description:
 */
@Slf4j
@ApiModel(value="file文件对象", description="file文件方法")
@RestController
@RequestMapping("/file")
public class SysFileController {
    /**
     * 新增/修改
     * 上传文件方法接口
     * */

    @Autowired
    private ISysFileService fileService;

    @Autowired
    private SysFileMapper fileMapper;

   // @Value("${files.upload.path}") // 使用@Value注解注入文件上传路径
   //图片上传保存地址
    private static final String PictureUploadPath="D:\\java files\\8\\files\\picture\\";
    /**
     * 上传文件方法接口
     * Sys_file文件信息
     * */
    @ApiOperation(value = "上传文件方法接口")
    @PostMapping("/upload")
    public Result upload(MultipartFile file) throws IOException {

        // 1. 判空
        if (file == null || file.isEmpty()) {
            return Result.error(404,"您还没有选择图片!");
        }
        // 2. 生成随机文件名
        // 2.1首先获取文件原始名称
        // String originalFilename = new String(file.getOriginalFilename().getBytes("ISO-8859-1"), "UTF-8");
        // 2.1直接获取文件原始名称
        String originalFilename = file.getOriginalFilename();
        System.out.println("文件原始名称：" + originalFilename);
        // 2.2输出文件原始名
        System.out.println(originalFilename);
        // 获取文件原始名称并进行编码转换

        // 2.3获取文件类型
        String type = FileUtil.extName(originalFilename);
        log.info("文件类型是：" + type);
        ImgRegulation regulation = new ImgRegulation();
        try {
            boolean isImage = regulation.verify(type);
            if (!isImage) {
                // 返回文件类型不合法的错误信息
                return Result.error(404,"文件类型不合法，请上传图片文件");
            }
        } catch (Exception e) {
            // 处理异常情况，这里简单返回错误信息
            return Result.error(500,"文件类型验证出现异常");
        }
        // 获取文件大小
        long size = file.getSize();
        System.out.println(size);

        // 判断上传目录是否存在，如果不存在则创建目录
        File uploadParentFile = new File(PictureUploadPath);
        if (!uploadParentFile.exists()) {
            uploadParentFile.mkdirs();
        }

        // 定义文件的唯一标识码（UUID）
          String uuid = UUID.randomUUID().toString().replace("-","");
        String fileUUID = uuid + StrUtil.DOT + type; // 将UUID与文件类型拼接成最终的文件唯一标识
        System.out.println(fileUUID);
        File uploadFile = new File(PictureUploadPath + fileUUID);

        // 获取文件的MD5值，并查询数据库是否存在相同的记录
        String md5 = SecureUtil.md5(file.getInputStream());
        List<SysFile> isExistFile  = fileService.getByMD5(md5);

        // 设置文件的URL
        String url=null;
        if (CollectionUtils.isNotEmpty(isExistFile)) {
            System.out.println("存在文件："+isExistFile);
            // 如果数据库中已存在相同的文件，则返回数据库中的URL
            url = isExistFile.get(0).getUrl();
        } else {
            // 如果不存在相同的文件，则将文件上传到磁盘上，并将记录存储到数据库中
            try (InputStream is = file.getInputStream(); FileOutputStream fos = new FileOutputStream(uploadFile,true)) {
                IoUtil.copy(is, fos);
            }

            url = "http://localhost:9090/file/picture" + fileUUID;
            SysFile saveFile = new SysFile();
            saveFile.setName(originalFilename);
            saveFile.setType(type);
            saveFile.setSize(size / 1024); // 转成KB
            saveFile.setUrl(url);
            saveFile.setMd5(md5);
            System.out.println(saveFile);
            fileMapper.insert(saveFile);
        }
        return Result.success(200, "上传成功", url);
    }



    /**下载接口
    *下载文件方法接口尝试
    *
    **/
    @GetMapping("/{fileUUID}")
    @NoAuth
    public void download(@PathVariable String fileUUID, HttpServletResponse response) {
        File downloadFile = new File(PictureUploadPath + fileUUID);
        try {
            FileInputStream fileInputStream = new FileInputStream(downloadFile);
            // 设置输出流的格式
            response.setCharacterEncoding("UTF-8");
            response.addHeader("Content-Disposition", "attachment;filename=" + URLEncoder.encode(fileUUID, "UTF-8"));
            //作用是使客户端浏览器区分不同种类的数据，并根据不同的MIME调用浏览器内不同的程序嵌入模块来处理相应的数据。
            response.setContentType("application/octet-stream");  //.*（ 二进制流，不知道下载文件类型）
            ServletOutputStream outputStream = response.getOutputStream();
            int len = 0;
            byte[] bytes = new byte[1024];
            while ((len = fileInputStream.read(bytes)) != -1) {
                outputStream.write(bytes, 0, len);
                outputStream.flush();
            }
            outputStream.flush();
            outputStream.close();
            fileInputStream.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

    }

//    @GetMapping("/show/{fileUUID}")
//    public void showFile(@PathVariable String fileUUID, HttpServletResponse response) {
//        // 根据fileUUID获取文件路径
//        String filePath = "D:\\java files\\8\\files\\" + fileUUID; // 文件存储路径
//
//        File file = new File(filePath);
//        if (file.exists()) {
//            // 设置响应类型为文件下载
//            response.setContentType("application/force-download");
//            response.addHeader("Content-Disposition", "attachment;fileName=" + file.getName());
//
//            // 将文件写入响应流
//            try (InputStream in = new FileInputStream(file); OutputStream out = response.getOutputStream()) {
//                byte[] buffer = new byte[1024];
//                int len;
//                while ((len = in.read(buffer)) > 0) {
//                    out.write(buffer, 0, len);
//                }
//                out.flush();
//            } catch (IOException e) {
//                // 处理异常
//            }
//        } else {
//            // 文件不存在，返回错误信息
//            // 可以返回自定义的错误信息或者抛出异常
//        }
//    }

    /**查询接口
     * 查询文件所有
     * @return
     */
    @ApiOperation(value = "用于指定查询条件type和所有的文件")
    @PostMapping("/findAll")
    public Result findAll(@RequestParam(name = "type",defaultValue = "")String type){
        QueryWrapper<SysFile> queryWrapper = new QueryWrapper<>();
        if (StringUtils.isNotEmpty(type)){
            queryWrapper.eq("type",type);
        }
        return Result.success(200,"查询Sys_file中icon成功",fileService.list(queryWrapper));
    }

    /***删除接口，根据id进行删除
     *单个用户删除
     * @param id
     * @return
     * 创建一个名为 queryWrapper 的 QueryWrapper 对象，用于构建查询条件。
     * 使用 queryWrapper.eq("id", id) 方法设置查询条件，即根据 id 字段等于传入的 id 值进行查询。
     * 调用 userService.list(queryWrapper) 方法执行查询，并将结果存储在 list 变量中。
     * 如果查询结果为空列表（即没有找到匹配的记录），则返回一个带有错误信息的 Result 对象，表示角色信息已经被使用，无法删除。
     * 调用 roleService.removeById(id) 方法删除指定的角色信息。如果删除成功，返回一个带有成功信息的 Result 对象。
     * 如果删除失败，则返回一个默认的错误 Result 对象。
     */
//    @PostMapping("/deleteById/{id}")
//    @ApiOperation(value = "根据id修改积分等级")
//    public Result delete(@PathVariable Integer id) {
//
//        boolean delete = Sys_fileService.removeById(id);
//        if(delete)
//        {
//            return Result.success(200,"字典信息删除成功");
//        } else
//        {
//            return Result.error(405,"字典信息删除失败");
//        }
//    }


    /***
     *id批量删除角色
     * **/
//    @PostMapping("/deleteBatch")
//    @ApiOperation(value = "根据id修改积分等级")
//    public Result deleteBatch(@RequestBody List<Integer> idList) {
//        int successCount = 0; // 统计删除成功的条数
//
//        boolean delete = Sys_fileService.removeByIds(idList);
//        if(delete)
//        {
//            successCount = idList.size(); // 设置成功删除的条数为传递的id列表的长度
//            return Result.success(200, "删除字典信息成功",successCount);
//        } else
//        {
//            return Result.error(405, "删除字典信息失败");
//        }
//    }


    /***
     *
     * 文件启用方法接口
     */

    @PostMapping("/updateEnable")
    @ApiOperation(value = "根据id修改积分等级")
    public Result updateEnable(@RequestBody SysFile sysFile) {

        boolean d = fileService.updateById(sysFile);
        if(d)
        {
            return Result.success(200,"字典信息删除成功");
        } else
        {
            return Result.error(405,"字典信息删除失败");
        }
    }
    /**分页接口
     * 文件数据分页接口
     * @param pageNum
     * @param pageSize
     * @param name
     * @return
     */

    @GetMapping("/findPage")
    @ApiOperation(value = "Sys_file分页方法接口")
  //  @Log(record ="查询字典分页",type = "字典查询方法")
    public Result findPage(@RequestParam Integer pageNum,
                           @RequestParam Integer pageSize,
                           @RequestParam(name = "name",defaultValue = "") String name
    ) {
        Page<SysFile> page = new Page(pageNum,pageSize);
        QueryWrapper<SysFile> queryWrapper=new QueryWrapper<>();
        if (StringUtils.isNotEmpty(name)) {
            queryWrapper.like("name", name);
        }
        IPage<SysFile> rolePage = fileService.page(page, queryWrapper);
        return Result.success(200,"字典信息查询成功",rolePage);
    }

//    // 找一个计算机的磁盘位置，比如 D:\\, 我这里使用的是本项目的路径
//    private static final String BASE_DIR = " D:\\java files\\8\\files\\";
//
//    // 定义接口类型和二级路径，完整的接口url是：/file/upload
//    @PostMapping("/upload")
//    public void upload(@RequestParam MultipartFile file) {
//        // 获取文件的名称
//        String fileName = file.getOriginalFilename();
//        try {
//            // 新建一个文件路径
//            File uploadFile = new File(BASE_DIR + fileName);
//            // 当父级目录不存在时，自动创建
//            if (!uploadFile.getParentFile().exists()) {
//                uploadFile.getParentFile().mkdirs();
//            }
//            // 存储文件到电脑磁盘
//            file.transferTo(uploadFile);
//
//        } catch (IOException e) {
//            e.printStackTrace();
//        }
//    }
//    @GetMapping("/download")
//    public void download(@RequestParam String fileName, HttpServletResponse response) {
//        //  新建文件流，从磁盘读取文件流
//        try (FileInputStream fis = new FileInputStream(BASE_DIR + fileName);
//             BufferedInputStream bis = new BufferedInputStream(fis);
//             OutputStream os = response.getOutputStream()) {    //  OutputStream 是文件写出流，讲文件下载到浏览器客户端
//            // 新建字节数组，长度是文件的大小，比如文件 6kb, bis.available() = 1024 * 6
//            byte[] bytes = new byte[bis.available()];
//            // 从文件流读取字节到字节数组中
//            bis.read(bytes);
//            // 重置 response
//            response.reset();
//            // 设置 response 的下载响应头
//            response.setContentType("application/octet-stream");
//            response.setHeader("Content-disposition", "attachment;filename=" + URLEncoder.encode(fileName, "UTF-8"));  // 注意，这里要设置文件名的编码，否则中文的文件名下载后不显示
//            // 写出字节数组到输出流
//            os.write(bytes);
//            // 刷新输出流
//            os.flush();
//        } catch (Exception e) {
//            e.printStackTrace();
//        }
//    }

        /**
         * 上传文件接口方法
         * */
//        @PostMapping("/upload")
//        public Result upload(@RequestParam MultipartFile file) throws IOException {
//            String md5 = DigestUtils.md5Hex(file.getBytes());
//            String originalFilename = file.getOriginalFilename();  //文件的名称
//            String type = originalFilename.substring(originalFilename.lastIndexOf(".") + 1);//文件类型
//            long size = file.getSize();
//            File uploadParentFile = new File(fileUploadPath);
//            if(!uploadParentFile.exists()){
//                uploadParentFile.mkdirs();
//            }
//            List<SysFile> existFileList = fileService.getByMD5(md5);
//            String url = null;
//            if(CollectionUtils.isNotEmpty(existFileList)){
//                //文件已经存在上传目录
//                url = existFileList.get(0).getUrl();
//            }else{
//                //文件不存在上传目录
//                String uuid = UUID.randomUUID().toString().replaceAll("-", "");
//                String fileUUID = uuid + "." + type;
//                File uploadFile = new File(fileUploadPath + fileUUID);
//                url = "http://localhost:8888/sysFile/" + fileUUID;
//                file.transferTo(uploadFile);
//            }
//
//            //存储数据库
//            SysFile sysFile = new SysFile();
//            sysFile.setName(originalFilename);
//            sysFile.setSize(size / 1024);
//            sysFile.setType(type);
//            sysFile.setUrl(url);
//            sysFile.setMd5(md5);
//            fileService.save(sysFile);
//            return Result.success(200,"文件成功",url);
//
//
//        }
//    /**
//     * 下载文件
//     * @param fileUUID
//     */
//    @GetMapping("/{fileUUID}")
//    @NoAuth
//    public void download(@PathVariable String fileUUID, HttpServletResponse response) {
//        File downloadFile = new File(fileUploadPath + fileUUID);
//        try {
//            FileInputStream fileInputStream = new FileInputStream(downloadFile);
//            // 设置输出流的格式
//            response.setCharacterEncoding("UTF-8");
//            response.addHeader("Content-Disposition", "attachment;filename=" + URLEncoder.encode(fileUUID, "UTF-8"));
//            //作用是使客户端浏览器区分不同种类的数据，并根据不同的MIME调用浏览器内不同的程序嵌入模块来处理相应的数据。
//            response.setContentType("application/octet-stream");  //.*（ 二进制流，不知道下载文件类型）
//            ServletOutputStream outputStream = response.getOutputStream();
//            int len = 0;
//            byte[] bytes = new byte[1024];
//            while ((len = fileInputStream.read(bytes)) != -1) {
//                outputStream.write(bytes, 0, len);
//                outputStream.flush();
//            }
//            outputStream.flush();
//            outputStream.close();
//            fileInputStream.close();
//        } catch (IOException e) {
//            e.printStackTrace();
//        }
//
//    }
}
