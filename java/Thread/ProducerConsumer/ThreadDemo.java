package com.example.ttdlaw.springboot.Thread.ProducerConsumer;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--12--9:57
 * @Description: 生产者消费者模型
 */
public class ThreadDemo {
    @Test
    public static void main(String[] args) {

    }
}
//生产者
class Cook extends Thread{
    @Override
    public void run() {
        while (true){
            synchronized (Desk.lock){
                if (Desk.count==0){
                    break;
                }else {
                    //生产
                    Desk.foodLog++;
                    System.out.println("生产者生产了第"+Desk.foodLog+"个产品");
                    Desk.count--;
                    Desk.lock.notify();
                    try {
                        if (Desk.count!=0){
                            Desk.lock.wait();
                        }
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        }
    }
}
//消费者
class Food extends Thread{}

//控制者
class Desk{
    public  static  int foodLog=0;
    //个数
    public static  int count=10;

    //对象
    public static  Object lock=new Object();
}


