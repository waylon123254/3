package com.example.springboot.Service;

import com.example.springboot.Controller.Login.UserControllerLogin;
import com.example.springboot.entity.User;
import com.baomidou.mybatisplus.extension.service.IService;

/**
 * <p>
 *  服务类
 * </p>
 *
 * @author lv
 * @since 2023-10-22
 */
public interface IUserService extends IService<User> {

   UserControllerLogin login(UserControllerLogin userControllerLogin);

   UserControllerLogin register(UserControllerLogin userControllerLogin);
}
