package com.example.ttdlaw.springboot.Thread.TestThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--02--15:03
 * @Description:
 */
public class ThreadDemo3 {
    @Test
    public static void main(String[] args) {

        //匿名内部类使用Lambda表达式

        Thread thread2=new Thread(()->{
            System.out.println("通过Runnable实现多线程，名称"+Thread.currentThread().getName());
        });
        thread2.setName("demo2,Lambda");
        thread2.start();
        System.out.println("主线程名称"+Thread.currentThread().getName());
    }
}
