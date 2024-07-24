#include <iostream>
using namespace std;
//继承中的同名静态成员处理方式
class Animal {
	public:
		virtual void speak() {
			cout << "动物在说话：" << endl;
		}
};
class Cat: public Animal {

	public:
		void speak() {
			cout << "猫在叫" << endl;
		}
};

class Dog: public Animal {

	public:
		void speak() {
			cout << "狗在叫" << endl;
		}
};
void DoSpeak(Animal &animal) {
	animal.speak();

}
void test() {
	Cat ca;
	DoSpeak(ca);
	
	Dog d;
	DoSpeak(d);

}
int main() {
	test();
	return 0;
}
