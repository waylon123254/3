package com.example.duck.security;


import cn.hutool.json.JSONUtil;
import com.duck.common.vo.R;
import com.duck.utils.JwtUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.Authentication;
import org.springframework.security.web.authentication.logout.LogoutSuccessHandler;
import org.springframework.security.web.authentication.logout.SecurityContextLogoutHandler;
import org.springframework.stereotype.Component;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * jwt 退出处理器
 */
@Component
public class JwtLogoutSuccessHandler implements LogoutSuccessHandler {

    @Autowired
    JwtUtil jwtUtil;

    @Override
    public void onLogoutSuccess(HttpServletRequest request, HttpServletResponse response, Authentication authentication) throws IOException, ServletException {
        // 手动退出
        if(authentication != null){
            new SecurityContextLogoutHandler().logout(request,response,authentication);
        }

        // 定义json
        response.setContentType("application/json;charset=UTF-8");
        ServletOutputStream outputStream = response.getOutputStream();

        // jwt返回空
        response.setHeader(jwtUtil.getHeader(), "");
        // 返回信息
        R r = R.ok("");
        // 流
        outputStream.write(JSONUtil.toJsonStr(r).getBytes("UTF-8"));
        // 转出
        outputStream.flush();
        outputStream.close();

    }
}
