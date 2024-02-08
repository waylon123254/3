package com.example.web.service;

import com.example.web.mapper.UserMapper;
import com.example.web.pojo.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public abstract class UserService {
    @Autowired
    private UserMapper userMapper;

    public abstract User getUserById(Long id);

    public List<User> getAllUsers() {
        return userMapper.selectAllUsers();
    }

    public void addUser(User user) {
        userMapper.insertUser(user);
    }

    public void updateUser(User user) {
        userMapper.updateUser(user);
    }

    public void deleteUser(Long id) {
        userMapper.deleteUser(id);
    }

    public abstract void deleteUserById(Long id);

    public User findByUsername(String username) {
        return userMapper.findByUsername(username);
    }

    public void register(User user) {
        userMapper.save(user);
    }
}