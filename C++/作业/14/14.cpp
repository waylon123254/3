#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cin >> x;
	if (x < -1)
		cout << "´íÎó" << endl;

	else
		for (y = 2; 2 < x / 2; y++) {
			if (x % y == 0)
				return 0;
		}
	return y;
}