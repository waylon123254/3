package com.example.duck.handler;


import com.baomidou.mybatisplus.core.handlers.MetaObjectHandler;
import org.apache.ibatis.reflection.MetaObject;
import org.springframework.stereotype.Component;

import java.util.Date;

@Component
public class MyHandler implements MetaObjectHandler {
    // 插入时，的时间策略
    @Override
    public void insertFill(MetaObject metaObject) {
        this.setFieldValByName("createTime", new Date(),metaObject);
        this.setFieldValByName("updateTime", new Date(),metaObject);

    }

    // 更新时，的时间策略
    @Override
    public void updateFill(MetaObject metaObject) {
        this.setFieldValByName("updateTime", new Date(),metaObject);
    }
}
