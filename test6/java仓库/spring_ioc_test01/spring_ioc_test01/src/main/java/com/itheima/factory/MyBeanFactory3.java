package com.itheima.factory;

import com.itheima.dao.UserDao;
import com.itheima.dao.impl.UserDaoImpl;
import org.springframework.beans.factory.FactoryBean;

public class MyBeanFactory3 implements FactoryBean<UserDao> {

    @Override
    public UserDao getObject() throws Exception {
        System.out.println("getObject被调用...");
        return new UserDaoImpl();
    }

    @Override
    public Class<?> getObjectType() {
        return UserDao.class;
    }
}
