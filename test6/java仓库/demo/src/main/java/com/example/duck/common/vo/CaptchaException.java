package com.example.duck.common.vo;

import org.springframework.security.core.AuthenticationException;

/**
 * 验证码异常
 */
public class CaptchaException extends AuthenticationException {
    public CaptchaException(String msg) {
        super(msg);
    }
}
