#include <iostream>
using namespace std;
struct Date //声明结构体类型为Date


{
	int month;
	int day;
	int year;

};

struct student { //声明结构体类型为Student
	int num;
	char name[20];
	string sex;
	Date birthday; //声明birthday为Date类型的成员
	float score;
}

student1, student2 = {10002, "Wang man", "f", 5, 23, 1992, 89.5}; //定义Student类型的变量student1，student2，并且对student2进行初始化
int main() {
	student1 = student2; //将student2的值赋给student1
	cout << student1.num << endl

	     << student1.name << endl

	     << student1.sex << endl

	     << student1.birthday.month << " /" << student1.birthday.day << " /" << student1.birthday.year << endl

	     << student1.score << endl;

	return 0;

}