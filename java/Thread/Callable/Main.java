package com.example.ttdlaw.springboot.Thread.Callable;

import io.swagger.models.auth.In;

import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--24--15:44
 * @Description:
 */

public class Main {
    public static void main(String[] args){
        ResultCallable resultCallable = new ResultCallable();
        FutureTask<String> stringFutureTask = new FutureTask<>(resultCallable);
        Thread thread = new Thread(stringFutureTask);
        thread.start();
        try{
            System.out.println(stringFutureTask.get());
        }catch (ExecutionException e){
            e.printStackTrace();
        }catch (InterruptedException e){
            e.printStackTrace();
        }
    }
}
