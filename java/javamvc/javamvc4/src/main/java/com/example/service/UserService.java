package com.example.service;

import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.baomidou.mybatisplus.extension.service.IService;

import com.example.entity.User;


import java.util.List;

/**
 * <p>
 * 用户表 服务类
 * </p>
 *
 * @author lv
 * @since 2023-12-17 10:33:50
 */

public interface UserService extends IService<User> {

    void insertUser(User user);

    void deleteUserById(Integer id);

    User getUserById(Integer id);

    void updateUser(User user);
   List<User>  getUserByName(String name);

   List<User> selectByMore(String username, String name);


    Page<User> selectByPage(String username, String name, Integer pageNum, Integer pageSize);
}
