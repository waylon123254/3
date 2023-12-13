package com.example.duck.service;

import com.baomidou.mybatisplus.extension.service.IService;
import com.duck.pojo.User;

/**
 * <p>
 * 用户表 服务类
 * </p>
 *
 * @author Duck
 * @since 2022-03-22
 */
public interface UserService extends IService<User> {

    /**
     * 获取用户信息
     * @param username
     * @return
     */
    User getByUsername(String username);

    /**
     *  获取用户角色和权限
     * @param userId
     * @return
     */
    String getUserAuthorityInfo(Long userId);

    /**
     * 清除redis缓存
     * @param username
     */
    void clearUserAuthorityInfo(String username);

    /**
     * 根据角色的变更清除缓存
     * @param roleId
     */

    void clearUserAuthorityInfoByRoleId(Long roleId);

    /**
     * 根据菜单的变更清除缓存
     * @param menuId
     */

    void clearUserAuthorityInfoByMenuId(Long menuId);
}
