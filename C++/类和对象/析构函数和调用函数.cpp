#include <iostream>
using namespace std;

class Person {
	public:
		Person() {
			cout << "Person函数的构建\n" << endl;
		}
		//2.析构函数
		/*没有返回值不写void
		函数名和类名相同在名称前加~
		析构函数不可以有参数的，不可以发生重载
		对象在销毁前会自动调用析构函数，而且只会调用一次
		*/
		~Person() {
			cout << "Person函数的析构\n" << endl;
		}

};

void test01() {
	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
}

int main() {
	test01();

}