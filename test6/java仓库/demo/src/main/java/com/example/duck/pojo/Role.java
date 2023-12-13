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
 * 角色表
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("sys_role")
@ApiModel(value = "Role对象", description = "角色表")
public class Role implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty("角色id")
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @NotBlank(message = "角色名称不能为空")
    @ApiModelProperty("角色名称")
    @TableField("name")
    private String name;

    @NotBlank(message = "角色唯一编码不能为空")
    @ApiModelProperty("角色唯一编码")
    @TableField("code")
    private String code;

    @NotNull(message = "角色状态不能为空")
    @ApiModelProperty("角色状态")
    @TableField("status")
    private Integer status;

    @NotBlank(message = "角色描述不能为空")
    @ApiModelProperty("角色描述")
    @TableField("remark")
    private String remark;

    // 字段添加填充内容
    @ApiModelProperty("创建时间")
    @TableField(fill = FieldFill.INSERT)
    private Date createTime;

    @ApiModelProperty("更新时间")
    @TableField(fill = FieldFill.INSERT_UPDATE)
    private Date updateTime;

    @ApiModelProperty("逻辑删除")
    @TableLogic
    private Integer deleted;

    // 已有权限信息
    @TableField(exist = false)
    private List<Long> menuIds = new ArrayList<>();


}
