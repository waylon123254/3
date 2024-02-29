package com.example.controller;


import com.baomidou.mybatisplus.core.metadata.IPage;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.example.common.MultiDataResult;
import com.example.common.Result;
import com.example.entity.User;
import com.example.mapper.UserMapper;
import com.example.service.UserService;
import io.swagger.annotations.Api;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * <p>
 * 用户表 前端控制器
 * </p>
 *
 * @author lv
 * @since 2023-12-17 10:33:50
 */
@ResponseBody
@RestController
@RequestMapping("/user")

public class UserController {
    @Autowired
    private UserService userService;

    @Autowired
    private UserMapper userMapper;

    /**
     * 添加用户
     */
    @PostMapping("/add")
    public Result add(@RequestBody User user){
        userService.insertUser(user);
        return Result.success();
    }

    /**
     * 删除用户
     */
    @DeleteMapping("/delete/{id}")
    public Result delete(@PathVariable("id") Integer id){
        userService.deleteUserById(id);
        return Result.success();
    }

    /**
     * 根据id查询用户
     */
    @GetMapping("/selectById/{id}")
    public Result<User> get(@PathVariable("id") Integer id){
        User user = userService.getUserById(id);
        return Result.success(user);
    }
    /**
     * 根据name查询用户
     */
    @GetMapping("/selectByName/{name}")
    public MultiDataResult<User> get(@PathVariable("name") String name){
        List<User> userList = userService.getUserByName(name);
        if (!userList.isEmpty()) {
            return MultiDataResult.success(userList);
        } else {
            return MultiDataResult.error("用户不存在");
        }
    }
    /**
     * 多条件模糊查询
     **/
    @GetMapping("/selectByMore")
    public MultiDataResult selectByMore(@RequestParam(required = false) String username,
                                        @RequestParam(required = false) String name){
        List<User> userList= userService.selectByMore(username,name);
        return MultiDataResult.success(userList);
    }
    /**
     * 查询所有用户
     */
    @GetMapping("/selectAll")
    public Result<List<User>> getAll(){
        List<User> userList = userService.list();
        return Result.success(userList);
    }

    /**
     * 更新用户信息
     */
    @PostMapping("/update")
    public Result update(@RequestBody User user){
        userService.updateUser(user);
        return Result.success();
    }
    /**
     * 分页查询用户列表
     */
    @GetMapping("/selectByPage")
    public Page<User> selectByPage(
            @RequestParam(value = "username", required = false) String username,
            @RequestParam(value = "name", required = false) String name,
            @RequestParam("pageNum") Integer pageNum,
            @RequestParam("pageSize") Integer pageSize) {
        Page<User> page = userService.selectByPage(username, name, pageNum, pageSize);
        return userService.selectByPage(username, name, pageNum, pageSize);

    }
    //    public MultiDataResult<User> selectByPage(
//            @RequestParam(value = "username", required = false) String username,
//            @RequestParam(value = "name", required = false) String name,
//            @RequestParam("pageNum") Integer pageNum,
//            @RequestParam("pageSize") Integer pageSize)
//    {
//        try {
//            Page<User> page = userService.selectByPage(username, name, pageNum, pageSize);
//            List<User> userList = page.getRecords();
//            return MultiDataResult.success(userList);
//        } catch (Exception e) {
//            return MultiDataResult.error(e.getMessage());
//        }
//    }


}

