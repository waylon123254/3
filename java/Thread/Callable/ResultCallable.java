package com.example.ttdlaw.springboot.Thread.Callable;

import org.junit.jupiter.api.Test;

import java.util.concurrent.Callable;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--24--15:44
 * @Description:
 */
public class ResultCallable implements Callable<String> {
    @Test
    @Override
    public String call() throws Exception {
        return "讲执行的任务写在callable中";
    }
}
