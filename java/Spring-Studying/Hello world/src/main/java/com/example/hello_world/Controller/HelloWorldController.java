package com.example.hello_world.Controller;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/hello")
public class HelloWorldController {
    @RequestMapping("/say")
    public String say(){
        return "Hello World";
    }
}