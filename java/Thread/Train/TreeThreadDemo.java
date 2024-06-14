package com.example.ttdlaw.springboot.Thread.Train;

import org.junit.jupiter.api.Test;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/***
 * 一共有1000张电影票，可以在两个窗口领取，假设每次领取的时间为3000毫秒
 * 要求：请用多线程模拟卖票过程并打印剩余电影票的数量
 * */
public class TreeThreadDemo implements Runnable{
    private static int tickets = 1000;
    private final Lock lock = new ReentrantLock();
    private volatile boolean running = true;
    @Override
    public void run() {
        while (running) {
            lock.lock();
            try {
                if (tickets > 0) {
                    try {
                        Thread.sleep(5);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    System.out.println("窗口" + Thread.currentThread().getName() + "卖了第" + tickets-- + "张票");
                } else {
                    running = false; // 修改标识，表示票已经卖完
                    System.out.println("票卖完了");
                }
            } finally {
                lock.unlock();
            }
        }
    }

    @Test
    public static void main(String[] args) {
        TreeThreadDemo ttd = new TreeThreadDemo();
        Thread t1 = new Thread(ttd,"窗口1");
        Thread t2 = new Thread(ttd,"窗口2");
        t1.start();
        t2.start();
    }
}