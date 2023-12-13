package com.example.duck.common.dto;

import lombok.Data;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

/**
 *    {
 *      name:'manager',
 *      label:'用户管理',
 *      icon:'s-manager',
 *      path:'/sys/users',
 *      component:'sys/user',
 *      children:[]
 *    }
 */
@Data
public class MenuDto implements Serializable {
    private Long id;
    private String name;
    private String perms;
    private String label;
    private String path;
    private String icon;
    private String component;
    private List<MenuDto> children = new ArrayList<>();
}
