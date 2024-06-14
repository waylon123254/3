package com.example.ttdlaw.springboot.Thread.Lam;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--30--15:09
 * @Description:
 */
public class TestLove {
    @Test
    public static void main(String[] args) {
        new ILove(){

            @Override
            public void love(int a) {
                System.out.println("love"+a);
            }
        };
        new Love().love(1);
    }
}
interface ILove{
    void love(int a);
}
class Love implements  ILove{

    @Override
    public void love(int a) {
        System.out.println("love"+a);
    }
}
