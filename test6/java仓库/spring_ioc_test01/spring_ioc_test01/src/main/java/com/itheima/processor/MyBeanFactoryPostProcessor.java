package com.itheima.processor;

import org.springframework.beans.BeansException;
import org.springframework.beans.factory.config.BeanDefinition;
import org.springframework.beans.factory.config.BeanFactoryPostProcessor;
import org.springframework.beans.factory.config.ConfigurableListableBeanFactory;
import org.springframework.beans.factory.support.DefaultListableBeanFactory;
import org.springframework.beans.factory.support.RootBeanDefinition;

public class MyBeanFactoryPostProcessor implements BeanFactoryPostProcessor {
    @Override
    public void postProcessBeanFactory(ConfigurableListableBeanFactory beanFactory) throws BeansException {
        System.out.println("MyBeanFactoryPostProcessor的postProcessBeanFactory");
        //System.out.println("beanDefinitionMap填充完毕后回调该方法");
        //注册BeanDefinition
        /*BeanDefinition beanDefinition = new RootBeanDefinition();
        beanDefinition.setBeanClassName("com.itheima.dao.impl.PersonDaoImpl");
        //强转成DefaultListableBeanFactory
        DefaultListableBeanFactory defaultListableBeanFactory = (DefaultListableBeanFactory) beanFactory;
        defaultListableBeanFactory.registerBeanDefinition("personDao",beanDefinition);*/
        //修改某个Beandifinition
        /*BeanDefinition beanDefinition = beanFactory.getBeanDefinition("userService");
        beanDefinition.setBeanClassName("com.itheima.dao.impl.UserDaoImpl");*/
    }
}
