package asdf;

import java.util.Scanner;

public class Test1 {
    public static void main(String[] args) {
      System.out.println("启动");
//        System.exit(0);
//        System.out.println("结束");
//        long l =System.currentTimeMillis();
//        System.out.println(l);
//        int[] arr1={1,2,3,4,5,6,7,8,9,10};
//        int[] arr2=new int[10];
//        System.arraycopy(arr1,0,arr2,0,10);
//        System.out.println(arr2);
        /*利用方法和常规步骤判断闰年和平年*/
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入年份");
        int year =scanner.nextInt();

//        if ((year%4==0&&year%100==0)||year%400==0)
//        {
//            System.out.println("闰年");
//        }
//        else
//        {
//            System.out.println("平年");
//        }
        boolean num = Whoyear(year);
        if (num)
        {
            System.out.println("闰年");
        }
        else
        {
            System.out.println("平年");
        }
    }

    public static boolean Whoyear(int year) {
        if ((year%4==0&&year%100==0)||year%400==0){
            return true;
        }
        else
        {
            return false;
        }
    }
}
