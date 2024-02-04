#include <iostream>
using namespace std;

int main() {
	int a[10], count;
	cout << "Please input an int number:" << endl;
	cin >> a[10];
	for (int i = 0; i < 10; i++) {
		if (a[i] < 'a' and a[i] > 'z')
			count = +1;
		cout << count  << endl;
	}

}