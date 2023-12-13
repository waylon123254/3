package com.example.duck.pojo;

import com.baomidou.mybatisplus.annotation.*;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import javax.validation.constraints.NotBlank;
import javax.validation.constraints.NotNull;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


/**
 * <p>
 * 菜单表
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("sys_menu")
@ApiModel(value = "Menu对象", description = "菜单表")
public class Menu implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty("菜单id")
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @NotNull(message = "父级菜单不能为空")
    @ApiModelProperty("父级菜单id,一级菜单为0")
    @TableField("parent_id")
    private Long parentId;

    //@NotBlank(message = "前端文件名称不能为空")
    @ApiModelProperty("对应前端文件名称")
    @TableField("name")
    private String name;

    @NotBlank(message = "前端展示名称不能为空")
    @ApiModelProperty("对应前端展示的名称")
    @TableField("label")
    private String label;

    @ApiModelProperty("对应前端展示的路径")
    @TableField("path")
    private String path;

    @ApiModelProperty("对应前端component")
    @TableField("component")
    private String component;

    @ApiModelProperty("菜单图标")
    @TableField("icon")
    private String icon;


    @NotBlank(message = "授权码不能为空")
    @ApiModelProperty("授权(多个有,号隔开，如：user:list,user:create)")
    @TableField("perms")
    private String perms;

    @NotNull(message = "类型不能为空")
    @ApiModelProperty("类型:0 目录,1 菜单,2 按钮")
    @TableField("type")
    private Integer type;

    @NotNull(message = "状态不能为空")
    @ApiModelProperty("状态：1启用，2禁用")
    @TableField("status")
    private Integer status;

    @ApiModelProperty("排序")
    @TableField("orderNum")
    private Integer orderNum;

    @ApiModelProperty("创建时间")
    @TableField(fill = FieldFill.INSERT)
    private Date createTime;

    @ApiModelProperty("更新时间")
    @TableField(fill = FieldFill.INSERT_UPDATE)
    private Date updateTime;

    @ApiModelProperty("逻辑删除")
    @TableField
    private Integer deleted;


    @TableField(exist = false)
    private List<Menu> children = new ArrayList<>();


}
