package com.example.springboot.Core.Utils.JwtUtil;

import com.baomidou.mybatisplus.core.toolkit.StringUtils;
import com.example.springboot.Core.Utils.RedisUtil.RedisUtils;
import io.jsonwebtoken.Claims;
import io.jsonwebtoken.SignatureException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import org.springframework.web.method.HandlerMethod;
import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.handler.HandlerInterceptorAdapter;

import javax.annotation.Resource;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--05--18:02
 * @Description:
 */
@Component
public class InterceptorJWT extends HandlerInterceptorAdapter {

    @Autowired
    private RedisUtils redisUtils;
    @Resource
    private JwtUtils jwtUtils;

    @Resource
    private JwtProperties jwtProperties;
    @Override
    public boolean preHandle(HttpServletRequest request,
                             HttpServletResponse response, Object handler) {
        // 若目标方法忽略了安全性检查，则直接调用目标方法
        if (handler.getClass().isAssignableFrom(HandlerMethod.class)) {
            //如果方法上有@IgnoreSecurity注解，则不需要进行token验证
            IgnoreSecurity ignoreSecurity = ((HandlerMethod) handler).getMethodAnnotation(IgnoreSecurity.class);
            if (ignoreSecurity != null) {
                return true;
            }
        }else {
            String token = request.getParameter(jwtProperties.header);
            if (StringUtils.isNotEmpty(token)) {
                Claims claims = jwtUtils.getTokenClaim(token);
                Long userId = (Long) claims.get("userId");
                String redisToken = redisUtils.getToken(userId);
                token = request.getParameter(jwtProperties.header);
                if (!redisToken.equals(token)) {
                    throw new SignatureException(jwtProperties.header + "失效，请重新登录。");
                }
                if (claims == null || jwtUtils.isTokenExpired(claims.getExpiration())) {
                    throw new SignatureException(jwtProperties.header + "失效，请重新登录。");
                }
                /** 设置 identityId 用户身份ID */
                request.setAttribute("identityId", claims.getSubject());
            }else {
                throw new SignatureException(jwtProperties.header + "失效，请重新登录。");
            }
        }
        return true;
    }


    @Override
    public void postHandle(HttpServletRequest request,
                           HttpServletResponse response, Object handler,
                           ModelAndView modelAndView) throws Exception {

        super.postHandle(request, response, handler, modelAndView);
    }


    @Override
    public void afterCompletion(HttpServletRequest request,
                                HttpServletResponse response, Object handler, Exception ex)
            throws Exception {

        super.afterCompletion(request, response, handler, ex);
    }


    @Override
    public void afterConcurrentHandlingStarted(HttpServletRequest request,
                                               HttpServletResponse response, Object handler) throws Exception {

        super.afterConcurrentHandlingStarted(request, response, handler);
    }
}
