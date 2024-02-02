#include <iostream>
using namespace std;

//template 关键字告诉C++编译器 要开始泛型编程了
//T - 参数化数据类型
template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

int main(void)
{
	
	int  n = 1;
	int	 m = 2;
	cout << "max(1, 2) = " << Max(n, m) << endl;
	
	float a = 2.0;
	float b = 3.0;
	cout << "max(2.0, 3.0) = " << Max(a, b) << endl;
	
	char i = 'a';
	char j = 'b';
	cout << "max('a', 'b') = " << Max(i, j) << endl;
	
	return 0;
}
