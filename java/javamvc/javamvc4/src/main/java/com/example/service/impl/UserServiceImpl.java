package com.example.service.impl;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.example.entity.User;
import com.example.mapper.UserMapper;
import com.example.service.UserService;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

/**
 * <p>
 * 用户表 服务实现类
 * </p>
 *
 * @author lv
 * @since 2023-12-17 10:33:50
 */
@Service
@Transactional
public class UserServiceImpl extends ServiceImpl<UserMapper, User> implements UserService {
    @Autowired
    private UserMapper userMapper;

    @Override
    public void insertUser(User user) {
        save(user);
    }

    @Override
    public void deleteUserById(Integer id) {
        removeById(id);
    }

    @Override
    public User getUserById(Integer id) {
        return getById(id);
    }

    @Override
    public void updateUser(User user) {

        updateById(user);
    }

    @Override
    public List<User> getUserByName(String name) {
        QueryWrapper<User> wrapper = new QueryWrapper<>();
        wrapper.eq("name", name);
        return list(wrapper);
    }

    @Override
    public List<User> selectByMore(String username, String name) {
        QueryWrapper<User> queryWrapper = new QueryWrapper<>();
        // 判断参数是否为空，不为空则添加对应的查询条件
        if (username != null) {
            queryWrapper.like("username", username);
        }
        if (name != null) {
            queryWrapper.like("name", name);
        }

        return userMapper.selectList(queryWrapper);
    }

    public Page<User> selectByPage(String username, String name, Integer pageNum, Integer pageSize) {
        Page<User> page = new Page<>(pageNum, pageSize);
        QueryWrapper<User> queryWrapper = new QueryWrapper<>();

        if (username != null) {
            queryWrapper.like("username", username);
        }
        if (name != null) {
            queryWrapper.like("name", name);
        }

        // 调用selectPage方法执行分页查询
        userMapper.selectPage(page, queryWrapper);
      List<User> userList = page.getRecords();
        return page;
    }

}
