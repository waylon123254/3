package com.example.web.service;
import com.example.web.entity.Admin;

import org.springframework.stereotype.Service;
@Service
public interface AdminService {


    Admin findByUsername(String username);
    void register(Admin admin);
    }

