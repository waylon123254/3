package com.example.ttdlaw.springboot.Thread.ThreadPool;

import org.junit.jupiter.api.Test;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--05--15:20
 * @Description:    线程池
 */
public class ThreadPool {
    @Test
    public static void main(String[] args) {
        // 1.获取线程池对象
        ExecutorService executorService = Executors.newFixedThreadPool(10);

        // 2. 提交任务给线程池执行
        executorService.submit(new MyThread());
        executorService.submit(new MyThread());
        try {
            // 3. 让主线程等待3毫秒
            Thread.sleep(3);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // 4. 关闭线程池
        executorService.shutdown();
        // 3. 关闭线程池
        //executorService.shutdown();
    }
}

class MyThread implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 100; i++) {
            System.out.println(Thread.currentThread().getName() + "---" + i);
        }
    }
}