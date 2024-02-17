package com.example.spring1.dao.impl;

import com.example.spring1.dao.UserDao;

public class UserDaoImplForMysql implements UserDao {
    @Override
    public void deleteById() {
        System.out.println("MySQL数据库正在删除信息");
    }
}
