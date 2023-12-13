package com.example.duck.controller;


import cn.hutool.core.lang.UUID;
import cn.hutool.core.map.MapUtil;
import com.duck.common.vo.Const;
import com.duck.common.vo.R;
import com.google.code.kaptcha.Producer;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import org.apache.tomcat.util.http.fileupload.ByteArrayOutputStream;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import sun.misc.BASE64Encoder;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;


/**
 * 自定义的controller
 */
@CrossOrigin
@RestController
@RequestMapping("/sys")
@Api(value = "用户登录图片验证码",tags = "登录管理")
public class AuthController extends BaseController {

    @Autowired
    Producer producer; // 图片验证码

    @ApiOperation("图片验证码")
    @GetMapping("/captcha")
    public R captcha() throws IOException {
        String key = UUID.randomUUID().toString(); // 32位的随机验证码
        String code = producer.createText(); // 5位数的验证码

        // 为了测试
        // key = "aaaaa";
        // code = "12345";

        BufferedImage image = producer.createImage(code); // 生成 image格式

        // 转换
        ByteArrayOutputStream outputStream = new ByteArrayOutputStream();

        // 写进流
        ImageIO.write(image,"jpg",outputStream);

        // 流转成base64位格式
        BASE64Encoder encoder = new BASE64Encoder();

        String str = "data:image/jpeg;base64,"; // 前辍

        // 流转成编码
        String base64Img = str + encoder.encode(outputStream.toByteArray());

        // 存到 redis
        redisUtil.hset(Const.CAPTCHA_KEY,key,code,120);

        // 返回图片
        return R.ok(
                MapUtil.builder()
                        .put("token",key)
                        .put("captchaImg",base64Img)
                        .build()
        );

    }
}
