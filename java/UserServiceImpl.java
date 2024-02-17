package com.example.springboot.Service.impl;

import cn.hutool.core.bean.BeanUtil;
import cn.hutool.log.Log;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.example.springboot.Common.Constants;
import com.example.springboot.Controller.Login.UserControllerLogin;
import com.example.springboot.Exception.ServiceException;
import com.example.springboot.Mapper.RoleMapper;
import com.example.springboot.Mapper.RoleMenuMapper;
import com.example.springboot.Service.ISysMenuService;
import com.example.springboot.entity.SysMenu;
import com.example.springboot.entity.User;
import com.example.springboot.Mapper.UserMapper;
import com.example.springboot.Service.IUserService;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.example.springboot.util.TokenUtil;
import io.swagger.models.auth.In;
import jdk.internal.org.objectweb.asm.tree.TryCatchBlockNode;
import jdk.nashorn.internal.parser.Token;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;
import java.util.ArrayList;
import java.util.List;

/**
 * <p>
 *  服务实现类
 * </p>
 *
 * @author lv
 * @since 2023-10-22
 */
@Service
public class UserServiceImpl extends ServiceImpl<UserMapper, User> implements IUserService {
    private static final Log LOG = Log.get();
    @Resource
    private RoleMapper roleMapper;
    @Resource
    private RoleMenuMapper roleMenuMapper;
    @Resource
    private ISysMenuService iSysMenuService;

    @Override
    public UserControllerLogin login(UserControllerLogin userControllerLogin) {
        User one = getUserInfo(userControllerLogin);
        if (one != null) {
            BeanUtil.copyProperties(one, userControllerLogin, true);
          String token= TokenUtil.getToken(one.getId().toString(),one.getPassword());
            userControllerLogin.setToken(token);
            String role =one.getRole();//
            List<SysMenu> roleMenus = getRoleMenus(role);
            userControllerLogin.setMenus(roleMenus);
            return userControllerLogin;
        } else {
            throw new ServiceException(Constants.CODE_600, "用户或密码错误");
        }
    }

    @Override
    public UserControllerLogin register(UserControllerLogin userControllerLogin) {
        User existingUser = getUserInfo(userControllerLogin);
        if (existingUser != null) {
            throw new ServiceException(Constants.CODE_600, "用户已存在");
        } else {
            User newUser = new User();
            BeanUtil.copyProperties(userControllerLogin, newUser, true);
            save(newUser);
            return userControllerLogin;
        }
    }

    private User getUserInfo(UserControllerLogin userControllerLogin) {
        QueryWrapper<User> queryWrapper = new QueryWrapper<>();
        queryWrapper.eq("username", userControllerLogin.getUsername());
        queryWrapper.eq("password", userControllerLogin.getPassword());
        User user;
        try {
            user = getOne(queryWrapper);
        } catch (Exception e) {
            LOG.error(e);
            throw new ServiceException(Constants.CODE_500, "系统错误");
        }
        return user;
    }
    private  List<SysMenu> getRoleMenus(String roleFlag){
        Integer roleId =roleMapper.selectByFlag(roleFlag);
        //当前角色菜单id集合
        List<Integer> menuIds =roleMenuMapper.selectByRoleId(roleId);
        //查出系统所有的菜单
        List <SysMenu> menus= iSysMenuService.findMenus("");

        //
        List<SysMenu> roleMenus =new ArrayList<>();
        for (SysMenu sysMenu:menus){
            if (menuIds.contains(sysMenu.getId())){
                roleMenus.add(sysMenu);
            }
            List<SysMenu> children = sysMenu.getChildren();
            children.removeIf(child->!menuIds.contains(child.getId()));
        }
        return roleMenus;
    }

}

