package com.example.duck.security;

import com.duck.pojo.User;
import com.duck.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.GrantedAuthority;
import org.springframework.security.core.authority.AuthorityUtils;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.stereotype.Service;

import java.util.List;

/**
 * 用户登录查库
 */
@Service
public class UserDetailServiceImpl implements UserDetailsService {
    @Autowired
    UserService userService;


    @Override
    public UserDetails loadUserByUsername(String username) throws UsernameNotFoundException {
        // 获取数据库的用户信息
        User user =  userService.getByUsername(username);
        // 判断
        if(user == null){
            throw new UsernameNotFoundException("用户名或密码错误");
        }
        // 返回用户信息及权限
        return new AccountUser(user.getId(),user.getUsername(),user.getPassword(),getUserAuthority(user.getId()));
    }

    /**
     * 自定义一个方法(权限)
     * 获取用户权限信息（角色，菜单权限）
     * @param userId
     * @return
     */
    public List<GrantedAuthority> getUserAuthority(Long userId){

        // 角色(ROLE_admin)、菜单操作权限 sys:user:list
        String authority =  userService.getUserAuthorityInfo(userId); // ROLE_admin,ROLE_normal,sys:user:list,....

        // 转载
        return AuthorityUtils.commaSeparatedStringToAuthorityList(authority);
    }


}
