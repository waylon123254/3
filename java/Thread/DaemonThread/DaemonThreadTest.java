package com.example.ttdlaw.springboot.Thread.DaemonThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--09--15:10
 * @Description:    守护线程类
 */
public class DaemonThreadTest {
    @Test
    public static void main(String[] args) {
        // 创建线程对象
        MyThread t1 = new MyThread();
        MyThread2 t2 = new MyThread2();
        MyThread3 t3 = new MyThread3();
        // 设置为守护线程
        t1.setDaemon(true);
        // 启动线程
        t1.start();
        t2.run();
        t3.thread.start();
    }
}

class MyThread extends Thread{
    @Override
    public void run() {
        for (int i = 0; i < 100; i++){
            System.out.println(Thread.currentThread().getName()+"@@@@"+i);
        }
    }
}

class MyThread2 implements  Runnable{
    @Override
    public void run() {
        for (int i = 0; i < 100; i++){
            System.out.println(Thread.currentThread().getName()+"----"+i);
        }
    }
}
class  MyThread3 {
    Thread thread = new Thread(new Runnable() {
        @Override
        public void run() {
            // 线程的行为定义在这里
        }
    });
}

