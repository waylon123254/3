package com.example.duck.service;

import com.baomidou.mybatisplus.extension.service.IService;
import com.duck.common.dto.MenuDto;
import com.duck.pojo.Menu;

import java.util.List;

/**
 * <p>
 * 菜单表 服务类
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
public interface MenuService extends IService<Menu> {


    List<Menu> tree();
    List<MenuDto> getCurrentUserNav();
}
