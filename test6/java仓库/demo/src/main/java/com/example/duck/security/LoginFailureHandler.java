package com.example.duck.security;

import cn.hutool.json.JSONUtil;
import com.duck.common.vo.R;
import org.springframework.security.core.AuthenticationException;
import org.springframework.security.web.authentication.AuthenticationFailureHandler;
import org.springframework.stereotype.Component;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * spring security 登录失败异常类
 */
@Component
public class LoginFailureHandler implements AuthenticationFailureHandler {
    @Override
    public void onAuthenticationFailure(HttpServletRequest request, HttpServletResponse response, AuthenticationException exception) throws IOException, ServletException {
        // 定义json
        response.setContentType("application/json;charset=UTF-8");
        ServletOutputStream outputStream = response.getOutputStream();
        // exception.getMessage()
        R r = R.err( "Bad credentials".equals(exception.getMessage()) ? "用户名或密码错误": exception.getMessage());
        // 流
        outputStream.write(JSONUtil.toJsonStr(r).getBytes("UTF-8"));
        // 转出
        outputStream.flush();
        outputStream.close();

    }
}
