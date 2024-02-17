package com.example.spring1.web;

import com.example.spring1.service.UserService;
import com.example.spring1.service.impl.UserServiceImpl;

public class UserAction {
    private UserService userService = new UserServiceImpl() {

        public void deleteRequest() {
            userService.deleteUser();
        }
    };

    public void deleteRequest() {
    }

    public void deleteById() {
    }
}
