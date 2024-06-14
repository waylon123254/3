package com.example.ttdlaw.springboot.Thread.Runnable;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--28--10:11
 * @Description:    创建线程方法实现runnable接口
 * 重写run方法，线程不安全
 */

public class TestRunnable implements Runnable {
    @Override
    public void run() {
        //run方法线程体
        for (int i = 0; i < 20; i++){
            System.out.println("线程"+Thread.currentThread().getName()+"----->"+i );
        }
    }
    @Test
    public static void main(String[] args) {
        new Thread(new TestRunnable()).start();//创建线程对象
        for (int i = 0; i < 200; i++){
            System.out.println("主线程："+i);
        }

    }
}
