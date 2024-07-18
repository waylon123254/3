package com.example.springboot.Shiro.Config;

import com.example.springboot.Shiro.Realm.UserRealm;
import org.apache.commons.collections4.map.LinkedMap;
import org.apache.shiro.spring.web.ShiroFilterFactoryBean;
import org.apache.shiro.web.mgt.DefaultWebSecurityManager;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Lazy;

import java.util.LinkedHashMap;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--16--11:27
 * @Description:    shiro配置类
 */
@Configuration
public class ShiroConfig {
    /**
     * 创建 ShiroFilterFactoryBean
     */
    /**
     * 创建 ShiroFilterFactoryBean
     */
    public ShiroFilterFactoryBean shiroFilterFactoryBean(DefaultWebSecurityManager securityManager) {
        ShiroFilterFactoryBean filterFactoryBean = new ShiroFilterFactoryBean();
        // 设置安全管理器
        filterFactoryBean.setSecurityManager(securityManager);
        //添加shiro内置过滤器

        /***
         * anon：匿名访问，允许所有用户访问，一般用于静态资源的放行。
         * authc：身份认证，要求用户已经登录才能访问，如果未登录，则跳转到登录页面进行认证。
         * user：用户认证通过或者记住我登录的都可以访问，一般用于一些需要登录后才能进行的操作。
         * perms：需要指定权限才能访问，例如/admin接口需要拥有admin权限才能访问。
         * roles：需要指定角色才能访问，例如/user接口需要拥有user角色才能访问。
         * logout：退出登录，执行logout操作后会跳转到登录页面。
         *
         * */
        LinkedHashMap<String, String> filterMap = new LinkedHashMap<>();
        //静态资源处理
        filterMap.put("/js/***","anon");
        filterMap.put("/html/**","anon");
        filterMap.put("/css/**","anon");
        filterMap.put("/vue/**","anon");
        //swagger配置
        filterMap.put("/swagger-ui.html", "anon");
        filterMap.put("/v2/api-docs", "anon");
        filterMap.put("/swagger-resources/**", "anon");
        filterMap.put("/webjars/**", "anon");

        //配置退出过滤器
        filterMap.put("/logout","logout");

        //拦截user下所以请求
        filterMap.put("/user/**","authc");

        //拦截后跳转到登录请求
        filterFactoryBean.setLoginUrl("/");
        // 设置登录成功后跳转的页面
        filterFactoryBean.setSuccessUrl("");
        //设置拦截
        filterFactoryBean.setFilterChainDefinitionMap(filterMap);

        return filterFactoryBean;
    }
    /**
     * 创建 DefaultWebSecurityManager
     */
    /**
     * 创建 DefaultWebSecurityManager
     * @Qualifier 注解 表示传入的参数是下边那个放入spring容器中的bean
     */
    @Bean(name = "securityManager")
    public DefaultWebSecurityManager getDefaultWebSecurityManager(@Qualifier("userRealm") UserRealm userRealm) {
        DefaultWebSecurityManager securityManager = new DefaultWebSecurityManager();
        // 这里要吧 userRealm 和 securityManager 关联
        securityManager.setRealm(userRealm);
        return securityManager;
    }
    /**
     * 创建 Realm
     */

    /**
     * 创建 Realm
     * @Bean 的作用： 将该方法返回的对象放入spring容器， 以便给上边的方法使用
     */
}
