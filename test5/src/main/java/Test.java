
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import pojo.User;
import service.UserService;
public class Test {
    public static void main(String[] args) {
        ApplicationContext context=
                new ClassPathXmlApplicationContext("applicationContext.xml");
        UserService userService =context.getBean("userService", UserService.class);
        User user =new User();
        user.setId(03);
        user.setName("嗷呜");
        user.setAge(20);
        userService.addUser(user);
    }
}
