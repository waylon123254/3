package com.example.entity;

import lombok.Data;

@Data
public class BasePageParam {
    private Integer pageNum;
    private Integer pageSize;
    @Override
    public String toString() {
        return "BasePageParam{" +
                "pageNum=" + pageNum +
                ", pageSize=" + pageSize +
                '}';
    }
}
