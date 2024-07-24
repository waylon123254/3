//#include<iostream>
//using namespace std;
//class Person {
//
//	public:
//		int m_age;
//		Person() {
//			cout << "Person默认构造调用" << endl;
//
//		}
//		Person(int age) {
//			m_age = age;
//			cout << "Person有参构造调用" << endl;
//
//		}
//		Person(const Person &p) {
//			m_age = p.m_age;
//			cout << "Person默拷贝构造调用" << endl;
//
//		}
//		~Person() {
//
//			cout << "Person默认析构调用" << endl;
//
//		}
//
//};
//
//test() {
//	Person p;
//	p.m_age = 18;
//	Person p2(p);
//}
//int main() {
//	test();
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int fun(int m,int n){
//	int rem;			//余数，当余数为0的时候，最后的m即为最大公约数
//	//先用较小的数对较大的数取余，再用余数对较小的数求余，直到余数为零 
//	while(n > 0){
//		rem = m % n;
//		m = n;
//		n = rem;
//	}
//	return m;			//将结果返回			
//}

//int fun(int m,int n){
//	if(n==0) return m;
//	return fun(n,m%n);
//}

//int gcd(int m, int n) {
//	return n ? gcd(n, m % n) : m;
//}

//int main(){
//	int n,m;
//	cin>>m>>n;
//	cout<<"m和n的最大公约数为："<<fun(m,n)<<endl;
//	return 0;
//}
/*构造函数的分类与调用*/
//#include<iostream>
//using namespace std;
//class Person {
//	int age;
//public:
//	Person() {
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person &p) {
//		age = p.age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	
//};
//void test() {
//	//括号法
//	//	Person p;
//	//	Person p2(10);
//	//	Person p3(p2);
//	//显示法
//	//	Person x;
//	//	Person x1=Person(10);
//	//	Person x2=Person(x1);
//	
//	//隐式转化法
//	Person y=10;
//	Person y1=y;
//}
//int main() {
//	test();
//	
//	return 0;
//	
//}
#include <iostream>
#include <cstring>

struct Person {
	char name[20];
	int age;
	
	void displayInfo() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
	}
};

int main() {
	Person person1; // 声明一个结构体变量
	
	strcpy(person1.name, "John"); // 使用strcpy函数给name赋值
	person1.age = 25; // 直接给age赋值
	
	person1.displayInfo(); // 调用结构体的成员函数显示信息
	
	return 0;
}
