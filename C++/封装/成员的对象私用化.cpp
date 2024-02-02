#include <iostream>
#include <string>
using namespace std;
class Person
{
	
public:
	//写姓名，设置姓名,让姓名可读可写
	void setName(string n)
	{
		name = n;
	}
	// 读姓名（获取姓名）
	string getName()
	{
		return name;
	}
	// 年龄可读
	int getAge()//可读可写，如果想修改，年龄的范围必须是0~15
	{
		age = 0; //初始化年龄
		return age;
	}
	//设置年龄
	void setAge(int a){
		if(age<0 || age>150){
			cout<<"age is error"<<endl;
			return ;
		}
		age=a;
	}
	//lover只写
	void setLover(string l)
	{
		lover = l;
	}
	
	private: //设置之后无法拿到权限
	string name;
	int age;      //只读
	string lover; //只写
};
int main()
{
	Person p;
	p.setName("zhangsan");
	cout << "name is: " << p.getName() << endl;
	cout << "age is " << p.getAge() << endl;
	p.setLover("aaaa"); //无法通过外界获取
	
	system("pause");
	return 0;
}
