#include <iostream>

using namespace std;

int max(int x, int y) {
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return (z);
}

int main() {
	int a, b, m;
	cin >> a >> b;
	m = max(a, b);
	cout << "max=" << m << '\n';
	return 0;

}