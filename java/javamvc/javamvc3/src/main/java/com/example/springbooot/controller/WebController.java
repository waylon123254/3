package com.example.springbooot.controller;

import com.example.springbooot.common.Result;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;
/*
这段代码是一个基于Spring框架的Java Web应用程序，定义了四个接口，它们的作用如下：

@GetMapping("/get"):

请求方式：GET
路径：/get
功能：返回传入的name参数，通过URL查询字符串的形式传递。
@PostMapping("/post"):

请求方式：POST
路径：/post
功能：返回传入的对象，通过请求体以JSON格式传递。
@PutMapping("/put"):

请求方式：PUT
路径：/put
功能：返回传入的对象，通过请求体以JSON格式传递。这个接口通常用于更新资源。
@DeleteMapping("/delete"):

请求方式：DELETE
路径：/delete
功能：返回传入的id参数，通过URL路径参数的形式传递。这个接口通常用于删除资源。
这些接口都使用了Spring框架提供的注解来定义请求方式和路径，通过它们可以实现基本的CRUD操作（创建、读取、更新、删除）。
每个接口都会返回一个Result对象，其中包含了操作的结果数据。
 */
@Controller
@RequestMapping("/web")
public class WebController {
//    @RequestMapping
//    public Result hello(String name){
//        return  Result.success(name);
//    }


//    public  String Hello(){
//        return  "Hello World";
//    }
//    public Result Hello(){
//        return  Result.success("hello");
//    }
//    @GetMapping("/get")
//    public  Result get(String name){
//        return Result.success(name);
//    }
//    @PostMapping("/post")//POST http://localhost:8080/web/post?name=xxx
//    public  Result post(@RequestBody Object object){
//        return Result.success(object);
//    }
//    @PutMapping("/put")
//    public Result put(@RequestBody Object object){
//        return  Result.success(object);
//
//    }
//    @DeleteMapping("/delete/{id}") // 将id添加到路径中
//    public Result delete(@PathVariable Integer id){
//        return Result.success(id);
//    }
@RequestMapping(value = "/hello", method = RequestMethod.GET)
@ResponseBody
public String hello() {
    return "Hello World!";
}

    @RequestMapping(value = "/get", method = RequestMethod.GET)
    @ResponseBody
    public String get() {
        return "GET请求成功";
    }

    @RequestMapping(value = "/post", method = RequestMethod.POST)
    @ResponseBody
    public String post() {
        return "POST请求成功";
    }
}

