#include<iostream>
using namespace std;
class Person {
		int m_age;
	public:
		Person() {
			cout << "默认构造函数调用" << endl;

		}
		Person(int age) {
			m_age = age;
			cout << "默认有参构造函数调用" << endl;

		}
		Person(const Person &p) {
			m_age = p.m_age;
			cout << "默认拷贝函数调用" << endl;

		}
		~Person() {
			cout << "默认析构函数调用" << endl;
		}

};

void test() {
	Person p1(20);
	Person p2(p1);
}

void doWork(Person p) {

}

void test1() {
	Person p;
	doWork(p);
}

Person doWork2() {
	Person p1;
	return p1;
}

void test2() {
Person p =doWork2();

}
int main() {
	test2();
	return 0;
}
