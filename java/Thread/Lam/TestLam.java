package com.example.ttdlaw.springboot.Thread.Lam;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--30--15:02
 * @Description:    lambda表达式使用
 */
public class TestLam {
    //静态内部类

    static class Like2 implements ILike{
        @Override
        public void Lambda() {
            System.out.println("Lambda2");
        }
    }
    @Test
    public static void main(String[] args) {
        new Like().Lambda();
        new Like2().Lambda();


        //局部内部类
        class Like3 implements ILike{
            @Override
            public void Lambda() {
                System.out.println("Lambda3");
            }
        }

        new Like3().Lambda();

        //匿名内部类
        ILike like4 = new ILike() {
            @Override
            public void Lambda() {
                System.out.println("Lambda4");
            }
        };
        like4.Lambda();

        //Lambda 表达式
        ILike like5 = () -> {
            System.out.println("Lambda5");
        };
        like5.Lambda();
    }

}
// 1. 定义一个函数接口
interface ILike{
    void Lambda();
}
//实现类
class Like implements ILike {

    @Override
    public void Lambda() {
        System.out.println("Lambda");
    }
}
