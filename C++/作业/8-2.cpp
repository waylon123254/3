#include <iostream>
using namespace std;

//定义time类
class time {
	public:  //数据成员为公用
		int hour;
		int minute;
		int sec;
};

int main() {
	time t1;//定义t1为time类对象

	cout << "输入时间：" << endl;

	cin >> t1.hour; //一下三行的作用是输入设定的时间
	cin >> t1.minute;
	cin >> t1.sec;

	cout << "输出时间为：" << endl;

	cout << t1.hour << ":" << t1.minute << ":" << t1.sec
	     << endl;


	return 0;
}
