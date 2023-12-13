package com.example.duck.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.duck.pojo.Role;
import org.apache.ibatis.annotations.Mapper;

/**
 * <p>
 * 角色表 Mapper 接口
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Mapper
public interface RoleMapper extends BaseMapper<Role> {

}
