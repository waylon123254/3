#include <iostream>
using namespace std;

int main() {
	double x;
	cout << "请输入成绩" << endl;
	cin >> x;
	if (x <= 60)
		cout << "你不及格！！";
	else if (x <= 70)
		cout << "恭喜你获得了E！！";
	else if (x <= 80)
		cout << "恭喜你获得了D！！" ;
	else if (x <= 90)
		cout << "恭喜你获得了C！！" ;
	else if (x <= 100)
		cout << "恭喜你获得了B！！" ;
	else
		cout << "恭喜你获得了A！！" ;
}