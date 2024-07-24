#include<iostream>
using namespace std;
class Person //成人
{
public:
	virtual void fun()
	{
		cout << "全价票" << endl; //成人票全价
	}
};
class Student : public Person //学生
{
public:
	virtual void fun() //子类完成对父类虚函数的重写
	{
		cout << "半价票" << endl;//学生票半价
	}
};
void BuyTicket(Person* p)
{
	p->fun();
}

int main()
{
	Student st;
	Person p;
	BuyTicket(&st);//子类对象切片过去
	BuyTicket(&p);//父类对象传地址
	return 0;
}

