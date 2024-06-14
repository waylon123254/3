package com.example.ttdlaw.springboot.Thread.TestThread;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--24--15:41
 * @Description:
 */
public class Task implements  Runnable{

    @Test
    @Override
    public void run() {
        System.out.println("线程执行");
    }
}
