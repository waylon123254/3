package com.example.duck.security;

import com.baomidou.mybatisplus.core.toolkit.StringUtils;
import com.duck.common.vo.CaptchaException;
import com.duck.common.vo.Const;
import com.duck.utils.RedisUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import org.springframework.web.filter.OncePerRequestFilter;

import javax.servlet.FilterChain;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * 验证码过滤器
 */
@Component
public class CaptchaFilter extends OncePerRequestFilter {
    @Autowired
    RedisUtil redisUtil;
    @Autowired
    LoginFailureHandler loginFailureHandler;

    @Override
    protected void doFilterInternal(HttpServletRequest httpServletRequest, HttpServletResponse httpServletResponse, FilterChain filterChain) throws ServletException, IOException {

        String url = httpServletRequest.getRequestURI();
        if("/sys/login".equals(url) && httpServletRequest.getMethod().equals("POST")){
            try{
                validate(httpServletRequest);// 校验验证码
            }catch (CaptchaException e){
                // 如果校验失败，跳转到认证失败处理器
                loginFailureHandler.onAuthenticationFailure(httpServletRequest, httpServletResponse, e);
            }
        }
        // 正确继续执行
        filterChain.doFilter(httpServletRequest,httpServletResponse);

    }
    // 校验验证码逻辑
    private void validate(HttpServletRequest httpServletRequest) {
        String code = httpServletRequest.getParameter("code");
        String key = httpServletRequest.getParameter("token");

        if(StringUtils.isBlank(code) || StringUtils.isBlank(key)){
            throw new CaptchaException("验证码错误了");
        }

        // redis 里校验
        if(!code.equals(redisUtil.hget(Const.CAPTCHA_KEY,key))){
            throw new CaptchaException("验证码错误了");
        }

        // 去掉redis 里的验证码
        redisUtil.hdel(Const.CAPTCHA_KEY,key);
    }
}
