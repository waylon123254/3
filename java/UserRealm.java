package com.example.springboot.Shiro.Realm;

import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.example.springboot.Entity.User;
import com.example.springboot.Service.impl.UserServiceImpl;
import org.apache.shiro.authc.*;
import org.apache.shiro.authz.AuthorizationInfo;
import org.apache.shiro.crypto.SecureRandomNumberGenerator;
import org.apache.shiro.crypto.hash.SimpleHash;
import org.apache.shiro.realm.AuthorizingRealm;
import org.apache.shiro.subject.PrincipalCollection;
import org.springframework.beans.factory.annotation.Autowired;

import java.security.SecureRandom;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--16--11:29
 * @Description:
 */
public class UserRealm extends AuthorizingRealm {

        @Autowired
        private UserServiceImpl userService;
        /**
         * 执行授权逻辑
         * @param principalCollection
         * @return
         */
        @Override
        protected AuthorizationInfo doGetAuthorizationInfo(PrincipalCollection principalCollection) {
                System.out.println("执行授权逻辑");
                return null;
        }

        /**
         * 执行认证逻辑
         * @param authenticationToken
         * @return
         * @throws AuthenticationException
         */
        @Override
        protected AuthenticationInfo doGetAuthenticationInfo(AuthenticationToken authenticationToken) throws AuthenticationException {
                System.out.println("执行认证逻辑+执行了认证doGetAuthorizationInfo");

//                UsernamePasswordToken userToken = (UsernamePasswordToken) authenticationToken;
//
//                String username = userToken.getUsername();
//
//                // 从数据库中根据用户名查询用户信息
//                // 使用 MyBatis Plus 的方式从数据库中查询用户信息
//                User user = userService.getOne(new QueryWrapper<User>().eq("username", username)); // 假设 User 是实体类，userService 是对应的 Service
//
//                if (user == null) {
//                        throw new UnknownAccountException("Unknown account: " + username);
//                }
//                // 获取数据库中存储的加密后的密码和盐值
//                String password = user.getPassword();
//                String salt = user.getSalt();
//// 生成盐值
////                String salt = new SecureRandomNumberGenerator().nextBytes().toHex();
//// 加密算法
//                String algorithmName = "MD5";
//// 加密次数
//                int times = 3;
//// 使用盐值对密码进行加密
//                String hashedPassword = new SimpleHash(algorithmName, password, salt, times).toString();
//                // 比较数据库中存储的加密后的密码与用户输入的加密后的密码是否一致
//                if (!password.equals(hashedPassword)) {
//                        throw new IncorrectCredentialsException("Incorrect credentials for account: " + username);
//                }
//                // 密码认证，shiro做
//                SimpleAuthenticationInfo info = new SimpleAuthenticationInfo("", password, "");

                return null;
        }
}
