package com.itheima.processor;

import com.itheima.dao.UserDao;
import com.itheima.dao.impl.UserDaoImpl;
import org.springframework.beans.BeansException;
import org.springframework.beans.factory.config.BeanPostProcessor;

public class MyBeanPostProcessor implements BeanPostProcessor {

    @Override
    public Object postProcessBeforeInitialization(Object bean, String beanName) throws BeansException {
        /*if(bean instanceof UserDaoImpl){
            UserDaoImpl userDao = (UserDaoImpl) bean;
            userDao.setUsername("haohao");
        }*/
        System.out.println(beanName+":postProcessBeforeInitialization");
        return bean;
    }

    @Override
    public Object postProcessAfterInitialization(Object bean, String beanName) throws BeansException {
        System.out.println(beanName+":postProcessAfterInitialization");
            return bean;
    }
}
