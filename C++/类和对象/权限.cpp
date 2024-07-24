#include <iostream>
#include <string>
using namespace std;

class Person {

	public:
		string name;
	protected:
		string Car;
	private:
		int PassWord;
	public:
		void	fun() {
			name = "张三";
			Car = "小汽车";
			PassWord = 12345;

		}
};

int main() {
	Person my;
	my.fun();
	return 0;


}