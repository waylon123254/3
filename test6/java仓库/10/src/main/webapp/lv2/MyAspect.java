package src.main.webapp.lv2;

import org.aspectj.lang.ProceedingJoinPoint;

public class MyAspect {

    //前置增强，意思就是在业务逻辑方法调用前所植入的通用服务方法
    //一般这个方法用在权限的检查
    public void before() {
        System.out.println("妈妈买菜回来啦！一会就能干饭啦！");
    }
    //后置增强，一般就是在业务逻辑方法执行完毕之后所植入的通用方法
    //一般是用于资源的释放，如数据库连接对象的资源的释放
    public void after() {
        System.out.println("吃饱了就快学习吧");
    }
    //异常处理，因为一旦业务逻辑出现异常，那么就调用该方法
    //一般主要就是用于日志记录异常
    public void afterException(Throwable th) {
        System.out.println("干饭成功"+th.getMessage());
    }
    //返回值的增强，一般就是当执行一个业务逻辑方法的时候,有返回值的时候，那么就会植入该方法
    //一般可以用作日志记录
    public void afterReturn(Object result) {
        if(result==null) {
            System.out.println("吃饭中");
        }else {
            System.out.println("煤气罐没气了");
        }
    }
    //环绕增强，就是在业务逻辑方法执行期间所植入的方法。一般用以事务处理。
    //一般可以用作日志记录
    public Object around(ProceedingJoinPoint joinpoint) throws Throwable {
        System.out.println("妈妈要开始做饭了呦！");
        Object result = joinpoint.proceed();
        return result;
    }

}
