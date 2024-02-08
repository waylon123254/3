package com.example.web.controller;
import com.example.web.entity.Admin;
import com.example.web.service.AdminService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.ui.Model;
@Controller
public class AuthController {


        private final AdminService adminService;

        @Autowired
        public AuthController(AdminService adminService) {
            this.adminService = adminService;
        }

        // 其他代码...

        @GetMapping("/register-admin")
        public String registerAdminPage() {
            return "register-admin";
        }

        @PostMapping("/register-admin")
        public String registerAdmin(@RequestParam String username, @RequestParam String password, Model model) {
            if (adminService.findByUsername(username) != null) {
                model.addAttribute("error", "Username already exists.");
                return "register-admin";
            }
            Admin admin = new Admin();
            admin.setUsername(username);
            admin.setPassword(password);
            adminService.register(admin);
            model.addAttribute("success", "Admin registration successful.");
            return "redirect:/user/informal";
        }
    }


