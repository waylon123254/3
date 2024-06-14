package com.example.ttdlaw.springboot.Thread.TestThread;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--24--15:42
 * @Description:
 */
public class Main {
    public static void main(String[] args) {
        Task task = new Task();

        new Thread(task).start();
    }
}
