package nuc.zhangchao.swagger.controller;

import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiParam;
import nuc.zhangchao.swagger.pojo.User;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

/**
 * @Author Zhang Chao
 * @Date 2020/12/21 10:54
 * @Version 1.0
 */

//因为没有视图  所以返回json字符串
@RestController
public class HelloController {
//    不推荐使用RequestMapping  需要使用准确的  或者 使用method属性 @RequestMapping(value = "hello",params ="what",method =RequestMethod.POST)
//    @RequestMapping(value = "/hello")
//    public String hello(){
//        return "hello";
//    }

    @GetMapping(value = "/hello1")
    public String hello1(){
        return "hello1";
    }

    //只要我们的接口中，返回值中存在实体类，他就会被扫描到Swagger中
    @PostMapping(value = "/user")
    public User user(){
        return new User();
    }

    //Operation   接口,不是放在类上的，是放在方法上的
    @ApiOperation("Hello控制类")
    @GetMapping(value = "/hello2")
    public String hello2(@ApiParam("用户名") String username){
        return "hello2"+username;
    }

    //为了测试
    @ApiOperation("post控制类")
    @PostMapping(value = "/postt")
    public User postt(@ApiParam("用户名")User user){
        int i = 5/0;
        return user;
    }
}
