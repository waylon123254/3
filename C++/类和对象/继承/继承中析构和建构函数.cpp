#include<iostream>
using namespace std;
class Base {
	
	public:
		Base() {
			cout << "Base构造函数" << endl;

		}
		~Base() {
			cout << "Base析构函数" << endl;
		}
};
class Son: protected Base {

	public:
		Son() {
			cout << "Son构造函数" << endl;
		}
		~Son() {
			cout << "Son析构函数" << endl;
		}
};
void test() {
//Base b;
Son s;
}
int main()

{test();
	return 0;
}
