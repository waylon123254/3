//package com.example.springboot.Shiro.Configuration;
//
//import com.example.springboot.Shiro.Realm.UserRealm;
//import org.apache.shiro.authc.credential.HashedCredentialsMatcher;
//import org.apache.shiro.spring.LifecycleBeanPostProcessor;
//import org.apache.shiro.spring.web.ShiroFilterFactoryBean;
//import org.apache.shiro.web.mgt.DefaultWebSecurityManager;
//import org.springframework.beans.factory.annotation.Qualifier;
//import org.springframework.context.annotation.Bean;
//import org.springframework.context.annotation.Configuration;
//import org.apache.shiro.mgt.SecurityManager;
//import org.apache.shiro.spring.security.interceptor.AuthorizationAttributeSourceAdvisor;
//import java.util.LinkedHashMap;
//
///**
// * @Auther: 吕宏博
// * @Date: 2024--03--22--15:29
// * @Description:
// */
//@Configuration
//public class ShiroConfiguration {
//    @Bean
//    public static LifecycleBeanPostProcessor getLifecycleBeanPostProcessor() {
//        return new LifecycleBeanPostProcessor();
//    }
//
//    /**
//     * 创建 ShiroFilterFactoryBean
//     */
//    @Bean
//    public ShiroFilterFactoryBean getShiroFilterFactoryBean (@Qualifier("securityManager") DefaultWebSecurityManager securityManager) {
//        ShiroFilterFactoryBean filterFactoryBean = new ShiroFilterFactoryBean();
//        // 设置安全管理器
//        filterFactoryBean.setSecurityManager(securityManager);
//        /**
//         * Shiro 内置过滤器， 可以实现权限相关的拦截器
//         * 常用的过滤器：
//         *      anon: 无需认证(登录)即可访问
//         *      authc: 必须认证才可访问
//         *      user: 如果使用 rememberMe
//         *      perms: 该资源必须得到资源权限才能访问
//         *      role: 该资源必须得到角色权限才可访问
//         */
//        LinkedHashMap<String, String> filterMap = new LinkedHashMap<>();
//        // user目录下的文件，必须要认证才能访问。
//        filterMap.put("/user/**", "authc");
//
//        filterMap.put("/index", "anon");
//
//        filterMap.put("/login", "anon");
//
//        //过滤静态资源
//        filterMap.put("/css/**","anon");
//        filterMap.put("/img/**","anon");
//        filterMap.put("/js/**","anon");
//        filterMap.put("asserts","anon");
//        filterMap.put("fonts","anon");
//
//        //配置不登录可以访问的资源，anon 表示资源都可以匿名访问
//        filterMap.put("/swagger-ui.html", "anon");
//        filterMap.put("/webjars/**", "anon");
//        filterMap.put("/swagger-resources/**", "anon");
//        filterMap.put("/v2/**", "anon");
//        filterMap.put("/u/**", "anon");
//        filterMap.put("/swagger/**", "anon");
//        filterMap.put("/doc.html", "anon");
//        filterMap.put("/simpleBillRepertory/getShareStockUrl", "anon");
//        filterMap.put("/alicheck", "anon");
//        filterMap.put("/api-docs/**", "anon");
//
//        //退出过滤器
//        filterMap.put("/logout","logout");
//
//        filterFactoryBean.setFilterChainDefinitionMap(filterMap);
//
//        // 修改调整的登陆页面
//        filterFactoryBean.setLoginUrl("/toLogin");
//
//
//        //登录成功后跳转的页面
//        filterFactoryBean.setSuccessUrl("/index");
//
//        return filterFactoryBean;
//    }
//
//    /**
//     * 创建 DefaultWebSecurityManager
//     * @Qualifier 注解 表示传入的参数是下边那个放入spring容器中的bean
//     */
//    @Bean(name = "securityManager")
//    public DefaultWebSecurityManager getDefaultWebSecurityManager(@Qualifier("userRealm") UserRealm userRealm) {
//        DefaultWebSecurityManager securityManager = new DefaultWebSecurityManager();
//        // 这里要吧 userRealm 和 securityManager 关联
//        securityManager.setRealm(userRealm);
//        return securityManager;
//    }
//
//    @Bean(name = "userRealm")
//    public UserRealm getUserRealm(){
//        return ;
//    }
//
//
//}
