#include<iostream>
using namespace std;
class Base {
	int m_a;
public:
	Base() {
		m_a=10;
		cout << "Base构造函数" << endl;
		
	}
//	~Base() {
//		cout << "Base析构函数" << endl;
//	}
	void func()
	{
		cout<<"Base-fun()函数调用"<<endl;
	}
};
class Son: protected Base {
	
public:
	int m_a;
	Son() {
		m_a=200;
		cout << "Son构造函数" << endl;
	}
	~Son() {
		cout << "Son析构函数" << endl;
	}
};
void test() {
	//Base b;
	Son s;
	cout<<"m_a="<<s.m_a<<endl;
}
void test2()
{
	Son s1;
	s1.
}
int main()

{test();
	return 0;
}
