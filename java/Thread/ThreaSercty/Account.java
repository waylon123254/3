package com.example.ttdlaw.springboot.Thread.ThreaSercty;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

/**
 * @Auther: 吕宏博
 * @Date: 2024--06--04--10:28
 * @Description:
 */
@Data
public class Account {
    private String accountName;//账户名
    private double money;//余额

    public Account() {
    }

    public Account(String accountName, double money) {
        super();
        this.accountName = accountName;
        this.money = money;
    }

    public synchronized void draw(double money) {
        String name = Thread.currentThread().getName();
        if (this.money >= money) {
            System.out.println(name + " " + money + " 取款成功");
            this.money -= money;
            System.out.println("账户余额为：" + this.money);
        } else {
            System.out.println(name + " " + money + " 取款失败");
        }
    }
}
