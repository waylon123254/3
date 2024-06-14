package com.example.ttdlaw.springboot.Thread.Train;

import org.junit.jupiter.api.Test;

import java.util.concurrent.Callable;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--13--11:13
 * @Description:
 */
public class OddNumber implements Callable {
    private static int gifts =1000;
    private final Lock lock = new ReentrantLock();
    private volatile boolean running = true;
    @Override
    public Object call() throws Exception {
        while (running){
            lock.lock();
            try {
                if (gifts==1){
                    running = false;
                }else if (gifts % 2 == 1){
                    System.out.printf("数：%5d\n", gifts);
                    gifts--;
                }else {
                    gifts--;
                }
            }finally {
                lock.unlock();
            }
        }
        return null;
    }
}
class Main{
    @Test
    public static void main(String[] args) {
        OddNumber oddNumber = new OddNumber();
        Thread thread1 = new Thread();
        Thread thread2 = new Thread();
        thread1.start();
        thread2.start();
    }
}

