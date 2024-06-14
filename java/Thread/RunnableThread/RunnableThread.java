package com.example.ttdlaw.springboot.Thread.RunnableThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--10--14:12
 * @Description: 线程安全问题
 */
public class RunnableThread implements Runnable{
    private int ticket = 100;
    @Override
    public void run(){
        while(true){
            if(ticket>0){
                try {
                    Thread.sleep(100);  //语句一
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                System.out.println(Thread.currentThread().getName()+"正在出售第 "+ticket+" 张票");  //语句二
                ticket--;  //语句三
            }
        }
    }
}
class ticketDemo1 {
    @Test
    public static void main(String[] args) {
        RunnableThread r1 = new RunnableThread();

        Thread t1 = new Thread(r1, "窗口一");
        Thread t2 = new Thread(r1, "窗口二");
        Thread t3 = new Thread(r1, "窗口三");

        t1.start();
        t2.start();
        t3.start();
    }
}
/**
 * 线程同步代码块的使用
 * 1.同步代码块
 * */
class  RunnableThreadTest implements  Runnable{
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

class ticketDemo2 {
    @Test
    public static void main(String[] args) {
        //这里没有改动，只是在上一个代码中加了一把锁
        RunnableThreadTest r1 = new RunnableThreadTest();

        Thread t1 = new Thread(r1,"窗口一");
        Thread t2 = new Thread(r1,"窗口二");
        Thread t3 = new Thread(r1,"窗口三");

        t1.start();
        t2.start();
        t3.start();


    }
}

class  RunnableThreadTest3 implements  Runnable{
    private int ticket = 100;
    private volatile boolean isRunning = true;

    @Override
    public void run() {
        while (isRunning && ticket > 0) {
            sellTicket1();
        }
    }

    public synchronized void sellTicket1() {
        if (ticket > 0) {
            System.out.println(Thread.currentThread().getName() + "售出了第" + (100 - ticket + 1) + "张票");
            ticket--;
        }
    }

    public void stop() {
        isRunning = false;
    }
}


class ticketDemo3 {
    @Test
    public static void main(String[] args) {
        //这里没有改动，只是在上一个代码中加了一把锁
        RunnableThreadTest3 r1 = new RunnableThreadTest3();
        Thread t1 = new Thread(r1, "窗口一");

        Thread t2 = new Thread(r1, "窗口二");
        Thread t3 = new Thread(r1, "窗口三");
        t1.start();
        t2.start();
        t3.start();
        try {
            Thread.sleep(1000); // 让程序运行一段时间
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        r1.stop(); // 在适当的时机调用 stop 方法来停止线程的执行
    }
}

