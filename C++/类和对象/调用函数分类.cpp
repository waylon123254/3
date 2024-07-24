#include <iostream>
using namespace std;

class Person {
	public:
		Person() {
			cout << "Person无参调用函数" << endl;
		}
		Person(int a) {
			age = a;
			cout << "Person有参调用函数" << endl;
		}
		Person(const Person &p) {
			age = p.age;

		}
		~Person() {

		}
		int age;

};

void test1() {


}

int main() {

}