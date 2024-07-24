#include<iostream>
using namespace std;

class Box {
	public:
		//类的属性
		double length;
		double breadth;
		double height;
		//类的方法
		double get(void);
		double set(double len, double bre, double hei);
};

double Box::get(void) {
	return length * breadth * height;
}

double Box::set(double len, double bre, double hei) {
	length = len;
	breadth = bre;
	height = hei;
}

int main() {
	Box Box1;
	Box Box2;

	double volume = 0.0;

	Box1.length = 2;
	Box1.breadth = 3;
	Box1.height = 4;
	//Box1体积
	volume = Box1.get();
	cout << "Box1:" << volume << endl;

	Box2.set(1, 2, 3);
	volume = Box2.get();
	cout << "Box2:" << volume << endl;
}
