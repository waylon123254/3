package com.example.springbooot.common;

import lombok.*;

@Getter
@Setter
//@AllArgsConstructor
@NoArgsConstructor
@Builder
public class Result {
//    public static final String CODE_SUCCESS = "200";
//    public static final String CODE_AUTH_ERROR = "401";
//    public static final String CODE_SYS_ERROR = "500";
//
//    private String code;
//    private String msg;
//    private Object data;
//
//    public static Result success() {
//        return Result.builder().code(CODE_SUCCESS).msg("请求成功").build();
//    }
//
//    public static Result success(Object data) {
//        return new Result(CODE_SUCCESS, "请求成功", null);
//    }
//
//    public static Result error(String msg) {
//        return new Result(CODE_SYS_ERROR, msg, null);
//    }
//    public static  Result error(String code,String msg ){
//        return  new Result(code,msg,null);
//    }

//
//    public String getCode() {
//        return code;
//    }
//
//    public void setCode(String code) {
//        this.code = code;
//    }
//
//    public String getMsg() {
//        return msg;
//    }
//
//    public void setMsg(String msg) {
//        this.msg = msg;
//    }
//
//    public Object getData() {
//        return data;
//    }
//
//    public void setData(Object data) {
//        this.data = data;
//    }
public static final String CODE_SUCCESS = "200";
    public static final String CODE_AUTH_ERROR = "401";
    public static final String CODE_SYS_ERROR = "500";

    private String code;
    private String msg;
    private Object data;

    private Result(String code, String msg, Object data) {
        this.code = code;
        this.msg = msg;
        this.data = data;
    }

    public static ResultBuilder builder() {
        return new ResultBuilder();
    }

    public String getCode() {
        return code;
    }

    public String getMsg() {
        return msg;
    }

    public Object getData() {
        return data;
    }

    public static class ResultBuilder {
        private String code;
        private String msg;
        private Object data;

        public ResultBuilder code(String code) {
            this.code = code;
            return this;
        }

        public ResultBuilder msg(String msg) {
            this.msg = msg;
            return this;
        }

        public ResultBuilder data(Object data) {
            this.data = data;
            return this;
        }

        public Result build() {
            return new Result(code, msg, data);
        }
    }

    public static Result success() {
        return Result.builder().code(CODE_SUCCESS).msg("请求成功").build();
    }

    public static Result success(Object data) {
        return new Result(CODE_SUCCESS, "请求成功", data);
    }

    public static Result error(String msg) {
        return new Result(CODE_SYS_ERROR, msg, null);
    }

    public static Result error(String code, String msg) {
        return new Result(code, msg, null);
    }
}
