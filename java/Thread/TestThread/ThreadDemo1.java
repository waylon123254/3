package com.example.ttdlaw.springboot.Thread.TestThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--02--15:01
 * @Description:
 */
public class ThreadDemo1 extends Thread{
    @Override
    public void run(){
        System.out.println("继承Thread实现多线程"+Thread.currentThread().getName());
    }
    @Test
        public static void main(String[] args) {
            // TODO Auto-generated method stub
            ThreadDemo1 threadDemo1=new ThreadDemo1();
            threadDemo1.setName("demo1");
            threadDemo1.start();
            System.out.println("主线程名称"+Thread.currentThread().getName());
        }
}
