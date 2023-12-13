package com.example.duck.security;

import cn.hutool.json.JSONUtil;
import com.duck.common.vo.R;
import org.springframework.security.core.AuthenticationException;
import org.springframework.security.web.AuthenticationEntryPoint;
import org.springframework.stereotype.Component;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 *  入口
 */
@Component
public class JwtAuthenticationEntryPoint implements AuthenticationEntryPoint {
    @Override
    public void commence(HttpServletRequest request, HttpServletResponse response, AuthenticationException authException) throws IOException, ServletException {
        // 定义json
        response.setContentType("application/json;charset=UTF-8");
        ServletOutputStream outputStream = response.getOutputStream();

        // 未认证（状态码：401）
        response.setStatus(HttpServletResponse.SC_UNAUTHORIZED);

        // 返回信息
        R r = R.err("请先登录！");
        // 流
        outputStream.write(JSONUtil.toJsonStr(r).getBytes("UTF-8"));
        // 转出
        outputStream.flush();
        outputStream.close();
    }
}
