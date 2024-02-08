package com.example.web.service.impl;

import com.example.web.entity.Admin;
import com.example.web.mapper.AdminMapper;

import com.example.web.service.AdminService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class AdminServiceImpl implements AdminService {

    private final AdminMapper adminMapper;

    @Autowired
    public AdminServiceImpl(AdminMapper adminMapper) {
        this.adminMapper = adminMapper;
    }

    @Override
    public Admin findByUsername(String username) {
        return adminMapper.findByUsername(username);
    }

    @Override
    public void register(Admin admin) {
        adminMapper.save(admin);
    }
}
