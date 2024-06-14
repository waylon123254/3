package com.example.ttdlaw.springboot.Thread.Task;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--25--14:39
 * @Description:
 */
public class Main {
    public static void main(String[] args){
        Task task = new Task();
        new Thread(task).run();
        new Thread(task).start();
        new Thread(task).run();
        new Thread(task).start();
    }
}
