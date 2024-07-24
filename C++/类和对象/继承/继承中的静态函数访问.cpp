#include <iostream>
using namespace std;
//继承中的同名静态成员处理方式

class Base {
	public:



		static int m_A;

		static void func() {
			cout << "Base static void func()" << endl;

		}
		static void func(int a) {
			cout << "Base static void func(int a)" << endl;

		}
};
int Base::m_A = 100;

class Son: public Base {
	public:
		static void func() {
			cout << "Son static void func()" << endl;

		}


		static int m_A;
};
int Son::m_A = 200;

//同名静态成员属性
void test01() {
	Son s;
	//1.通过对象访问
	s.func();
	s.Base::func();
	//2.通过类外访问
	Son::func();
	Base::func();
	Son::Base::func();
	Son::Base::func(100);



}

int main() {
	test01();

	return 0;
}
