package com.example.ttdlaw.springboot.Thread.Proxy;

import org.junit.jupiter.api.Test;

import static org.springframework.boot.test.mock.mockito.MockReset.after;
import static org.springframework.boot.test.mock.mockito.MockReset.before;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--29--11:26
 * @Description: java线程静态代理模式
 */
public class StaticProxy {
    @Test
    public static void main(String[] args) {
        You you = new You();
        you.HappyMarry();
        new WeddingCompany(you).HappyMarry();
    }
}
interface Marry{
    void HappyMarry();
}
//真实角色
class You implements Marry{
    @Override
    public void HappyMarry() {
        System.out.println("你结婚");
    }
}
//代理角色
class WeddingCompany implements Marry{
    private  Marry target;

    public WeddingCompany(Marry target) {
        this.target=target;
    }
    @Override
    public void HappyMarry() {
        before();
        this.target.HappyMarry();
        after();

    }

    public void after() {
        System.out.println("结婚之后收尾款");
    }

    public void before() {
        System.out.println("结婚之前布置现场");
    }
}

