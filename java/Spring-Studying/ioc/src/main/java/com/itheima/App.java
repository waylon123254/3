package com.itheima;

import com.itheima.Dao.BookDao;
import com.itheima.Service.BookService;
import com.itheima.Service.impl.BookServiceImpl;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App {
    public static void main(String[] args) {
        BookService bookService = new BookServiceImpl();
        bookService.save();
//        ClassPathXmlApplicationContext acx = new ClassPathXmlApplicationContext("beans.xml");
//        BookDao bookDao = (BookDao) acx.getBean("bookDao");
//        bookDao.save();
//        acx.close();
    }
}
