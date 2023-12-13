package com.example.duck.serviceImpl;

import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.duck.mapper.UserMapper;
import com.duck.pojo.Menu;
import com.duck.pojo.Role;
import com.duck.pojo.User;
import com.duck.service.MenuService;
import com.duck.service.RoleService;
import com.duck.service.UserService;
import com.duck.utils.RedisUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.stream.Collectors;

/**
 * <p>
 * 用户表 服务实现类
 * </p>
 *
 * @author Duck
 * @since 2022-03-22
 */
@Service
public class UserServiceImpl extends ServiceImpl<UserMapper, User> implements UserService {

    @Autowired
    RoleService roleService;
    @Autowired
    UserMapper userMapper;
    @Autowired
    MenuService menuService;
    @Autowired
    RedisUtil redisUtil;// 用于缓存用户权限

    /**
     * 获取用户名
     * @param username
     * @return
     */
    @Override
    public User getByUsername(String username) {
        return getOne(new QueryWrapper<User>().eq("username",username));
    }

    /**
     * 获取权限
     * @param userId
     * @return
     */
    @Override
    public String getUserAuthorityInfo(Long userId) {

        // 获取用户id
        User user = userMapper.selectById(userId);

        // ROLE_admin,ROLE_normal,sys:user:list,....
        String authority = ""; // 角色，菜单的承载

        // 判断 有缓存则先取，没有再去数据库获取
        if(redisUtil.hasKey("DuckAuthority:" + user.getUsername())){
            authority = (String) redisUtil.get("DuckAuthority:" + user.getUsername());
        }else{
            // 获取用户角色
            List<Role> roles = roleService.list(new QueryWrapper<Role>()
                    .inSql("id", "select role_id from sys_user_role where deleted = 0 and user_id = " + userId));

            if(roles.size() > 0){
                // 流转换获取角色数据
                String roleCodes = roles.stream().map(r -> "ROLE_" + r.getCode()).collect(Collectors.joining(","));
                authority = roleCodes.concat(",");
            }

            // 菜单操作权限
            List<Long> menuIds =  userMapper.getNavMenuIds(userId);

            if(menuIds.size() > 0){
                List<Menu> menus = menuService.listByIds(menuIds);
                String menusPerms = menus.stream().map(m -> m.getPerms()).collect(Collectors.joining(","));
                authority = authority.concat(menusPerms);
            }

            // redis缓存（时间一个小时）
            redisUtil.set("DuckAuthority:"+user.getUsername(),authority,60*60);
        }
        return authority;
    }

    /**
     * 根据权限的变更清除缓存
     * @param username
     */
    @Override
    public void clearUserAuthorityInfo(String username) {
        redisUtil.del("DuckAuthority:" + username);
    }

    /**
     * 根据角色的变更清除缓存
     * @param roleId
     */
    @Override
    public void clearUserAuthorityInfoByRoleId(Long roleId) {
        List<User> users = this.list(new QueryWrapper<User>()
                .inSql("id", "select user_id from sys_user_role where deleted = 0 and role_id = " + roleId));
        users.forEach(u ->{
            this.clearUserAuthorityInfo(u.getUsername());
        });
    }

    /**
     * 根据菜单的变更清除缓存
     * @param menuId
     */
    @Override
    public void clearUserAuthorityInfoByMenuId(Long menuId) {
        List<User> users = userMapper.listByMenuId(menuId);
        users.forEach(u ->{
            this.clearUserAuthorityInfo(u.getUsername());
        });
    }

}
