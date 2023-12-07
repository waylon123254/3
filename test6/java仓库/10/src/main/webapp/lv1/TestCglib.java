package src.main.webapp.lv1;

public class TestCglib {
    public static void main(String[] args) {
        CustomerDaoImpl testcglib = new CustomerDaoImpl();
        testcglib.learn();//未使用代理
        System.out.println("----------分割线----------");
        CglibProxy proxy = new CglibProxy();
        CustomerDaoImpl testcglib2 = (CustomerDaoImpl) proxy.createProxy(testcglib);
        testcglib2.learn();
    }
}
