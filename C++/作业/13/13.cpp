#include <iostream>
using namespace std;

int main() {

	cout << "ÇëÊäÈëÊý" << endl;
	int a, b, c = 0;
	cin >> a >> b ;
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	cout << b << endl;
	return 0;
}