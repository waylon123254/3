package com.example.duck.pojo;

import com.baomidou.mybatisplus.annotation.*;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.*;

import javax.validation.constraints.Email;
import javax.validation.constraints.NotBlank;
import javax.validation.constraints.NotNull;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/**
 * <p>
 * 用户表
 * </p>
 *
 * @author Duck
 * @since 2022-03-22
 */
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("sys_user")
@ApiModel(value = "User对象", description = "用户表")
public class User implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty("id")
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @NotBlank(message = "账号不能为空")
    @ApiModelProperty("用户账号")
    @TableField("username")
    private String username;

    @NotBlank(message = "用户密码不能为空")
    @ApiModelProperty("用户密码")
    @TableField("password")
    private String password;

    @NotNull(message = "用户状态不能为空")
    @ApiModelProperty("用户状态")
    @TableField("status")
    private Integer status;

    @NotBlank(message = "用户头像不能为空")
    @ApiModelProperty("用户头像")
    @TableField("avatar")
    private String avatar;

    @NotBlank(message = "邮箱不能为空")
    @Email(message = "邮箱格式不正确")
    @ApiModelProperty("用户邮箱")
    @TableField("email")
    private String email;

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

    // 关联的角色
    @TableField(exist = false)
    private List<Role> roles = new ArrayList<>();


}
