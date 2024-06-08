package com.example.springboot.Shiro.Controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--26--14:54
 * @Description:
 */
@Controller
public class MyController {
    @RequestMapping("/test")
    public String test() {
        return "test.html";
    }

}
