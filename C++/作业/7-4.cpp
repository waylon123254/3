#include <iostream>
using namespace std;

struct Student {
	int num;
	float score;
	struct Student *next;
};

int main() {
	struct Student a, b, c, *head, *p;
	a.num = 31001;
	a.score = 89.5;

	b.num = 31003;
	b.score = 90;

	c.num = 31007;
	c.score = 85;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do {
		cout << p ->num << "	" << p->score << endl;
		p = p->next;
	} while (p != NULL);
	return 0;
}