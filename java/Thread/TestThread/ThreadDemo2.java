package com.example.ttdlaw.springboot.Thread.TestThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--02--15:02
 * @Description:
 */
public class ThreadDemo2 implements Runnable{
    @Override
    public void run() {
        System.out.println("通过Runnable实现多线程，名称："+Thread.currentThread().getName());
    }
    @Test
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        //ThreadDemo1 threadDemo1=new ThreadDemo1();
        ThreadDemo2 threadDemo2 =new ThreadDemo2();
        Thread thread =new Thread(threadDemo2);
        thread.setName("demo2");
        thread.start();
        System.out.println("主线程名称"+Thread.currentThread().getName());
    }
}

