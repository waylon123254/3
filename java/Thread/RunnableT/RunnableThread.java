package com.example.ttdlaw.springboot.Thread.RunnableT;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--04--15:07
 * @Description:
 */
public class RunnableThread implements  Runnable{
    private int ticket = 100;
    @Override
    public void run(){
        while(true){
            if(ticket>0){
                try {
                    Thread.sleep(100);  //语句一
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                System.out.println(Thread.currentThread().getName()+"正在出售第 "+ticket+" 张票");  //语句二
                ticket--;  //语句三
            }
        }
    }
}
class ticketDemo1{
    @Test
    public static void main(String[] args) {
        RunnableThread r1 = new RunnableThread();

        Thread t1 = new Thread(r1,"窗口一");
        Thread t2 = new Thread(r1,"窗口二");
        Thread t3 = new Thread(r1,"窗口三");

        t1.start();
        t2.start();
        t3.start();

    }
}

