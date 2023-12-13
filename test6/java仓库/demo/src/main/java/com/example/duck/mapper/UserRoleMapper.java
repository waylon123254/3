package com.example.duck.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.duck.pojo.UserRole;
import org.apache.ibatis.annotations.Mapper;

/**
 * <p>
 * 用户角色中间表 Mapper 接口
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Mapper
public interface UserRoleMapper extends BaseMapper<UserRole> {

}
