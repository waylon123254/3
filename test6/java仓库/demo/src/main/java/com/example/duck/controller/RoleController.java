package com.example.duck.controller;


import cn.hutool.core.util.StrUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.duck.common.vo.Const;
import com.duck.common.vo.R;
import com.duck.pojo.Role;
import com.duck.pojo.RoleMenu;
import com.duck.pojo.UserRole;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiImplicitParam;
import io.swagger.annotations.ApiImplicitParams;
import io.swagger.annotations.ApiOperation;
import org.springframework.security.access.prepost.PreAuthorize;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

/**
 * <p>
 * 角色表 前端控制器
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@RestController
@CrossOrigin
@RequestMapping("/sys/role")
@Api(value = "后台管理角色相关业务接口",tags = "角色管理")
public class RoleController extends BaseController {

    @ApiImplicitParam(dataType = "Long",name = "id",value = "角色id",required = true)
    @ApiOperation("单个角色信息和已有权限信息")
    @PreAuthorize("hasAuthority('sys:role:list')")
    @GetMapping("/info/{id}")
    public R info(@PathVariable(name = "id") Long id){
        // 单个角色信息
        Role role = roleService.getById(id);

        // 已有权限信息
        List<RoleMenu> roleMenus = roleMenuService.list(new QueryWrapper<RoleMenu>().eq("role_id", id));
        // 流转换
        List<Long> menuIds = roleMenus.stream().map(p -> p.getMenuId()).collect(Collectors.toList());

        role.setMenuIds(menuIds);
        return R.ok(role);
    }

    @ApiOperation("角色列表")
    @ApiImplicitParams({
            @ApiImplicitParam(dataType = "String",name = "name",value = "查询的条件"),
            @ApiImplicitParam(dataType = "Int",name = "current",value = "当前页码",required = true),
            @ApiImplicitParam(dataType = "Int",name = "size",value = "每页条数",required = true)
    })
    @PreAuthorize("hasAuthority('sys:role:list')")
    @GetMapping("/list")
    public R list(String name){
         Page<Role> pageDate = roleService.page(getPage(),
                new QueryWrapper<Role>().like(StrUtil.isNotBlank(name),"name",name) // name不为空时，再查询
         );
        return R.ok(pageDate);
    }

    @ApiOperation("新增角色")
    @PreAuthorize("hasAuthority('sys:role:add')")
    @PostMapping("/add")
    public R add(@Validated @RequestBody Role role){
        // 状态
        role.setStatus(Const.STATUS_ON);
        // 保存
        roleService.save(role);
        // 返回
        return R.ok(role);
    }

    @ApiOperation("更新角色")
    @PreAuthorize("hasAuthority('sys:role:update')")
    @PutMapping("/update")
    public R update(@Validated @RequestBody Role role){
        roleService.updateById(role);
        // 更新redis缓存
        userService.clearUserAuthorityInfoByRoleId(role.getId());
        // 返回
        return R.ok(role);
    }


    @ApiOperation("单个删除角色和批量删除")
    @PreAuthorize("hasAuthority('sys:role:del')")
    @DeleteMapping("/del")
    @Transactional
    public R del(@RequestBody Long[] ids){
        roleService.removeByIds(Arrays.asList(ids));

        // 删除所有相关的中间表
        userRoleService.remove(new QueryWrapper<UserRole>().in("role_id",ids));
        roleMenuService.remove(new QueryWrapper<RoleMenu>().in("role_id",ids));

        // 更新redis缓存
        Arrays.stream(ids).forEach(id -> {
            userService.clearUserAuthorityInfoByRoleId(id);
        });
        return R.ok("");
    }

    @ApiImplicitParam(dataType = "Int",name = "roleId",value = "角色id",required = true)
    @ApiOperation("分配权限")
    @PostMapping("/perm/{roleId}")
    @PreAuthorize("hasAuthority('sys:role:perm')")
    @Transactional
    public R perm(@PathVariable(name = "roleId") Long roleId,@RequestBody Long[] menuIds){

        // 存储拆分的数据
        List<RoleMenu> roleMenus = new ArrayList<>();

        // 拆分成多条记录
        Arrays.stream(menuIds).forEach(menuId ->{
            RoleMenu roleMenu = new RoleMenu();
            roleMenu.setMenuId(menuId);
            roleMenu.setRoleId(roleId);
            // 保存
            roleMenus.add(roleMenu);
        });
        // 先删除原来的记录，再保存新的
        roleMenuService.remove(new QueryWrapper<RoleMenu>().eq("role_id", roleId));
        roleMenuService.saveBatch(roleMenus);
        // 删除redis缓存
        userService.clearUserAuthorityInfoByRoleId(roleId);
        // 返回
        return R.ok(menuIds);
    }

}
