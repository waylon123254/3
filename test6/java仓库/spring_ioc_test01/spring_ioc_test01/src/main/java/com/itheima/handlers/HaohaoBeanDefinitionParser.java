package com.itheima.handlers;

import org.springframework.beans.factory.config.BeanDefinition;
import org.springframework.beans.factory.support.RootBeanDefinition;
import org.springframework.beans.factory.xml.BeanDefinitionParser;
import org.springframework.beans.factory.xml.ParserContext;
import org.w3c.dom.Element;

public class HaohaoBeanDefinitionParser implements BeanDefinitionParser {
    @Override
    public BeanDefinition parse(Element element, ParserContext parserContext) {
        //注入一个BeanPostProcessor
        BeanDefinition beanDefinition = new RootBeanDefinition();
        beanDefinition.setBeanClassName("com.itheima.processor.HaohaoBeanPostProcessor");
        parserContext.getRegistry().registerBeanDefinition("haohaoBeanPostProessor",beanDefinition);
        return beanDefinition;
    }
}
