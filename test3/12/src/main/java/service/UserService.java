package service;

import dao.UserDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class UserService {
    @Autowired
    private UserDao userDao;

    public void add(){
        userDao.addUser(02,"老徐",20);
        int i = 1/0;//设计的异常操作
        userDao.addUser(03,"小徐",18);
        System.out.println("添加成功");
    }
}