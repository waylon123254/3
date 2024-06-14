package com.example.ttdlaw.springboot.Thread.TestThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--04--10:15
 * @Description:
 */
public class ThreadTest {
    @Test
    public static void main(String[] args) throws InterruptedException {
        MyRunnable runnable = new MyRunnable("子线程");
        Thread thread = new Thread(runnable);
        thread.start();
        for (int i = 0; i < 100; i++){
            System.out.println("main线程"+i);
            if (i==20){
                Thread.sleep(5000);
                Thread.yield(); // suggest to schedule another thread
            }
        }
    }


}

class MyRunnable implements Runnable {
    private String name;

    public MyRunnable(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        for (int i = 0; i < 40; i++){
            System.out.println(name + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
