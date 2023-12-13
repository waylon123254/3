package com.example.duck.security;

import cn.hutool.json.JSONUtil;
import com.duck.common.vo.R;
import com.duck.utils.JwtUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.Authentication;
import org.springframework.security.web.authentication.AuthenticationSuccessHandler;
import org.springframework.stereotype.Component;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * spring security 登录成功异常类
 */
@Component
public class LoginSuccessHandler implements AuthenticationSuccessHandler {
    @Autowired
    JwtUtil jwtUtil;

    @Override
    public void onAuthenticationSuccess(HttpServletRequest request, HttpServletResponse response, Authentication authentication) throws IOException, ServletException {
        // 定义json
        response.setContentType("application/json;charset=UTF-8");
        ServletOutputStream outputStream = response.getOutputStream();

        // 生成 jwt 放置到请求头中 (前端获取请求头示例 const jwt = res.headers['authorization'])
        // authentication.getName()获取用户名
        String jwt = jwtUtil.generateToken(authentication.getName());
        response.setHeader(jwtUtil.getHeader(), jwt);

        R r = R.ok(jwt);
        // 流
        outputStream.write(JSONUtil.toJsonStr(r).getBytes("UTF-8"));
        // 转出
        outputStream.flush();
        outputStream.close();
    }
}
