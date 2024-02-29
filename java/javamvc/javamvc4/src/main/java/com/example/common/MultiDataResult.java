package com.example.common;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.List;

@Data
@AllArgsConstructor
@NoArgsConstructor
@Builder
public class MultiDataResult <T>{
    private int code;
    private String message;
    private List<T> data;

    public static <T> MultiDataResult<T> success(List<T> data) {
        return new MultiDataResult<>(200, "请求成功", data);
    }

    public static <T> MultiDataResult<T> error(String message) {
        return new MultiDataResult<>(500, message, null);
    }

    public static <T> MultiDataResult<T> error() {
        return new MultiDataResult<>(400, "存在错误", null);
    }
}