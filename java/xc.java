/*
public class CustomerTest{
	public static void public static void main(String[] args) {
		Customer cust =new Customer();
		cust.eat();
		int[] arr =new int[]{1,2,3,4,5,6,7};
		cust.sort(arr);
	}
}
class Customer{
	String name;
	int age;
	boolean isMale;

	public void eat(){
		System.out.println("吃饭");

	}

	public void Sleep(int hour){
		System.out.println("休息了"+hour+"个小时");
	}
	public String GetName()
	{
		if (age>18) {
			return name;
		}else
		return "the age is not 18";

	}

	public String getNation(String nation){
			String info ="我的国籍是"+nation;
			return nation;
	}
	public void sort(int[] arr){

	}
}
*/
/*
public class People {
    private String name;
    private int age;
    private String major;
    private String interests;

    public People(String name, int age, String major, String interests) {
        this.name = name;
        this.age = age;
        this.major = major;
        this.interests = interests;
    }

    public void say(String name) {
        System.out.println("你好，我是" + name);
    }

    // 其他字段的getter和setter方法

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getMajor() {
        return major;
    }

    public void setMajor(String major) {
        this.major = major;
    }

    public String getInterests() {
        return interests;
    }

    public void setInterests(String interests) {
        this.interests = interests;
    }
}

public class Student extends People {
    private String school;
    private int grade;

    public Student(String name, int age, String major, String interests, String school, int grade) {
        super(name, age, major, interests);
        this.school = school;
        this.grade = grade;
    }

    // 学生类的其他字段、getter和setter方法，以及构造方法

    public String getSchool() {
        return school;
    }

    public void setSchool(String school) {
        this.school = school;
    }

    public int getGrade() {
        return grade;
    }

    public void setGrade(int grade) {
        this.grade = grade;
    }
}

public class Teacher extends People {
    private String subject;
    private String position;

    public Teacher(String name, int age, String major, String interests, String subject, String position) {
        super(name, age, major, interests);
        this.subject = subject;
        this.position = position;
    }

    // 教师类的其他字段、getter和setter方法，以及构造方法
    
    public String getSubject() {
        return subject;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }
}
//Phone
public class Phone{
	String name;
	double price;
	public void call(){
		System.out.Println("打电话");
	}
	public void SendMassage(String Massage){
		System.out.Println("发信息："+Massage);
	}
	public void Play(){
		System.out.Println("玩游戏");
	}
}
//PhoneTest
public class PhoneTest{
	 public static void main(String[] args) {
		Phone p1=new Phone();
		p1.name="HuaWei";
		p1.call();p1.Play();p1.SendMassage();
		p1.price=8999;
	}
}
*/
//导入包
import java.util.Scanner;
import java.util.Arrays;
 
public class MyScanner {
 
	public static void main(String[] args) {
		
		//创建对象
		Scanner sc = new Scanner(System.in);		
		System.out.println("输入数据:");	
		//多行输入
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[] arr = new int[n];	
		String[] str = new String[m];
		
		//int等基本数据类型的数组,用nextInt()，同行或不同都可以
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		//String字符串数组, 读取用next()，以空格划分
		for(int i=0; i<m; i++) {
			str[i] = sc.next();
		}
		
        //调用方法进行操作
		TestSc(n, m, arr);
		TestStr(str);
		
		System.out.println("Test01 End");
		
		//关闭
		sc.close();
	}
	
	public static void TestSc(int n, int m, int[] arr) {
		System.out.println("数据n：" + n + ", 数据m：" + m);
		System.out.println(Arrays.toString(arr));
	}
	
	public static void TestStr(String[] str) {
		System.out.println(Arrays.toString(str));
	}
/*
2、输入二维数组
第一行输入n, m

第二行开始输入二维数组。
*/

	import java.util.Arrays;
import java.util.Scanner;
 
public class MyScanner2 {
 
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);		
		System.out.println("输入数据:");	
 
		//二维数组
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[][] arr2 = new int[n][m];	
		System.out.println("Test02 输入二维数组数据：");
 
		//可以直接读入
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				arr2[i][j] = sc.nextInt();
			}
		}
 
		TestSc(n, m, arr2);
		//关闭
		sc.close();
	}
	
	public static void TestSc(int n, int m, int[][] arr) {
		System.out.println("数据n：" + n + ", 数据m：" + m);
		for(int i=0; i<n; i++) {
			System.out.println(Arrays.toString(arr[i]));
		}
		System.out.println("数组行数： arr.length= "+ arr.length);
		System.out.println("数组列数： arr[0].length= "+ arr[0].length);
	}
	
}
/*
3、输入字符串
输入字符串，用空格隔开。

next()和nextLine()区别。
*/
import java.util.Scanner;
/*
 *next()读取到空白停止，在读取输入后将光标放在同一行中。
 *nextLine()读取到回车停止 ，在读取输入后将光标放在下一行。
 */
 
public class MyScanner3 {
 
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);		
		System.out.println("输入字符串:");		
		
		//next():只读取输入直到空格。
		String str = sc.next();
 
		//nextLine():读取输入，包括单词之间的空格和除回车以外的所有符号
		String str2 = sc.nextLine();
 
		System.out.println("str：" + str);
		System.out.println("str2：" + str2);
		
		//关闭
		sc.close();
	}
	
}

package com.broky.exception.commonException;

import java.util.Scanner;

public class CommonEx {
    static void ArithmeticExceptionDemo(){
        int a = 10;
        int b = 0;
        int c = a / b;
        /*Exception in thread "main" java.lang.ArithmeticException: / by zero
        at com.broky.exception.ArithmeticEx.main(ArithmeticEx.java:7)*/
    }

    static void ClassCastExceptionDemo(){
        Object obj = new Double(1);
        String str = (String)obj;
        /*Exception in thread "main" java.lang.ClassCastException: class java.lang.Double cannot be cast to class java.lang.String (java.lang.Double and java.lang.String are in module java.base of loader 'bootstrap')
        at com.broky.exception.ClassCastEx.main(ClassCastEx.java:7)*/
    }

    static void InputMismatchExceptionDemo(){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        System.out.println(num);
        /*asd
        Exception in thread "main" java.util.InputMismatchException
        at java.base/java.util.Scanner.throwFor(Scanner.java:939)
        at java.base/java.util.Scanner.next(Scanner.java:1594)
        at java.base/java.util.Scanner.nextInt(Scanner.java:2258)
        at java.base/java.util.Scanner.nextInt(Scanner.java:2212)
        at com.broky.exception.InputMismatchEx.main(InputMismatchEx.java:8)*/
    }

    static void NullPointerExceptionDemo(){
        int[] arr = null;
        System.out.println(arr[3]);

        /*Exception in thread "main" java.lang.NullPointerException: Cannot load from int array because "arr" is null
        at com.broky.exception.NullPointerEx.main(NullPointerEx.java:6)*/
    }

    static void NumberFormatExceptionDemo(){
        String str = "abc";
        int a = Integer.parseInt(str);
        /*Exception in thread "main" java.lang.NumberFormatException: For input string: "abc"
        at java.base/java.lang.NumberFormatException.forInputString(NumberFormatException.java:67)
        at java.base/java.lang.Integer.parseInt(Integer.java:660)
        at java.base/java.lang.Integer.parseInt(Integer.java:778)
        at com.broky.exception.NumberMismatchEx.main(NumberMismatchEx.java:6)*/
    }

    static void ArrayIndexOutOfBoundExceptionDemo(){
        int[] arr = new int[3];
        System.out.println(arr[3]);
        /*Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
        at com.broky.exception.XIndexOutOfBoundEx.main(XIndexOutOfBoundEx.java:6)*/

        String str = "abc";
        System.out.println(str.charAt(3));
        /*Exception in thread "main" java.lang.StringIndexOutOfBoundsException: String index out of range: 3
        at java.base/java.lang.StringLatin1.charAt(StringLatin1.java:48)
        at java.base/java.lang.String.charAt(String.java:711)
        at com.broky.exception.XIndexOutOfBoundEx.main(XIndexOutOfBoundEx.java:11)*/
    }

    public static void main(String[] args) {
        ArrayIndexOutOfBoundExceptionDemo();
    }
}

package com.broky.exception.demo02;

public class TryCatchFinally {
    public static void main(String[] args) {
        String str = "abc";

        try {
            int i = Integer.parseInt(str);
        } catch (NumberFormatException e) {
            e.printStackTrace();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("运行完毕");
        }
    }
}

package com.broky.exception;

import java.io.FileNotFoundException;

public class ThrowsEx {
    public void setAge2(int age) throws FileNotFoundException {
        if (age < 0) {
            throw new FileNotFoundException("输入的年龄小于0");
        }
    }
    
    public void TestsetAge2() throws FileNotFoundException {
        setAge2(2);
    }
    
    public static void main(String[] args) {
        try {
            ThrowsEx.throwsExTest();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}

package com.broky.exception;

import java.io.FileNotFoundException;
import java.io.IOException;

public class OverrideTest {
    public void display(SuperClass s) {
        try {
            s.method();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        OverrideTest overrideTest = new OverrideTest();
        overrideTest.display(new SubClass());
    }
}

class SuperClass {
    public void method() throws IOException {
        System.out.println("super");
    }
}

class SubClass extends SuperClass {
    public void method() throws FileNotFoundException {
        System.out.println("sub");
    }
}
/*
List的特点
*/
import java.util.ArrayList;
import java.util.List;
public class Main {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("apple"); // size=1
        list.add("pear"); // size=2
        list.add("apple"); // 允许重复添加元素，size=3
        System.out.println(list.size());
    }
}
/*
List允许添加null
*/

import java.util.ArrayList;
import java.util.List;
public class Main {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("apple"); // size=1
        list.add(null); // size=2
        list.add("pear"); // size=3
        String second = list.get(1); // null
        System.out.println(second);
    }
}
/* 创建List
遍历LIst
*/
import java.util.List;
public class Main {
    public static void main(String[] args) {
        List<String> list = List.of("apple", "pear", "banana");
        for (int i=0; i<list.size(); i++) {
            String s = list.get(i);
            System.out.println(s);
        }
    }
}
/*
但这种方式并不推荐，一是代码复杂，二是因为get(int)方法只有ArrayList的实现是高效的，换成LinkedList后，索引越大，访问速度越慢。

所以我们要始终坚持使用迭代器Iterator来访问List。Iterator本身也是一个对象，但它是由List的实例调用iterator()方法的时候创建的。Iterator对象知道如何遍历一个List，并且不同的List类型，返回的Iterator对象实现也是不同的，但总是具有最高的访问效率。

Iterator对象有两个方法：boolean hasNext()判断是否有下一个元素，E next()返回下一个元素。因此，使用Iterator遍历List代码如下：

*/

/*Demo
    手动抛出异常
    自己throw(制造一个异常抛出)
 */


import java.io.FileNotFoundException;

public class ThrowEx {

    // 手动抛出运行时异常
    public void setAge(int age) {
        if (age < 0) {
            throw new NullPointerException("输入的年龄小于0");
        }
    }
    /*
          此方法手动抛出了运行时异常
          运行时异常可以不用处理
     */

    // 手动抛出编译时异常
    public void setAge2(int age) throws FileNotFoundException {
        if (age < 0) {
            throw new FileNotFoundException("输入的年龄小于0");
        }
    }
    /*
          此方法手动抛出的了编译时异常
          编译时异常需要被处理
          这里采用了 throws 这个异常, 也就是说方法并没有处理这个异常, 而是将异常抛给了调用者
      这样一来调用了这个方法的人就必须要处理这个异常才可以.
          注意:   在这里并不用自己使用 try catch 处理这个异常
                自己在方法里抛出异常, 方法再自己处理没有任何作用.
               所以方法中的异常需要抛给调用者去处理.
     */


    public static void main(String[] args) {
        ThrowEx throwEx = new ThrowEx();

        throwEx.setAge(-5);
    }

}

9. 异常处理练习题
9.1. 判断以下代码的输出内容#

public class ExceptionTest {
    static void methodA() {
        try {
            System.out.println("运行A方法");
            throw new RuntimeException("A方法手动抛出运行时异常");
        } finally {
            System.out.println("用A方法的finally");
        }
    }

    static void methodB() {
        try {
            System.out.println("进入B方法");
            return;
        } finally {
            System.out.println("用B方法的finally");
        }
    }


    public static void main(String[] args) {

        try {
            methodA();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        methodB();
    }
}
/*答案
    运行A方法
    用A方法的finally
    A方法手动抛出运行时异常
    进入B方法
    用B方法的finally
*/

public class EcmDef {
    public static int ecm(int a, int b) throws EcDef, ArithmeticException {
        if (a < 0 || b < 0)
            throw new EcDef("输入的数据小于0");
        if (b == 0)
            throw new ArithmeticException("除数不能等于0");
        return a / b;
    }

    public static void main(String[] args) {
        int a = 0;
        int b = 0;

        try {
            a = Integer.parseInt(args[0]);
            b = Integer.parseInt(args[1]);

            System.out.println(ecm(a, b));
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("缺少命令行参数");
            e.printStackTrace();
        } catch (NumberFormatException e) {
            e.printStackTrace();
        } catch (ArithmeticException e) {
            e.printStackTrace();
        } catch (EcDef ecDef) {
            ecDef.printStackTrace();
        }

    }

}
public class Test {
	public static void main(String[] args) {
		int[] arr={2,4,5};
		for(int i=0;i<arr.length-1;i++){
			
		}
	}
}

public class Main(){
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder();
		sb.append("中文");
		sb.insert(2,"--");
		System.out.println("sb");
	}
}
/*
1、工具类
1.1 定义
工具类是为了提供一些通用的、某一非业务领域内的公共方法，不需要配套的成员变量，仅仅是作为工具方法被使用。所以将它做成静态方法最合适，不需要实例化，能够获取到方法的定义并调用就行。

1.2 不实例化的原因
如果要实例化一个工具类，就需要一定的内存空间，工具类提供的是静态方法，通过类就能调用，所以不必浪费内存去实例化工具类对象。

1.3 做法
Java项目中使用的工具类非常多，比如JDK自己的工具类java.lang.Math、java.util.Collections等都是我们经常用到的，工具类的方法和属性都是静态的，不需要生成实例即可访问，而且JDK也做了很好的处理，由于不希望被初始化，于是就设置构造函数为private访问权限，表示除了类本身外，谁都不能产生一个实例，因此，其他类只能通过类名来访问，不能通过实例对象访问。我们来看一下java.lang.Math代码：
*/
/*
枚举（enum）类型是Java 5新增的特性，它是一种新的类型，允许用常量来表示特定的数据片断，而且全部都以类型安全的形式来表示。

初探枚举类

在程序设计中，有时会用到由若干个有限数据元素组成的集合，如一周内的星期一到星期日七个数据元素组成的集合，由三种颜色红、黄、绿组成的集合，一个工作班组内十个职工组成的集合等等，程序中某个变量取值仅限于集合中的元素。此时，可将这些数据集合定义为枚举类型。
因此，枚举类型是某类数据可能取值的集合，如一周内星期可能取值的集合为： { Sun,Mon,Tue,Wed,Thu,Fri,Sat} 该集合可定义为描述星期的枚举类型，该枚举类型共有七个元素，因而用枚举类型定义的枚举变量只能取集合中的某一元素值。由于枚举类型是导出数据类型，因此，必须先定义枚举类型，然后再用枚举类型定义枚举型变量。
*/
enum Color
{
    RED, GREEN, BLUE;
}
 
public class Test
{
    // 执行输出结果
    public static void main(String[] args)
    {
        Color c1 = Color.RED;
        System.out.println(c1);
    }
}
//内部类中使用枚举
枚举类也可以声明在内部类中：
public class Test
{
    enum Color
    {
        RED, GREEN, BLUE;
    }
 
    // 执行输出结果
    public static void main(String[] args)
    {
        Color c1 = Color.RED;
        System.out.println(c1);
    }
}

enum Color
{
    RED, GREEN, BLUE;
}
public class MyClass {
  public static void main(String[] args) {
    for (Color myVar : Color.values()) {
      System.out.println(myVar);
    }
  }
}