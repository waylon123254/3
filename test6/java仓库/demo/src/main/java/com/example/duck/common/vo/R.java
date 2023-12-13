package com.example.duck.common.vo;
/**
 * 数据结果处理
 */

import lombok.Data;

import java.io.Serializable;

@Data
public class R implements Serializable {
    private int code;
    private String msg;
    private Object data;

    // 操作成功
    public static R ok(Object data){
        return ok(200,"请求成功",data);
    }

    public static R ok(int code,String msg,Object data){
        R r= new R();
        r.setCode(code);
        r.setMsg(msg);
        r.setData(data);
        return r;

    }

    // 操作失败
    public static R err(String msg){
        return err(400,msg,null);
    }

    public static R err(int code,String msg,Object data){
        R r = new R();
        r.setCode(code);
        r.setMsg(msg);
        r.setData(data);
        return r;
    }
}
