package com.example.duck.pojo;

import com.baomidou.mybatisplus.annotation.*;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.*;

import java.io.Serializable;

/**
 * <p>
 * 用户角色中间表
 * </p>
 *
 * @author Duck
 * @since 2022-03-23
 */
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("sys_user_role")
@ApiModel(value = "UserRole对象", description = "用户角色中间表")
public class UserRole implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty("id")
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @ApiModelProperty("用户id")
    @TableField("user_id")
    private Long userId;

    @ApiModelProperty("角色id")
    @TableField("role_id")
    private Long roleId;

    @ApiModelProperty("逻辑删除")
    @TableLogic
    private Integer deleted;


}
