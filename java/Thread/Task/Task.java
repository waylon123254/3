package com.example.ttdlaw.springboot.Thread.Task;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--25--14:37
 * @Description:    自定义线程任务
 *
 */

public class Task implements Runnable{
    @Test
    @Override
    public void run() {
        //获取当前正在执行任务的线程
        Thread thread = Thread.currentThread();
        //获取线程的名称
        String threadName = thread.getName();
        System.out.println("线程" + threadName + "正在执行任务");
    }
}
