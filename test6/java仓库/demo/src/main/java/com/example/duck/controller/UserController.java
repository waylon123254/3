package com.example.duck.controller;


import cn.hutool.core.map.MapUtil;
import cn.hutool.core.util.StrUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.duck.common.dto.PwdDto;
import com.duck.common.vo.Const;
import com.duck.common.vo.R;
import com.duck.pojo.Role;
import com.duck.pojo.User;
import com.duck.pojo.UserRole;
import com.duck.service.UserService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiImplicitParam;
import io.swagger.annotations.ApiImplicitParams;
import io.swagger.annotations.ApiOperation;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.access.prepost.PreAuthorize;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.util.Assert;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;

import java.security.Principal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * <p>
 * 用户表 前端控制器
 * </p>
 *
 * @author Duck
 * @since 2022-03-22
 */
@CrossOrigin
@RestController
@RequestMapping("/sys/user")
@Api(value = "后台管理用户相关业务接口",tags = "用户管理")
public class UserController extends BaseController{

    // 密码加密码
    @Autowired
    BCryptPasswordEncoder passwordEncoder;
    @Autowired
    private UserService userService;


    @ApiOperation("当前登录用户信息")
    @GetMapping("/info")
//    @PreAuthorize("hasAuthority('sys:user:list')")
    public R info(Principal principal){
        User user = userService.getByUsername(principal.getName());
        return R.ok(MapUtil.builder()
                .put("id", user.getId())
                .put("username", user.getUsername())
                .put("avatar", user.getAvatar())
                .map()
        );
    }

    @ApiOperation("单个用户信息")
    @ApiImplicitParam(dataType="Long",name = "id",value = "用户id",required = true)
    @GetMapping("/userInfo/{id}")
    @PreAuthorize("hasAuthority('sys:user:list')")
    public R userInfo(@PathVariable("id") Long id){
        User user = userService.getById(id);
        // 断言进行判断
        Assert.notNull(user,"找不到该管理员");

        // 根据id查询角色
        List<Role> roles = roleService.listRolesByUserId(id);
        user.setRoles(roles);
        return R.ok(user);
    }


    //@PreAuthorize("hasRole('admin')") // 拥有admin角色才能访问
    @ApiOperation("用户列表")
    @ApiImplicitParams({
            @ApiImplicitParam(dataType = "String",name = "username",value = "查询的条件"),
            @ApiImplicitParam(dataType = "Integer",name = "current",value = "当前页码",required = true),
            @ApiImplicitParam(dataType = "Integer",name = "size",value = "每页条数",required = true)
    })
    @GetMapping("/list")
    @PreAuthorize("hasAuthority('sys:user:list')")
    public R list(String username){
        Page<User> pageData = userService.page(getPage(), new QueryWrapper<User>()
                .like(StrUtil.isNotBlank(username),"username", username));
        // 查询所拥有的角色
        pageData.getRecords().forEach(u -> {
            u.setRoles(roleService.listRolesByUserId(u.getId()));
        });
        return R.ok(pageData);
    }

    @ApiOperation("新增用户")
    @PostMapping("/add")
    @PreAuthorize("hasAuthority('sys:user:add')")
    public R add(@Validated @RequestBody User user){
        // 默认状态
        user.setStatus(Const.STATUS_ON);
        // 默认密码
        String password = passwordEncoder.encode(Const.DEFAULT_PASSWORD);
        user.setPassword(password);
        // 默认头像
        user.setAvatar(Const.DEFAULT_AVATAR);
        // 保存
        userService.save(user);
        // 返回
        return R.ok(user);
    }

    @ApiOperation("更新用户")
    @PutMapping("/update")
    @PreAuthorize("hasAuthority('sys:user:update')")
    public R update(@Validated @RequestBody User user){
        user.setPassword(passwordEncoder.encode(user.getPassword()));
        userService.updateById(user);
        return R.ok(user);
    }

    @Transactional
    @ApiOperation("删除用户")
    @PostMapping("/del")
    @PreAuthorize("hasAuthority('sys:user:del')")
    public R del(@RequestBody Long[] ids){

        userService.removeByIds(Arrays.asList(ids));
        // 删除关联的表user_role
        userRoleService.remove(new QueryWrapper<UserRole>().in("user_id", ids));
        return R.ok("");
    }


    @Transactional
    @ApiOperation("分配角色")
    @PostMapping("/assign/{userId}")
    @PreAuthorize("hasAuthority('sys:user:assign')")
    public R assignRoles(@PathVariable("userId") Long userId,@RequestBody Long[] roleIds){

        // 存储拆分的数据
        List<UserRole> userRoles = new ArrayList<>();
        // 循环
        Arrays.stream(roleIds).forEach(r -> {
            UserRole userRole = new UserRole();
            userRole.setRoleId(r);
            userRole.setUserId(userId);
            // 保存
            userRoles.add(userRole);
        });
        // 先删除原来的记录，再保存新的
        userRoleService.remove(new QueryWrapper<UserRole>().eq("user_id", userId));
        userRoleService.saveBatch(userRoles);
        // 先获取用户信息再删除redis缓存
        User user = userService.getById(userId);
        userService.clearUserAuthorityInfo(user.getUsername());

        // 返回
        return R.ok(roleIds);
    }


    @ApiImplicitParam(dataType = "Long",name = "userId",value = "用户id",required = true)
    @ApiOperation("重置密码")
    @PostMapping("/repass")
    @PreAuthorize("hasAuthority('sys:user:repass')")
    public R repass(Long userId){
        User user = userService.getById(userId);
        // 断言进行判断
        Assert.notNull(user,"用户不存在");

        user.setPassword(passwordEncoder.encode(Const.DEFAULT_PASSWORD));
        userService.updateById(user);
        return R.ok("");
    }


    @ApiImplicitParam(dataType = "String",name = "name",value = "当前用户名")
    @ApiOperation("修改当前用户的密码")
    @PostMapping("/upUserPwd")
    public R upUserPwd(@Validated @RequestBody PwdDto pwdDto,Principal principal){
        // 当前用户名
        User user = userService.getByUsername(principal.getName());
        // 判断输入的oldPassword是否与旧密码匹配
        Boolean matches = passwordEncoder.matches(pwdDto.getOldPassword(),user.getPassword());
        if(!matches){
            return R.err("旧密码不正确");
        }

        user.setPassword(passwordEncoder.encode(pwdDto.getPassword()));
        userService.updateById(user);
        return R.ok(user);
    }


}
