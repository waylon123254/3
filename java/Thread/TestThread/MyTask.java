package com.example.ttdlaw.springboot.Thread.TestThread;

import java.util.concurrent.Callable;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--02--15:05
 * @Description:
 */
public class MyTask implements Callable<Object> {

    @Override
    public Object call() throws Exception {
        // TODO Auto-generated method stub
        System.out.println("通过Callable实现多线程，名称："+Thread.currentThread().getName());

        return "这是返回值";
    }
}
