package com.itheima.service.impl;

import com.itheima.dao.UserDao;
import com.itheima.mapper.UserMapper;
import com.itheima.pojo.User;
import com.itheima.service.UserService;
import org.springframework.beans.BeansException;
import org.springframework.beans.factory.BeanFactory;
import org.springframework.beans.factory.BeanFactoryAware;
import org.springframework.beans.factory.BeanNameAware;
import org.springframework.beans.factory.InitializingBean;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ApplicationContextAware;
import org.springframework.web.context.ServletContextAware;

import javax.servlet.ServletContext;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import java.util.Set;

public class UserServiceImpl implements UserService {

    private UserDao userDao;

    public void setUserDao(UserDao userDao) {
        this.userDao = userDao;
    }

    @Override
    public void show() {

    }

    //需要Mapper
    /*private UserMapper userMapper;
    public void setUserMapper(UserMapper userMapper) {
        this.userMapper = userMapper;
    }
*/
    /*@Override
    public void show() {
        List<User> all = userMapper.findAll();
        for (User user : all) {
            System.out.println(user);
        }
    }*/

    /*public UserServiceImpl() {
        //System.out.println("userService创建");
    }

    private UserDao userDao;
    private String username;

    public void setUsername(String username) {
        this.username = username;
    }

    //BeanFactory去调用该方法  从容器中获得userDao设置到此处
    public void setUserDao(UserDao userDao){
        //System.out.println("userService执行注入userDao的操作：setUserDao方法执行");
        this.userDao = userDao;
    }*/

    //注入List
    /*private List<String> stringList;
    public void setStringList(List<String> stringList) {
        this.stringList = stringList;
    }

    private List<UserDao> userDaoList;
    public void setUserDaoList(List<UserDao> userDaoList) {
        this.userDaoList = userDaoList;
    }

    private Set<String> strSet;
    public void setStrSet(Set<String> strSet) {
        this.strSet = strSet;
    }

    private Set<UserDao> userDaoSet;
    public void setUserDaoSet(Set<UserDao> userDaoSet) {
        this.userDaoSet = userDaoSet;
    }

    private Map<String,UserDao> map;
    public void setMap(Map<String, UserDao> map) {
        this.map = map;
    }

    private Properties properties;
    public void setProperties(Properties properties) {
        this.properties = properties;
    }*/






}
