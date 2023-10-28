package com.itheima.test;

import com.alibaba.druid.pool.DruidDataSource;
import com.itheima.beans.OtherBean;
import com.itheima.beans.XxxBean;
import com.itheima.dao.PersonDao;
import com.itheima.dao.UserDao;
import com.itheima.service.UserService;
import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import java.io.IOException;
import java.io.InputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.text.SimpleDateFormat;
import java.util.Date;

public class ApplicationContextTest {

    public static void main(String[] args) throws Exception {

        ApplicationContext applicationContext = new ClassPathXmlApplicationContext("applicationContext.xml");
        UserService userService = applicationContext.getBean(UserService.class);
        System.out.println(userService);


    }

}
