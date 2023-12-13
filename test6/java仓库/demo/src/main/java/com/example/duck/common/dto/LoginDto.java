package com.example.duck.common.dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import javax.validation.constraints.NotBlank;
import java.io.Serializable;

/**
 * 登录
 */
@Data
@AllArgsConstructor
@NoArgsConstructor

public class LoginDto implements Serializable {

    @NotBlank(message = "用户名不能为空")
    private String username;

    @NotBlank(message = "密码不能为空")
    private String password;

    @NotBlank(message = "图片token不能为空")
    private String token;

    @NotBlank(message = "验证码不能为空")
    private String code;

}
