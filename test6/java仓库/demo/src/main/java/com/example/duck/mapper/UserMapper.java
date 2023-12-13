package com.example.duck.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.duck.pojo.User;
import org.apache.ibatis.annotations.Mapper;

import java.util.List;

/**
 * <p>
 * 用户表 Mapper 接口
 * </p>
 *
 * @author Duck
 * @since 2022-03-22
 */
@Mapper
public interface UserMapper extends BaseMapper<User> {

    List<Long> getNavMenuIds(Long userId);

    List<User> listByMenuId(Long menuId);
}
