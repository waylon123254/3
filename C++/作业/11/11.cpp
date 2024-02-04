//输入3个数，求最大值
#include <iostream>
using namespace std;

int main() {
	int x, y, z, max;
	cout << "请输入任意三个数" << endl;
	cin >> x >> y >> z;
	if (x > y ) {
		if (x > z)
			max = x;
		else
			max = z;
	} else {
		if (y > z)
			max = y;
		else
			max = z;
	}
	cout << "最大值为：" << max << endl;
	return 0;
}

