package com.example.springbooot.controller;

import com.example.springbooot.common.Result;
import com.example.springbooot.entity.User;
import com.example.springbooot.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.web.bind.annotation.*;

import java.sql.SQLException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


@ResponseBody
@RestController
@RequestMapping("/user")
public class UserController {
    @Autowired
    UserService userService;

    /**
     * 新增用户信息
     */
    @PostMapping("/add")
    public Result addUser(@RequestBody User user) {
        try {
            userService.insertUser(user);
            return Result.success();
        } catch (Exception e) {
            e.printStackTrace();
            return Result.error("Exception occurred.");
        }
    }

    @GetMapping("/add")
    public Result handleGetRequest() {
        return Result.error("GET method is not supported for adding users.");
    }

    /**
     * 修改用户信息
     */
    @PostMapping("/update")
    public Result update(@RequestBody User user) {
        try {
            userService.updateUser(user);
            return Result.success();
        } catch (Exception e) {
            e.printStackTrace();
            return Result.error("Exception occurred.");
        }
    }

    /**
     * 单个删除用户信息
     */
    @DeleteMapping("/delete/{id}")
    public Result delete(@PathVariable Integer id) {
        try {
            userService.deleteUser(id);
            List<User> userList = userService.select();
            return Result.success(userList);
        } catch (Exception e) {
            e.printStackTrace();
            return Result.error("Exception occurred.");
        }
    }

    /**
     * 批量删除用户信息
     */
    @DeleteMapping("/delete/batch")
    public Result batchDelete(@RequestBody List<Integer> ids) {
        try {
            userService.batchDeleteUser(ids);
            List<User> userList = userService.select();
            return Result.success(userList);
        } catch (Exception e) {
            e.printStackTrace();
            return Result.error("Exception occurred.");
        }
    }

    /**
     * 查询用户信息
     */
    @GetMapping("/select")
    public Result select() {
        try {
            List<User> userList = userService.select();
            return Result.success(userList);
        } catch (Exception e) {
            e.printStackTrace();
            return Result.error("Exception occurred.");
        }
    }

    /**
     * 单条件查询
     */
    @GetMapping("/selectById/{id}")
    public Result selectById(@PathVariable Integer id) throws SQLException {
        User user = userService.selectById(id);
        if (user != null) {
            return Result.success(user);
        } else {
            return Result.error("找不到指定的用户");
        }
    }

    /**
     * 多条件查询
     */
    @GetMapping("/selectByName/{name}")
    public Result selectByName(@PathVariable String name) throws SQLException {
        List<User> userList = userService.selectByName(name);
        if (userList != null && !userList.isEmpty()) {
            return Result.success(userList);
        } else {
            return Result.error("找不到指定的用户");
        }
    }

    /**
     * 多条件查询（修改后的方法名）
     */
    @GetMapping("/selectByMore")
    public Result selectByMore(@RequestParam String username, @RequestParam String name) {
        List<User> userList = userService.selectByMore(username, name); // 使用已注入的userService实例调用非静态方法
        return Result.success(userList);
    }

    /**
     * 多条件模糊查询（修改后的方法名）
     */
    @GetMapping("/selectByMo")
    public Result selectByMo(@RequestParam String username, @RequestParam String name) {
        List<User> userList = userService.selectByMo(username, name); // 使用已注入的userService实例调用非静态方法
        return Result.success(userList);
    }

//    @GetMapping("/selectByPage")
//    public Result selectBypage(@RequestParam String username, @RequestParam String name,
//                               @RequestParam Integer pageNum, @RequestParam Integer pageSize) {
//        Map<String, List<User>> result = new HashMap<>();
//        List<User> userList = userService.selectByMo(username,name,pageNum,pageSize);
//        result.put("userList", userList);
//      //  result.put("total", 3);
//        return Result.success(result);
//    }
//@GetMapping("/selectByPage")
//public Result selectByPage(@RequestParam String username, @RequestParam String name,
//                           @RequestParam Integer pageNum, @RequestParam Integer pageSize) {
//    Map<String, List<User>> result = new HashMap<>();
//    List<User> userList = userService.selectByPage(username, name, pageNum, pageSize);
//    result.put("userList", userList);
////    result.put("t")
//    return Result.success(result);
//}
@GetMapping("/selectByPage")
public Result selectByPage(@RequestParam Integer pageNum, @RequestParam Integer pageSize,
                           @RequestParam String username, @RequestParam String name) {
    Page<User> page = userService.selectByPage(pageNum, pageSize, username, name);
    return Result.success(page);
}


}
