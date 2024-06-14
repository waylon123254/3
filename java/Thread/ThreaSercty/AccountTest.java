package com.example.ttdlaw.springboot.Thread.ThreaSercty;

import org.junit.jupiter.api.Test;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--04--10:29
 * @Description:
 */
public class AccountTest {
    @Test
    public static void main(String[] args) {
        Account account = new Account("子账号",30000);//
        new CustomerThread(account,"小米").start();//1号
        new CustomerThread(account,"小梅").start();//2号
    }
}
class CustomerThread extends Thread{
    private Account account;

    public CustomerThread(Account account,String name){
        super(name);
        this.account=account;
    }
    @Override
    public void run() {
        account.draw(10000000);
    }
}

