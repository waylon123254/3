import org.springframework.context.support.ClassPathXmlApplicationContext;
import service.UserService;
import org.springframework.context.support.ClassPathXmlApplicationContext;
public class test {
    public static void main(String[] args) {
        ClassPathXmlApplicationContext applicationContext = new ClassPathXmlApplicationContext("applicationContext.xml");
        UserService usersService = (UserService) applicationContext.getBean("userService");
        usersService.add();
    }
}