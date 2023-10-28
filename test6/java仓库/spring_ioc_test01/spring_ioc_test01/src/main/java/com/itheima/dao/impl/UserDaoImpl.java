package com.itheima.dao.impl;

import com.itheima.dao.UserDao;
import com.itheima.service.UserService;
import org.springframework.beans.factory.InitializingBean;

public class UserDaoImpl implements UserDao {

    /*public UserDaoImpl() {
        //System.out.println("userDao创建");
    }*/

    private UserService userService;

    public void setUserService(UserService userService) {
        this.userService = userService;
    }

    @Override
    public void show() {
        System.out.println("show....");
    }

    /*private String username;

    public void setUsername(String username) {
        this.username = username;
    }

    public UserDaoImpl() {
        System.out.println("userDao实例化");
    }


    public void init(){
        System.out.println("init初始化方法执行...");
    }

    @Override
    public void afterPropertiesSet() throws Exception {
        System.out.println("属性设置之后执行...");
    }*/
}
