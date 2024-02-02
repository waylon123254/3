#include <iostream>
using namespace std;
//
//struct A {
//	A() {
//		cout << "A::A" << endl;
//	}
//	~A() {
//		cout << "A::~A" << endl;
//	}
//};
//
//struct B: public A {
//	B() {
//		cout << "B::B" << endl;
//	}
//	~B() {
//		cout << "B::~B" << endl;
//	}
//};
//class Person 
//{
//public:
//	std::string name;  // 公共成员变量
//	void setName(std::string name) 
//	{
//		this->name = name;
//	}  // 公共成员函数
//};
//
//int main() 
//{
//	Person p;
//	p.setName("Tom");  // 可以直接访问公共成员
//	std::cout << p.name << std::endl;  // 可以直接访问公共成员
//	return 0;
//}
//class Person 
//{
//protected:
//	int age;  // 保护成员变量
//	void setAge(int age) 
//	{
//		this->age = age;
//	}  // 保护成员函数
//};
//
//class Student : public Person 
//{
//public:
//	void setStudentAge(int age) 
//	{
//		setAge(age);  // 可以访问基类的保护成员函数
//	}
//};
//
//int main() {
//	Student s;
//	s.setStudentAge(20);  // 可以访问基类的保护成员函数
//	return 0;
//}
class Person 
{
private:
	string name;
	int age;
public:
	Person() 
	{
cout<<"构造函数"<<endl;
	}
	~Person() 
	{
		cout << "Destroying object " <<endl;
	}

};
int main() {
Person();
}
