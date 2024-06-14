package com.example.ttdlaw.springboot.Thread.Current;

/**
 * @Auther: 吕宏博
 * @Date: 2024--05--25--14:29
 * @Description:
 * 返回当前正在执行任务的线程。
 * @return 当前正在执行任务的线程。
 */
public class CurrentThread {
    public static void main(String[] args) {
        Thread thread = Thread.currentThread();
        //Thread[main,5,main] 线程名称，线程优先级，线程所属的线程组名称
        System.out.println("线程名称：" + thread.getName());
        System.out.println("线程优先级：" + thread.getPriority());
        System.out.println("线程所属的线程组名称：" + thread.getThreadGroup().getName());
        System.out.println(thread);

        System.out.println("--------------------------");
        Thread thread1 = Thread.currentThread();
        String ThreadName = thread1.getName();
        System.out.println("线程名称：" + ThreadName);
        //设置自定义线程名称
        thread1.setName("吕宏博");
        System.out.println(thread1.getName());
    }
}
