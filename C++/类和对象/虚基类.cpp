#include<iostream>
using namespace std;
class A {
	public:
		int x;
		A(int a = 0) {
			x = a;
		}
};
class B: public A {
	public:
		int y ;
		B(int a = 0, int b = 0):
			A(a) {
			y = b;
		}
};
class C:public A{
	
};
