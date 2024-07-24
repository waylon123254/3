#include <iostream>
using namespace std;
//继承中的同名静态成员处理方式

class Base {
	public:



		static int m_A;
};
int Base::m_A = 100;

class Son: public Base {
	public:

		static int m_A;
};
int Son::m_A = 200;

//同名静态成员属性
void test01() {
	Son s;
	//1.通过对象访问
	cout << "Son 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;
	//2.通过类名访问
	cout << "Son 下 m_A = " << Son::m_A << endl;
	cout << "Base 下 m_A = " << Base::m_A << endl;
	//第一个::代表通过类名方式访问，第二个::代表访问父类作用域下
	cout << "通过子类访问父类m_A = " << Son::Base::m_A << endl;


}

int main() {
	test01();

	return 0;
}
