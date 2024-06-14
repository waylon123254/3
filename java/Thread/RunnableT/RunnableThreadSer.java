package com.example.ttdlaw.springboot.Thread.RunnableT;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--04--15:11
 * @Description: 加入锁后
 */
public class RunnableThreadSer  implements  Runnable{
    private int ticket = 100;
    Object obj = new Object();
        @Override
        public void run(){
            while(true){
                synchronized (obj) {
                    if (ticket > 0) {
                        try {
                            Thread.sleep(100);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }

                        System.out.println(Thread.currentThread().getName() + "正在出售第 " + ticket + " 张票");
                        ticket--;
                    }
                }
            }
        }
}

class  ticketDemo2{
    @Test
    public static void main(String[] args) {
        //这里没有改动，只是在上一个代码中加了一把锁
        RunnableThreadSer r1 = new RunnableThreadSer();

        Thread t1 = new Thread(r1,"窗口一");
        Thread t2 = new Thread(r1,"窗口二");
        Thread t3 = new Thread(r1,"窗口三");

        t1.start();
        t2.start();
        t3.start();

    }
}

