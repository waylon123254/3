package com.example.common;

import lombok.*;


@Data
@AllArgsConstructor
@NoArgsConstructor
@Builder
public class Result<T> {
    private int code;
    private String message;
    private T data;

    public static <T> Result<T> success() {
        return new Result<>(200, "请求成功", null);
    }

    public static <T> Result<T> success(T data) {
        return new Result<>(200, "请求成功", data);
    }

    public static <T> Result<T> error(String message) {
        return new Result<>(500, message, null);
    }

    public static <T> Result<T> error(int code, String message) {
        return new Result<>(code, message, null);
    }
}
