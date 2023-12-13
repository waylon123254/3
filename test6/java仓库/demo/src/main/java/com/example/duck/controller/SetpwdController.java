package com.example.duck.controller;

import com.duck.common.vo.R;
import com.duck.security.LoginSuccessHandler;
import com.duck.service.UserService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiImplicitParam;
import io.swagger.annotations.ApiImplicitParams;
import io.swagger.annotations.ApiOperation;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.web.bind.annotation.*;

@CrossOrigin
@RestController
@RequestMapping("/sys")
@Api(value = "后台管理用户相关业务接口",tags = "登录管理")
public class SetpwdController {
    @Autowired
    UserService userService;

    /**
     * 密码构造器
     */
    @Autowired
    BCryptPasswordEncoder bCryptPasswordEncoder;

    @Autowired
    LoginSuccessHandler loginSuccessHandler;

    @ApiOperation("生成密码")
    @GetMapping("/setpwd")
    public R setpwd(){
        // 加密后的密码
        String pwd = bCryptPasswordEncoder.encode("admin888");
        // 对比
        boolean matches = bCryptPasswordEncoder.matches("admin888", pwd);
        // 打印
        System.out.println("匹配结果：" + matches);
        // 返回
        return R.ok(pwd);
    }
    @ApiOperation("用户登录")
    @ApiImplicitParams({
            @ApiImplicitParam(dataType = "string",name = "username",value = "账号",required = true),
            @ApiImplicitParam(dataType = "string",name = "password",value = "密码",required = true),
            @ApiImplicitParam(dataType = "string",name = "code",value = "验证码",required = true),
            @ApiImplicitParam(dataType = "string",name = "token",value = "图片token",required = true),
    })
    @PostMapping ("/login")
    public R login(@RequestParam("username") String username,@RequestParam("password") String password,
                    @RequestParam("code") String code, @RequestParam("token") String token){
        // 获取当前登录用户的状态
        return R.ok(loginSuccessHandler);

    }

    @ApiOperation("用户退出")
    @PostMapping ("/logout")
    public R logout(){
        return R.ok("ok");
    }

}
