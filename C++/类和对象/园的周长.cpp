#include <iostream>
using namespace std;
const double PI = 3.1415;

//创建类
class Circle {
//属性
	public:
		//行为
		int r;
		double sum() {
			return 2 * PI * r;
		}
};



int main() {
	Circle cl;
	cl.r = 10;
	cout << "周长:" << cl.sum() << endl;
	system("pause\n");
	return 0;
}