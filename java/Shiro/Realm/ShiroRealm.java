//package com.example.springboot.Shiro.Realm;
//
//import com.example.springboot.Entity.User;
//import com.example.springboot.Mapper.UserMapper;
//import com.example.springboot.Shiro.Utils.MD5Util;
//import org.apache.shiro.authc.*;
//import org.apache.shiro.authz.AuthorizationInfo;
//import org.apache.shiro.authz.SimpleAuthorizationInfo;
//import org.apache.shiro.realm.AuthorizingRealm;
//import org.apache.shiro.subject.PrincipalCollection;
//import org.apache.shiro.util.ByteSource;
//import org.springframework.beans.factory.annotation.Autowired;
//
//import java.util.HashSet;
//import java.util.Set;
//
///**
// * @Auther: 吕宏博
// * @Date: 2024--03--23--22:08
// * @Description:    自定义 Realm 类，用于身份认证和授权
// */
//public class ShiroRealm extends AuthorizingRealm {
//        @Autowired
//        private UserMapper userMapper;
//    /**
//     * 获取授权信息
//     * @param principalCollection 身份信息集合
//     * @return 授权信息
//     */
//    @Override
//    protected AuthorizationInfo doGetAuthorizationInfo(PrincipalCollection principalCollection) {
//
//        // 获取当前用户的用户名
//        String username = principalCollection.getPrimaryPrincipal().toString();
//
//        // 模拟从数据库获取当前用户的角色
//        Set<String> roleNameSet = new HashSet<>();
//        roleNameSet.add("系统管理员");
//
//        // 模拟从数据库获取当前用户的权限
//        Set<String> permissionNameSet = new HashSet<>();
//        permissionNameSet.add("sys:user:list");// 查看列表
//        permissionNameSet.add("sys:user:view");// 查看用户详情
//        permissionNameSet.add("sys:user:create");// 创建用户
//        permissionNameSet.add("sys:user:update");// 修改用户
//        permissionNameSet.add("sys:user:delete");// 删除用户
//
//        // 创建简单授权信息对象，包含用户的角色和权限信息
//        SimpleAuthorizationInfo info = new SimpleAuthorizationInfo();
//
//        // 设置用户角色和权限信息到授权信息对象中
//        info.setRoles(roleNameSet);
//        info.setStringPermissions(permissionNameSet);
//
//        System.out.println("授权检查");
//        return info;
//    }
//    /**
//     * 获取认证信息
//     * @param authenticationToken 认证令牌
//     * @return 认证信息
//     * @throws AuthenticationException 认证异常
//     */
//    @Override
//    protected AuthenticationInfo doGetAuthenticationInfo(AuthenticationToken authenticationToken) throws AuthenticationException {
//        UsernamePasswordToken token = (UsernamePasswordToken) authenticationToken;
//        //1、获取用户输入的用户名
//        String username = token.getUsername();
//        //2、获取用户的密码
//        String password = new String(token.getPassword());
//
//        //3、根据用户名去查询数据库中对应用户信息
//        User user = userMapper.selectByUsername(username);
//
//        if (user == null) {
//            throw new UnknownAccountException("用户名不存在");
//        }
//
//        // 对查询到的用户信息进行处理
//        String salt = user.getSalt();
//        String encryptedPassword = MD5Util.md5_Private_Salt(password, salt);
//
//        // 比较密文密码，如果密码不正确，抛出异常
//        if (!user.getPassword().equals(encryptedPassword)) {
//            throw new IncorrectCredentialsException("密码错误");
//        }
//
//        if (user.getStatus() == -1) {
//            throw new DisabledAccountException("账户被禁用");
//        }
//        if (user.getStatus() == 1) {
//            throw new LockedAccountException("账户被锁定");
//        }
//
//        //4、认证信息对象
//        SimpleAuthenticationInfo simpleAuthenticationInfo =
//                new SimpleAuthenticationInfo(username, password, getName());
//
//        System.out.println("登录检查");
//
//        // 设置盐值，用于加密密码
//        simpleAuthenticationInfo.setCredentialsSalt(ByteSource.Util.bytes(user.getUsername()));
//        return simpleAuthenticationInfo;
//    }
//}
