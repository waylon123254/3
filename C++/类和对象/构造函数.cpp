#include <iostream>
using namespace std;

class Test {
	public:
		Test() {
			m_a = 0;
			m_b = 0;
			cout << "无参构造函数" << endl;
		}
		Test(int a) { //3种方法
			m_a = a;
			m_b = 0;
			cout << "1个参数有参构造函数" << endl;
		}
		Test(int a, int b ) { //3种方法
			m_a = a;
			m_b = b;
			cout << "有参构造函数" << endl;
		}
		Test(const Test &obj) {
			cout << "赋值构造函数" << endl;
		}
		void print() {
			cout << m_a << endl;
			cout << "普通函数" << endl;
		}
	protected:
	private:
		int m_a ;
		int m_b;
};

void display() {
	//1.调用有参构造函数方法1
	Test t1(1, 2);
	t1.print();

	//1.调用有参构造函数方法2
	Test t2 = (1, 2, 3); //逗号表达式 取最后一个值
	t2.print();

	//1.调用有参构造函数方法3
	Test t3 = Test(1, 2); //编译器会产生一个匿名对象
	t3.print();

	Test t4 = Test();
	t4.print();
}

int main() {
	display();
	system("pause");
	return 0;
}
