package com.example.duck.controller;

import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.duck.service.*;
import com.duck.utils.RedisUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.ServletRequestUtils;
import org.springframework.web.bind.annotation.CrossOrigin;

import javax.servlet.http.HttpServletRequest;

@CrossOrigin
public class BaseController {
    @Autowired
    HttpServletRequest req;

    @Autowired
    RedisUtil redisUtil;

    @Autowired
    UserService userService;

    @Autowired
    RoleService roleService;

    @Autowired
    MenuService menuService;

    @Autowired
    UserRoleService userRoleService;

    @Autowired
    RoleMenuService roleMenuService;

    // 分页
    public Page getPage(){
        // 当前页码
        int current = ServletRequestUtils.getIntParameter(req,"current",1);
        // 每页条数
        int size = ServletRequestUtils.getIntParameter(req,"size", 20);

        return new Page(current,size);
    }
}
