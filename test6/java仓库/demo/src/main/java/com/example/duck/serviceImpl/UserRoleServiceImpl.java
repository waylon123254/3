package com.example.duck.serviceImpl;

import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.duck.mapper.UserRoleMapper;
import com.duck.pojo.UserRole;
import com.duck.service.UserRoleService;
import org.springframework.stereotype.Service;

/**
 * <p>
 * 用户角色中间表 服务实现类
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Service
public class UserRoleServiceImpl extends ServiceImpl<UserRoleMapper, UserRole> implements UserRoleService {

}
