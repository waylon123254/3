package com.example.duck.controller;


import cn.hutool.core.map.MapUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.duck.common.dto.MenuDto;
import com.duck.common.vo.R;
import com.duck.pojo.Menu;
import com.duck.pojo.RoleMenu;
import com.duck.pojo.User;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiImplicitParam;
import io.swagger.annotations.ApiImplicitParams;
import io.swagger.annotations.ApiOperation;
import org.springframework.security.access.prepost.PreAuthorize;
import org.springframework.util.StringUtils;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;

import java.security.Principal;
import java.util.List;

/**
 * <p>
 * 菜单表 前端控制器
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@RestController
@RequestMapping("/sys/menu")
@CrossOrigin
@Api(value = "后台管理导航栏和权限相关业务接口",tags = "菜单管理")
public class MenuController extends BaseController{

    @ApiOperation("当前登录用户的菜单")
    @GetMapping("/nav")
    public R nav(Principal principal){

        // 获取当前登录用户信息
        User user = userService.getByUsername(principal.getName());

        // 获取权限信息
        String authorityInfo = userService.getUserAuthorityInfo(user.getId());

        // 转换成数组
        String[] authorityInfoArray = StringUtils.tokenizeToStringArray(authorityInfo, ",");

        // 获取导航栏信息
        List<MenuDto> navs = menuService.getCurrentUserNav();

        return R.ok(MapUtil.builder()
                .put("authoritys",authorityInfoArray)
                .put("menus",navs)
                .map()
        );
    }

    @ApiOperation("单个菜单信息")
    @ApiImplicitParams({
            @ApiImplicitParam(dataType = "Long",name = "id",value = "菜单id",required = true),
//            @ApiImplicitParam(dataType = "string",name = "token",value = "授权令牌",required = true,paramType = "header"),
    })

    @GetMapping("/info/{id}")
    @PreAuthorize("hasAuthority('sys:menu:list')") // 权限
    public R info(@PathVariable(name = "id") Long id){
        return R.ok(menuService.getById(id));
    }

    @ApiOperation("菜单列表")
    @GetMapping("/list")
    @PreAuthorize("hasAuthority('sys:menu:list')") // 权限
    public R list(){
         List<Menu> menus =  menuService.tree();
         return R.ok(menus);
    }

    @ApiOperation("新增菜单")
    @PostMapping("/add")
    @PreAuthorize("hasAuthority('sys:menu:add')") // 权限
    public R add(@Validated @RequestBody Menu menu){
        menuService.save(menu);
        return R.ok(menu);
    }

    @ApiOperation("更新菜单")
    @PutMapping("/update")
    @PreAuthorize("hasAuthority('sys:menu:update')") // 权限
    public R update(@Validated @RequestBody Menu menu){
        menuService.updateById(menu);

        // 清除与该菜单相关的权限缓存
        userService.clearUserAuthorityInfoByMenuId(menu.getId());
        return R.ok(menu);
    }

    @ApiImplicitParam(dataType = "Long",name = "id",value = "菜单id",required = true)
    @ApiOperation("删除菜单")
    @DeleteMapping("/del/{id}")
    @PreAuthorize("hasAuthority('sys:menu:del')") // 权限
    public R del(@PathVariable(name = "id") Long id){
        // 先删除子菜单
        long count = menuService.count(new QueryWrapper<Menu>().eq("parent_id", id));
        if(count > 0){
            return R.err("请先删除子菜单");
        }

        // 清除与该菜单相关的权限缓存
        userService.clearUserAuthorityInfoByMenuId(id);
        // 删除
        menuService.removeById(id);
        // 同步删除中间关联表
        roleMenuService.remove(new QueryWrapper<RoleMenu>().eq("menu_id",id));

        return R.ok("");
    }
}
