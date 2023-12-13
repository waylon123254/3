package com.example.duck.config;

import com.duck.security.*;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.method.configuration.EnableGlobalMethodSecurity;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.config.http.SessionCreationPolicy;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.web.authentication.UsernamePasswordAuthenticationFilter;

/**
 * Spring Security 核心配置
 */

@Configuration
@EnableWebSecurity
@EnableGlobalMethodSecurity(prePostEnabled = true) // 请求之前都要进行权限校验

public class SecurityConfig extends WebSecurityConfigurerAdapter {

    @Autowired
    LoginFailureHandler loginFailureHandler;

    @Autowired
    LoginSuccessHandler loginSuccessHandler;

    @Autowired
    CaptchaFilter captchaFilter;

    @Autowired
    JwtAuthenticationEntryPoint jwtAuthenticationEntryPoint;

    @Autowired
    JwtAccessDeniedHandler jwtAccessDeniedHandler;

    @Autowired
    UserDetailServiceImpl userDetailService;

    @Autowired
    JwtLogoutSuccessHandler jwtLogoutSuccessHandler;

    // 重新设置jwt构造器
    @Bean
    JwtFilter jwtFilter() throws Exception {
        JwtFilter jwtFilter = new JwtFilter(authenticationManager());
        return jwtFilter;
    }

    // 告诉Security密码的加密形式
    @Bean
    BCryptPasswordEncoder bCryptPasswordEncoder(){
        return new BCryptPasswordEncoder();
    }


    // 白名单
    private static final String[] URL_WHITELIST = {
            "/sys/login",
            "/sys/logout",
            "/sys/captcha", // 图片验证码
            "/sys/setpwd", // 生成密码
            "/favicon.ico", // 前端项目图标
            "/doc.html",
            "/swagger-ui.html",
            "/webjars/**",
            "/v3/**",
            "/swagger-resources/**"
    };
    // http 安全配置
    protected void configure(HttpSecurity http) throws  Exception{
        // 跨域问题申明
        http.cors().and().csrf().disable()

                // 登录配置 (前端登录调用时 需要引入qs组件库 示例: this.axios.post('/login?'+qs.stringify(this.loginForm) )
                .formLogin()
                .loginProcessingUrl("/sys/login") //指定处理登录的请求url
                    .successHandler(loginSuccessHandler)
                    .failureHandler(loginFailureHandler) // 失败

                // 退出配置
                .and()
                .logout()
                .logoutSuccessUrl("/sys/logout") //指定处理退出的请求url
                .logoutSuccessHandler(jwtLogoutSuccessHandler)

                // 禁用 session
                .and()
                    .sessionManagement()
                    .sessionCreationPolicy(SessionCreationPolicy.STATELESS)

                // 配置拦截规则
                .and()
                    .authorizeRequests()
                    .antMatchers(URL_WHITELIST).permitAll()
                    .anyRequest().authenticated()

                // 异常处理器
                .and()
                .exceptionHandling()
                .authenticationEntryPoint(jwtAuthenticationEntryPoint) // 入口
                .accessDeniedHandler(jwtAccessDeniedHandler) // 权限不足的处理器

                // 配置自定义的过滤器
                .and()
                .addFilter(jwtFilter()) // 加载jwt过滤器
                .addFilterBefore(captchaFilter, UsernamePasswordAuthenticationFilter.class) // 验证码过滤器要在用户和密码过滤器之前
        ;
    }
    // 重写 UserDetailServiceImpl
    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        auth.userDetailsService(userDetailService);
    }
}
