package com.example.duck.security;

import cn.hutool.json.JSONUtil;
import com.duck.common.vo.R;
import org.springframework.security.access.AccessDeniedException;
import org.springframework.security.web.access.AccessDeniedHandler;
import org.springframework.stereotype.Component;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * 权限不足的处理器
 */
@Component // 注入
public class JwtAccessDeniedHandler implements AccessDeniedHandler {
    @Override
    public void handle(HttpServletRequest request, HttpServletResponse response, AccessDeniedException accessDeniedException) throws IOException, ServletException {
        // 定义json
        response.setContentType("application/json;charset=UTF-8");
        ServletOutputStream outputStream = response.getOutputStream();
        // 权限不足(状态码：403)
        response.setStatus(HttpServletResponse.SC_FORBIDDEN);

        // 返回信息
        R r = R.err(accessDeniedException.getMessage());

        // 流
        outputStream.write(JSONUtil.toJsonStr(r).getBytes("UTF-8"));
        // 转出
        outputStream.flush();
        outputStream.close();
    }
}
