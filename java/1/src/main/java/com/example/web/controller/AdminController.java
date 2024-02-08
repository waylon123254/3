package com.example.web.controller;

import com.example.web.entity.Admin;
import com.example.web.service.AdminService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

@RestController
public class AdminController {

    private final AdminService adminService;

    @Autowired
    public AdminController(AdminService adminService) {
        this.adminService = adminService;
    }

    @GetMapping("/admin/{username}")
    public Admin getAdminByUsername(@PathVariable String username) {
        return adminService.findByUsername(username);
    }

    @PostMapping("/admin")
    public void registerAdmin(@RequestBody Admin admin) {
        adminService.register(admin);
    }
}
