#include <iostream>
using namespace std;
#include "swap.h"

/*void swap(int a, int b);

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
*/
int main() {
	int a = 10;
	int b = 90;
	swap(10, 90);
	return 0;
}