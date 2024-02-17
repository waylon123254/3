package com.example.springboot.entity;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableField;
import com.baomidou.mybatisplus.annotation.TableId;
import java.io.Serializable;
import java.util.Date;

import com.baomidou.mybatisplus.annotation.TableName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.Getter;
import lombok.Setter;
import lombok.ToString;

import javax.persistence.Table;

/**
 * <p>
 * 
 * </p>
 *
 * @author lv
 * @since 2023-10-22
 */
@Getter
@Setter
@ApiModel(value = "User对象", description = "")
@TableName("user1")
@ToString
public class User implements Serializable {
    private static final long serialVersionUID = 1L;

//    @TableId(value = "id", type = IdType.AUTO)
//    @ApiModelProperty("用户ID")
//    private Integer id;

    @TableId(type = IdType.AUTO) // 假设数据库使用自增主键
    private Integer id; // 或根据实际情况使用 Integer 或其他类型

    @ApiModelProperty("用户名")
    private String username;

    @ApiModelProperty("密码")
    private String password;

//    @ApiModelProperty("姓名")
//    private String name;

    @ApiModelProperty("电话号码")
    private String phone;

    @ApiModelProperty("电子邮箱")
    private String email;

    @ApiModelProperty("地址")
    private String address;

    @ApiModelProperty("头像")
    private String avatar;

    @ApiModelProperty("昵称")
    private String nickname;

    @TableField("createTime")
    @ApiModelProperty("创建时间")
    private Date createTime;

    private String role;
}
