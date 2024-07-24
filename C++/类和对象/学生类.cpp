#include <iostream>
#include <string>
using namespace std;

class Student {

	public://公共权限
		string name;
		int id;

		void ShowStudent() {
			cout << "姓名：" << name << "\n" << "学号：" << id << endl;
		}
};

int main() {
	Student s1;
	s1.id = 10;
	s1.name = "绝对是放假哦";
	s1.ShowStudent();
}