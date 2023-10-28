package asd;

import java.util.Scanner;

public class StudentSystem {
    public static void main(String[] args) {
        System.out.println("主页面");
        System.out.println("1.添加学生");
        System.out.println("2.删除学生");
        System.out.println("3.修改学生");
        System.out.println("4.查询学生");
        System.out.println("5.退出");
        Scanner scanner =new Scanner(System.in);
        String choose =scanner.next();
        switch (choose){
            case "1" :System.out.println("学生");break;
            case "2" :System.out.println("1学生");
            break;
            case "3" : System.out.println("2学生");break;
            case "4" : System.out.println("3学生");
            case "5" : System.out.println("4学生");
            default:System.out.println("无");
        }




    }
}
