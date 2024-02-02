#include <iostream>
#include <string>
using namespace std;
class Cstudent
{
public:
	Cstudent()    //构造函数名要与类名相同
	{
		name = "zhangsan";
		school = "yizhong";
		tele = 12345;
	}					//在构造函数中直接对成员初始化
	void set_data();
	void show_data();
private:
	string name;
	string school;
	int tele;
};

void Cstudent::set_data()
{
	cin >> name;
	cin >> school;
	cin >> tele;
	return;
}

void Cstudent::show_data()
{
	cout <<""<< name <<" "<< school<< " " << tele << endl;
	return;
}

int main()
{
	Cstudent C1;
	C1.set_data();
	C1.show_data();
	//对学生数据进行修改，输出为set_data函数输入的值
	Cstudent C2;
	C2.show_data();   
	//C2对象没有调用set_data函数对成员修改，直接输出初始化中的初始值。
	return 0;
}
