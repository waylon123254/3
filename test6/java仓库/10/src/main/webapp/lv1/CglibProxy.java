package src.main.webapp.lv1;

import org.springframework.cglib.proxy.Enhancer;
import org.springframework.cglib.proxy.MethodInterceptor;
import org.springframework.cglib.proxy.MethodProxy;

import java.lang.reflect.Method;
public class CglibProxy implements MethodInterceptor{
    private Object object;// 被代理的目标对象

    public Object createProxy(Object object){
        this.object = object;
        //1.创建Cglib的核心类对象
        Enhancer enhancer = new Enhancer();
        //2. 设置代理目标
        enhancer.setSuperclass(object.getClass());
        //3.设置回调:类似于InvocationHandler对象
        enhancer.setCallback(this);
        return enhancer.create();
    }

    public Object intercept(Object proxy, Method method, Object[] args,
                            MethodProxy methodProxy) throws Throwable {

        Object result = null;
        try {
            System.out.println("大宝子妈妈给你带了旺仔牛奶 ...");
            result = methodProxy.invoke(object, args);// 执行目标对象的方法
            System.out.println("小兔崽子你快欠揍了  ...");
        } catch (Exception e) {
            System.out.println(" 异常处理 ...");
        } finally {
            System.out.println(" 调用结束 ...");
        }
        return result;
    }
}
