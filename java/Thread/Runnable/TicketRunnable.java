package com.example.ttdlaw.springboot.Thread.Runnable;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--28--10:19
 * @Description: 抢票系统
 */
public class TicketRunnable implements Runnable{
    private  int ticketNums=10;
    @Override
    public void run() {
        while (true){
            if (ticketNums<=0)
            {
                break;
            }
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println(Thread.currentThread().getName()+"拿到了第"+ticketNums--+"票");
        }
    }
    @Test
    public static void main(String[] args) {
        TicketRunnable ticketRunnable = new TicketRunnable();
        new Thread(ticketRunnable,"小明").start();
        new Thread(ticketRunnable,"老师").start();
        new Thread(ticketRunnable,"黄牛党").start();
    }
}
