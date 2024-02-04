#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n ; i >= 0; i--) {		//大循环执行n次，即共有几行执行几次。i也可设成其他数字，执行n次即可
		for (int p = i; p > 0; p--)				//输出空格，执行n-1次，每次输出一个空格。p也可设成其他数字，只要使循环执行次数正确就可以
			cout << ' ';
		for (int p = n ; p > 0; p--)			//输出星号，执行n-i次，每次输出一个星号。同上，注意循环执行次数
			cout << '*' << ' ';
		cout << endl;
	}
}
