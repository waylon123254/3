package com.example.springboot.Config.interceptor;

import cn.hutool.core.util.StrUtil;
import com.auth0.jwt.JWT;
import com.auth0.jwt.JWTVerifier;
import com.auth0.jwt.algorithms.Algorithm;
import com.auth0.jwt.exceptions.JWTDecodeException;
import com.auth0.jwt.exceptions.JWTVerificationException;
import com.example.springboot.Exception.ServiceException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.servlet.HandlerInterceptor;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * 这段代码是一个拦截器（Interceptor），用于对请求进行拦截和处理。在HandlerInterceptor接口中，preHandle方法在请求处理之前被调用。
 *
 * 在JwtInterceptor类的preHandle方法中，首先获取请求的URI，并判断是否是以"/user"开头的请求。如果是，则需要进行权限验证，否则直接放行。
 *
 * 如果是需要进行权限验证的请求，首先从请求头中获取token参数，如果token为空，则抛出异常，提示用户未登录。
 *
 * 然后从token中解析出用户id，通过id查询数据库获取用户信息。如果用户不存在，则抛出异常，提示用户注册一个帐号。
 *
 * 接着，使用JWTVerifier来验证token的合法性，如果验证失败，则抛出异常，提示用户token验证失败，请重新登录。
 *
 * 如果都验证通过，则返回true，请求继续向下执行。如果返回false，则请求被拦截，不会继续向下执行。
 * */

public class JwtInterceptor implements HandlerInterceptor {
//        @Autowired
//        private IUserService userService;
//
//        @Override
//        public boolean preHandle(HttpServletRequest request, HttpServletResponse response, Object handler)
//                throws Exception {
//            String requestURI = request.getRequestURI();
//            if (requestURI.startsWith("/user")) { // 判断请求是否是以"/user"开头
//                String token = request.getHeader("token");
//                if (StrUtil.isBlank(token)) {
//                    throw new ServiceException(401, "未登录，请先登录");
//                }
//                String userId;
//                try {
//                    userId = JWT.decode(token).getAudience().get(0);
//                } catch (JWTDecodeException j) {
//                    throw new RuntimeException("401");
//                }
//                User user = userService.getById(userId);
//                if (user == null) {
//                    throw new ServiceException(401, "用户不存在，请注册一个");
//                }
//                // 验证 token
//                JWTVerifier jwtVerifier = JWT.require(Algorithm.HMAC256(user.getPassword())).build();
//                try {
//                    jwtVerifier.verify(token);
//                } catch (JWTVerificationException e) {
//                    throw new ServiceException(401, "token验证失败，请重新登录");
//                }
//                return true; // 验证通过放行
//            }
//            return true; // 其他路径直接放行
//        }
}