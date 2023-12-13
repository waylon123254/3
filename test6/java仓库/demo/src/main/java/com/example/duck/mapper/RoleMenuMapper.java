package com.example.duck.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.duck.pojo.RoleMenu;
import org.apache.ibatis.annotations.Mapper;

/**
 * <p>
 * 角色菜单中间表 Mapper 接口
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Mapper
public interface RoleMenuMapper extends BaseMapper<RoleMenu> {

}
