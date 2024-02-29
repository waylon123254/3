package com.example.springbooot.service;

import com.example.springbooot.entity.User;
import com.example.springbooot.mapper.UserMapper;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageImpl;
import org.springframework.data.domain.PageRequest;
import org.springframework.stereotype.Service;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import javax.transaction.Transactional;
import java.sql.SQLException;
import java.util.List;

@Service
@RestController
@RequestMapping("/user")
public class UserService {
    @Autowired
    private UserMapper userMapper;

    public  List<User> selectByMore(String username, String name) {
     return userMapper.selectByMore(username,name);
    }


    public void insertUser(User user) throws SQLException {
        userMapper.insert(user);
    }

    public void updateUser(User user) {
        userMapper.update(user);
    }

    public void deleteUser(Integer id) {
        userMapper.deleteUser(id);
    }

    @Transactional
    public void batchDeleteUser(List<Integer> ids) {
        for (Integer id : ids) {
            userMapper.deleteUser(id);
        }
    }

    public List<User> select() {
        return userMapper.select();
    }

    public User selectById(Integer id) throws SQLException {
        return userMapper.selectById(id);
    }

    public List<User> selectByName(String name) {
        return userMapper.selectByName(name);
    }

    public List<User> selectByMo(String username, String name) {
        return userMapper.selectByMo(username,name);
    }

//    public List<User> selectByPage(String username, String name, Integer pageNum, Integer pageSize) {
//        Integer skipNum = (pageNum - 1) * pageSize;
//        return userMapper.selectByPage(skipNum, pageSize, username, name);
//    }

//    public List<User> selectByMo(String username, String name) {
//        return userMapper.selectByMo(username, name);
//    }
//public Page<User> selectByPage(Integer pageNum, Integer pageSize, String username, String name) {
//    Integer skipNum = (pageNum - 1) * pageSize;
//
//    List<User> userList = userMapper.selectByPage(skipNum, pageSize, username, name);
//    Integer total = userMapper.selectCountByPage(username, name);
//
//    Page<User> page = new Page<>();
//    page.setTotal(total);
//    page.setList(userList);
//    return page;
//}
public Page<User> selectByPage(Integer pageNum, Integer pageSize, String username, String name) {
    Integer skipNum = (pageNum - 1) * pageSize;

    List<User> userList = userMapper.selectByPage(skipNum, pageSize, username, name);
    Integer total = userMapper.selectCountByPage(username, name);

    Page<User> page = new PageImpl<>(userList, PageRequest.of(pageNum-1, pageSize), total);

    return page;
}

}
