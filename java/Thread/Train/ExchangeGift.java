package com.example.ttdlaw.springboot.Thread.Train;

import org.junit.jupiter.api.Test;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--12--16:41
 * @Description:
 */
public class ExchangeGift implements Runnable{

    private static int gifts =1000;
    private final Lock lock = new ReentrantLock();
    private volatile boolean running = true;
    @Override
    public void run() {
        while (running) {
            lock.lock();
            try {
                if (gifts < 10) {
                    System.out.println("库存不足");
                    running = false; // 修改标识，表示礼品已经不足，不再发送
                } else {
                    try {
                        Thread.sleep(3); // 模拟发送礼物的时间
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    System.out.println("窗口" + Thread.currentThread().getName() + "@@@@@@送了第" + gifts-- + "份礼物");
                }
            } finally {
                lock.unlock();
            }
        }
    }

    @Test
    public static void main(String[] args) {
        ExchangeGift ttd = new ExchangeGift();
        Thread t1 = new Thread(ttd,"1");
        Thread t2 = new Thread(ttd,"2");
        t1.start();
        t2.start();
    }
}
