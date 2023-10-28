package com.itheima.processor;

import com.itheima.utils.BaseClassScanUtils;
import org.springframework.beans.BeansException;
import org.springframework.beans.factory.config.BeanDefinition;
import org.springframework.beans.factory.config.ConfigurableListableBeanFactory;
import org.springframework.beans.factory.support.BeanDefinitionRegistry;
import org.springframework.beans.factory.support.BeanDefinitionRegistryPostProcessor;
import org.springframework.beans.factory.support.RootBeanDefinition;

import java.util.Map;

public class MyComponentBeanFactoryPostProcessor implements BeanDefinitionRegistryPostProcessor {
    @Override
    public void postProcessBeanDefinitionRegistry(BeanDefinitionRegistry beanDefinitionRegistry) throws BeansException {
        //通过扫描工具去扫描指定包及其子包下的所有类，收集使用@Mycomponent的注解的类
        Map<String, Class> myComponentAnnotationMap = BaseClassScanUtils.scanMyComponentAnnotation("com.itheima");
        //遍历Map，组装BeanDefinition进行注册
        myComponentAnnotationMap.forEach((beanName,clazz)->{
            //获得beanClassName
            String beanClassName = clazz.getName();//com.itheima.beans.OtherBean
            //创建BeanDefinition
            BeanDefinition beanDefinition = new RootBeanDefinition();
            beanDefinition.setBeanClassName(beanClassName);
            //注册
            beanDefinitionRegistry.registerBeanDefinition(beanName,beanDefinition);
        });

    }

    @Override
    public void postProcessBeanFactory(ConfigurableListableBeanFactory configurableListableBeanFactory) throws BeansException {

    }
}
