package com.example.springboot.Shiro.Utils;

import java.util.Locale;
import java.util.Random;
import java.util.UUID;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--24--14:51
 * @Description:
 */
public class SaltUtils {
    /**
     * 生成salt的静态方法
     * @param n 长度
     * @return 生成的salt字符串
     */
    public static String getSalt(int n) {
        char[] chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()".toCharArray();
        StringBuilder sb = new StringBuilder();
        Random random = new Random();
        for (int i = 0; i < n; i++) {
            char aChar = chars[random.nextInt(chars.length)];
            sb.append(aChar);
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        String salt = getSalt(20);
        System.out.println("生成的salt：" + salt);
    }
    /**
     * 生成salt的静态方法
     * @return 生成的salt字符串
     */

    public static String getSalt() {
        return UUID.randomUUID().toString().toUpperCase().replace("-", "");
    }

}
