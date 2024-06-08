package com.example.springboot.Shiro.Utils;


import org.apache.shiro.SecurityUtils;
import org.apache.shiro.authc.AuthenticationException;
import org.apache.shiro.authc.UsernamePasswordToken;
import org.apache.shiro.cache.CacheManager;
import org.apache.shiro.cache.MemoryConstrainedCacheManager;
import org.apache.shiro.mgt.DefaultSecurityManager;
import org.apache.shiro.realm.Realm;
import org.apache.shiro.realm.text.IniRealm;
import org.apache.shiro.subject.Subject;
import org.springframework.data.mongodb.core.mapping.TextScore;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--23--14:41
 * @Description:
 */
public class ShiroUtils {
    /***
     *
     * 初始化shiro环境
     *
     * */
   static {
        // 1. 初始化 Shiro 的安全管理器
        DefaultSecurityManager securityManager = new DefaultSecurityManager();

        // 2. 实例化一个 IniRealm 对象，从类路径加载 shiro.ini 配置文件
//        Realm realm = new IniRealm("classpath:shiro.ini");
//        Realm realm = new ShiroRealm();
//        securityManager.setRealm(realm);

        //3、缓存器
        // 3.1 配置 CacheManager
        CacheManager cacheManager = new MemoryConstrainedCacheManager();

        // 3.2 将 CacheManager 设置到 securityManager 中
        securityManager.setCacheManager(cacheManager);
        // 4. 将 IniRealm 设置为 securityManager 的 Realm
        SecurityUtils.setSecurityManager(securityManager);
    }

    public static void login(String username, String password) {
        // 创建一个 Subject 实例
        Subject subject = SecurityUtils.getSubject();

        // 创建用于认证的 token，记录用户认证的身份和凭证即账号和密码
        UsernamePasswordToken token = new UsernamePasswordToken(username, password);

        try {
            // 主体要进行登录，进行认证检查
            subject.login(token);
            System.out.println("用户认证状态：" + subject.isAuthenticated());
            System.out.println("用户名：" + subject.getPrincipal());
            // 可以在这里添加更多登录成功后的逻辑处理
        } catch (AuthenticationException e) {
            System.out.println("用户认证失败：" + e.getMessage());
        }
        subject.logout();
        System.out.println("用户认证状态：" + subject.isAuthenticated());
    }

}
