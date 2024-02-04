#include <iostream>
using namespace std;

struct Student {
	string name;
	int num;
	char sex;
};


int main() {
	Student *p;
	p = new Student;
	p->name = "Wang Fang";
	p->num = 10123;
	p->sex = 'm';
	cout << p->name << endl << p->num << endl << p->sex << endl;
	delete p;
	return 0;
}