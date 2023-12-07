package src.main.webapp.lv;

public class TestJDK {
       public static void main(String[] args) {
        // 要代理的真实对象
        UserDao userDao = new UserDaoImpl();
        userDao.learn();//没用代理
        System.out.println("-------------分隔线--------------");
        JdkProxy jdkProxy = new JdkProxy();
        UserDao userDaoProxy = (UserDao) jdkProxy.createProxy(userDao);
        // 执行代理类的方法
        userDaoProxy.learn();
    }
}
