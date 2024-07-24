#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	struct Student s;
	s.name = "li";
	s.age = 14;
	s.score = 0;
	Student *p = &s;
	cout << "ÐÕÃû" << p->name << "\n	"
	     << "	" << p->age << "\n		"
	     << "	" << p->score << endl;
}