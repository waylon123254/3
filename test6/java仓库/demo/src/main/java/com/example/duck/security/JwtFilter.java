package com.example.duck.security;

import cn.hutool.core.util.StrUtil;
import com.duck.pojo.User;
import com.duck.service.UserService;
import com.duck.utils.JwtUtil;
import io.jsonwebtoken.Claims;
import io.jsonwebtoken.JwtException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.authentication.AuthenticationManager;
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;
import org.springframework.security.core.context.SecurityContextHolder;
import org.springframework.security.web.authentication.www.BasicAuthenticationFilter;

import javax.servlet.FilterChain;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * JWT认证过滤器
 */
public class JwtFilter extends BasicAuthenticationFilter {

    @Autowired
    JwtUtil jwtUtil;
    @Autowired
    UserDetailServiceImpl userDetailService; // 获取角色、菜单
    @Autowired
    UserService userService; // 获取用户id


    public JwtFilter(AuthenticationManager authenticationManager) {
        super(authenticationManager);
    }
    // 重写过滤流程
    @Override
    protected void doFilterInternal(HttpServletRequest request, HttpServletResponse response, FilterChain chain) throws IOException, ServletException {
      // 获取jwt进行解析流程
        String jwt = request.getHeader(jwtUtil.getHeader());
        if(StrUtil.isBlankOrUndefined(jwt)){
            // jwt存在继续执行
            chain.doFilter(request, response);
            return;
        }
        // 判断jwt是否存在
        Claims claims = jwtUtil.getClaimsGetToken(jwt);
        if(claims == null){
            throw new JwtException("token 异常");
        }
        if(jwtUtil.isTokenExpired(claims)){
            throw new JwtException("token已过期");
        }
        // jwt 合法
        String username = claims.getSubject();

        // 获取用户id
        User user = userService.getByUsername(username);

        // 获取用户权限信息
        UsernamePasswordAuthenticationToken token =
                new UsernamePasswordAuthenticationToken(username, null,userDetailService.getUserAuthority(user.getId()));
        // 根据上下文设置认证的主体
        SecurityContextHolder.getContext().setAuthentication(token);
        // 继续执行过滤器
        chain.doFilter(request, response);

    }
}
