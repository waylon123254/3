package com.example.springtest.test;

import com.example.springtest.Service.UserService;
import org.springframework.beans.factory.support.DefaultListableBeanFactory;
import org.springframework.beans.factory.xml.XmlBeanDefinitionReader;


public class BeanFactoryTest {
    public static void main(String[] args) {
        DefaultListableBeanFactory beanFactory =new DefaultListableBeanFactory();
        XmlBeanDefinitionReader reader = new XmlBeanDefinitionReader(beanFactory);
reader.loadBeanDefinitions("beans.xml");
UserService userService = (UserService) beanFactory.getBean("userService");
        System.out.println(userService);
    }
}
