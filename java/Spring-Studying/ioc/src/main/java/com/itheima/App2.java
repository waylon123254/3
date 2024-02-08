package com.itheima;

import com.itheima.Dao.BookDao;
import com.itheima.Service.BookService;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App2 {
    public static void main(String[] args) {
        //获取IOC 容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");

        //获取Bean对象
        BookDao bookDao = (BookDao) context.getBean("bookDao");
        bookDao.save();

        BookService bookService = (BookService) context.getBean("bookService");
        bookService.save();
    }
}
