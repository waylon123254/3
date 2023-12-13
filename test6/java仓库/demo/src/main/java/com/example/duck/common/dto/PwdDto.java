package com.example.duck.common.dto;

import lombok.Data;

import javax.validation.constraints.NotBlank;
import java.io.Serializable;

/**
 * 修改当前用户的密码
 */
@Data

public class PwdDto implements Serializable {
    @NotBlank(message = "新密码不能为空")
    private String password;
    @NotBlank(message = "旧密码不能为空")
    private String oldPassword;
}
