#include <iostream>
using namespace std;

class Student {
	public :
		void display( ); //公用成员函数原型声明
	private :
		int num;
		string name;
		char sex;
//以上3行是私有数据成员
};

void Student::display( ) { //在类外定义display类函数
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
Student stud1, stud2; //定义两个类对象

int main() {
	stud1.display();
	stud2.display();
	return 0;
}