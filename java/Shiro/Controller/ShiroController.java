package com.example.springboot.Shiro.Controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RestController;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--19--22:58
 * @Description:
 */
@RestController
public class ShiroController {
    @RequestMapping({"/","/index"})
    public String toIndex(Model model) {
        model.addAttribute("msg", "hello,Shiro");
        return "index";
    }

    @RequestMapping("/user/add")
    public String add() {
        return "user/add";
    }

    @RequestMapping("/user/update")
    public String update() {
        return "user/update";
    }

    @RequestMapping("/toLogin")
    public String toLogin() {
        return "login";
    }

    @RequestMapping("/suc")
    public String suc() {
        return "suc";
    }
}
