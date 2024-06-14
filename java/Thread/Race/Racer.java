package com.example.ttdlaw.springboot.Thread.Race;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--29--16:03
 * @Description:
 */
public class Racer implements Runnable{
    private String winner;
    @Override
    public void run() {
        for (int i= 0; i <= 100; i++){
            System.out.println(Thread.currentThread().getName() + "跑了" + i + "步");
            if ((GameOver(i) ))break;
        }
    }
//  乌龟获胜的原因
//    public boolean GameOver(int i) {
//        if (winner != null){
//            return true;
//        }else if (i==100){
//            winner = Thread.currentThread().getName();
//            System.out.println("winner is " + winner);
//            return true;
//        }
//        return false;
//    }

    public synchronized boolean GameOver(int i) {
        if (winner!= null) {
            return true;
        } else if (i == 100) {
            winner = Thread.currentThread().getName();
            System.out.println("winner is " + winner);
            return true;
        }
        return false;
    }
    @Test
    public static void main(String[] args) {

        Racer racer = new Racer();
        new Thread(racer, "兔子").start();
        new Thread(racer, "乌龟").start();
    }
}
