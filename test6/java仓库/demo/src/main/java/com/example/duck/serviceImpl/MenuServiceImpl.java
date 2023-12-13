package com.example.duck.serviceImpl;

import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.duck.common.dto.MenuDto;
import com.duck.mapper.MenuMapper;
import com.duck.mapper.UserMapper;
import com.duck.pojo.Menu;
import com.duck.pojo.User;
import com.duck.service.MenuService;
import com.duck.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.context.SecurityContextHolder;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;

/**
 * <p>
 * 菜单表 服务实现类
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Service
public class MenuServiceImpl extends ServiceImpl<MenuMapper, Menu> implements MenuService {

    @Autowired
    UserService userService;
    @Autowired
    UserMapper userMapper;

    @Override
    public List<Menu> tree() {
        // 获取所有菜单信息(根据 orderNum 升序排序)
        List<Menu> menus = this.list(new QueryWrapper<Menu>().orderByAsc("orderNum"));

        // 转成树状结构
        return (buildTreeMenu(menus));
    }

    @Override
    public List<MenuDto> getCurrentUserNav() {

        // security上下文获取用户信息
       String username = (String) SecurityContextHolder.getContext().getAuthentication().getPrincipal();
        // 获取用户信息
        User user = userService.getByUsername(username);
        // 获取菜单
        List<Long> menuIds = userMapper.getNavMenuIds(user.getId());
        // 所有的实体
        List<Menu> menus = this.listByIds(menuIds);

        // 菜单树状结构
        List<Menu> menuTree = buildTreeMenu(menus);

        // 实体转dto
        return convert(menuTree);

    }

    private List<MenuDto> convert(List<Menu> menuTree) {
        List<MenuDto> menuDtos = new ArrayList<>();
        // 循环
        menuTree.forEach(m -> {
            MenuDto dto = new MenuDto();

            dto.setId(m.getId());
            dto.setName(m.getName());
            dto.setPerms(m.getPerms());
            dto.setLabel(m.getLabel());
            dto.setComponent(m.getComponent());
            dto.setPath(m.getPath());
            dto.setIcon(m.getIcon());
            if(m.getChildren().size() > 0){
                // 子节点调用当前方法进行再次转换
                dto.setChildren(convert(m.getChildren()));
            }
            menuDtos.add(dto);
        });
        return menuDtos;
    }


    private List<Menu> buildTreeMenu(List<Menu> menus) {
        List<Menu> finalMenus = new ArrayList<>();
        // 循环所有节点
        for(Menu menu : menus){
            for(Menu e: menus){
                if(menu.getId() == e.getParentId()){
                    menu.getChildren().add(e);
                }
            }
            // 提取父节点
            if(menu.getParentId() == 0L){
                finalMenus.add(menu);
            }
        }
        // 输出
       // System.out.println(JSONUtil.toJsonStr(finalMenus));

        return finalMenus;
    }
}
