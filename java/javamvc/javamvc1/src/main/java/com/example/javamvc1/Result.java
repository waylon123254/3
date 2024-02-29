package com.example.javamvc1;
/*
这是一个简单的泛型类 Result<T>，用于封装接口的返回结果。它包含了以下几个属性和方法：

code：表示返回结果的状态码。
msg：表示返回结果的消息。
data：表示返回结果的数据。
该类提供了一些常用的方法，如：

getCode() 和 setCode(String code)：用于获取和设置状态码。
getMsg() 和 setMsg(String msg)：用于获取和设置消息。
getData() 和 setData(T data)：用于获取和设置数据。
另外，还有一个无参构造方法和一个带参构造方法用于创建 Result 对象。

最后，还提供了一个静态方法 success()，用于创建一个默认的成功的 Result 对象，并设置其状态码为 "0"，消息为 "成功"。
 */
public class Result<T> {
    private String code;
    private String msg;
    private T data;

    public String getCode() {
        return code;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public String getMsg() {
        return msg;
    }

    public void setMsg(String msg) {
        this.msg = msg;
    }

    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }

    public Result() {
    }

    public Result(T data) {
        this.data = data;
    }

    public static Result success() {
        Result result = new Result<>();
        result.setCode("0");
        result.setMsg("成功");
        return result;
    }

    public static <T> Result<T> success(T data) {
        Result<T> result = new Result<>(data);
        result.setCode("0");
        result.setMsg("成功");
        return result;
    }

    public static Result error(String code, String msg) {
        Result result = new Result();
        result.setCode(code);
        result.setMsg(msg);
        return result;
    }
}
