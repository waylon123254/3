package com.example.duck.serviceImpl;

import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.duck.mapper.RoleMapper;
import com.duck.pojo.Role;
import com.duck.service.RoleService;
import org.springframework.stereotype.Service;

import java.util.List;

/**
 * <p>
 * 角色表 服务实现类
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Service
public class RoleServiceImpl extends ServiceImpl<RoleMapper, Role> implements RoleService {

    @Override
    public List<Role> listRolesByUserId(Long userId) {

        // 先从sys_user_role关联表查出role
        List<Role> roles = this.list(new QueryWrapper<Role>()
                .inSql("id", "select role_id from sys_user_role where deleted = 0 and user_id = " + userId));

        return roles;
    }
}
