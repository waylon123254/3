package com.example.springboot.Shiro.Utils;

import org.apache.shiro.crypto.hash.Md5Hash;

/**
 * @Auther: 吕宏博
 * @Date: 2024--03--24--14:43
 * @Description:
 */
public class MD5Util {
    // 散列次数
    private static int hashIterations = 3;

    //私盐或者说是公共盐
    private static String Public_salt = "ak";


    /**
     * MD5加密工具类（带私有的盐）
     *
     * @param source 要用共盐加密后 的字符串
     * @return 加密后的字符串
     */
    public static String md5_Public_Salt(String source) {
        return new Md5Hash(source, Public_salt, hashIterations).toString();
    }

    /**
     * MD5加密工具类（带公共的盐）
     *
     * @param source 原始字符串
     * @param salt   私盐值
     * @return 加密后的字符串
     */
    public static String md5_Private_Salt(String source,String salt) {
        return new Md5Hash(source, Public_salt, hashIterations).toString();
    }

}
