package com.example.spring1.service.impl;

import com.example.spring1.dao.UserDao;
import com.example.spring1.dao.impl.UserDaoImplForMysql;
import com.example.spring1.service.UserService;

public class UserServiceImpl implements UserService {
    private UserDao userDao =new UserDaoImplForMysql();
    @Override
    public void deleteUser() {

        userDao.deleteById();

    }


}
