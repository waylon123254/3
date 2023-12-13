package com.example.duck.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.duck.pojo.Menu;
import org.apache.ibatis.annotations.Mapper;

/**
 * <p>
 * 菜单表 Mapper 接口
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Mapper
public interface MenuMapper extends BaseMapper<Menu> {

}
