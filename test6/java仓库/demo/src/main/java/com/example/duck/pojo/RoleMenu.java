package com.example.duck.pojo;

import com.baomidou.mybatisplus.annotation.*;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.*;

import java.io.Serializable;

/**
 * <p>
 * 角色菜单中间表
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("sys_role_menu")
@ApiModel(value = "RoleMenu对象", description = "角色菜单中间表")
public class RoleMenu implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty("id")
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @ApiModelProperty("角色id")
    @TableField("role_id")
    private Long roleId;

    @ApiModelProperty("菜单id")
    @TableField("menu_id")
    private Long menuId;

    @ApiModelProperty("逻辑删除")
    @TableLogic
    private Integer deleted;


}
