#include<iostream>
using namespace std;
class A {
	public:
		int x;
		A(int a = 0) {
			x = a;
		}
};
class B : public virtual A {
	public:
		int y;
		B(int a = 0, int b = 0): A(a) {
			y = b;
		}
};
class C: public virtual A {
	public:
		int z;
		C(int a = 0, int c = 0): A(a) {
			z = c;
		}
};

class D: public B, public C {
	public:
		int dx;
		D(int a1, int b, int c, int d, int a2): B(a1, b), C(a2, c) {
			dx = d;
		}

};

int main() {
	D d1(10, 20, 30, 40, 50);
	cout << d1.x << endl;
	d1.x = 100;
	cout << d1.x << endl;
	cout << d1.y << endl;
	return 0;
}
