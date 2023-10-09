package src.main.webapp.lv;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
public class JdkProxy implements InvocationHandler {
    //被代理的目标对象
    private UserDao userDao;


    public Object createProxy(UserDao userDao){
        this.userDao = userDao;
        //返回一个代理对象
        return Proxy.newProxyInstance(userDao.getClass().getClassLoader(),
                userDao.getClass().getInterfaces(),this);
    }

    /**
     * 执行目标对象
     * Object  proxy：被代理的对象
     * Method  method：要调用的方法
     * Object  args[]：方法调用时所需要的参数
     */
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {

        before();
        // 通过反射机制调用目标对象的方法
        Object object = method.invoke(this.userDao,args);
        after();

        return object;
    }

    public void before(){
        System.out.println("孩子饿了吧，吃完饭再学习");
    }
    public void after(){
        System.out.println("让我考考你");
    }
}
