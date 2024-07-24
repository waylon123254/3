//#include <iostream>
//#include <string>
//#include <cctype>
//
//int countUppercaseLetters(const std::string& str) {
//	int count = 0;
//	bool foundDotDot = false;
//	
//	for (char c : str) {
//		if (foundDotDot) {
//			if (std::isupper(c)) {
//				count++;
//			}
//		} else if (c == '.' && str.find("..") != std::string::npos) {
//			foundDotDot = true;
//		}
//	}
//	
//	return count;
//}
//
//int main() {
//	std::string input;
//	std::cout << "请输入一串字符（以 '..' 结束）：";
//	std::getline(std::cin, input, '.');
//	
//	int uppercaseCount = countUppercaseLetters(input);
//	std::cout << "大写英文字母的数量为：" << uppercaseCount << std::endl;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int x,temp=0,i1,i2,i3;
//	cin>>x;
//	i1=x%10;
//	i2=x%100/10;
//	i3=x/10/10;
//temp=i1*100+i2*10+i3;
//	cout<<temp<<endl;
//
//}
//#include<iostream>
//using namespace std;
//struct Person{
//	string name;
//	int sex;
//	int Phone;
//	string Address;
//};
//struct AddressBooks{
//	struct Person person[MAX];
//	int Size;
//};
//void ShowMenu(){
//	cout
//	<<
//	"1添加"<<
//	"2.显示"<<
//	"3。删除"<<
//	"4.查找"<<
//	"5.修改"<<
//	"6.清空"<<
//	"7.退出"<<endl;
//}
//int main(){
//	int select=0;
//	cin>>select;
//	switch (1) {
//	case 1:
//		//TODO
//		break;
//	case 2:
//		//TODO
//		break;
//	case 3:
//		break;
//	case 4:
//		break;
//	case 5:
//		break;
//	case 6
//	default:
//		//TODO
//		break;
//	}
//}
//#include <iostream>
//using namespace std;
//
//int example1()
//{
//	//可以在new后面直接赋值
//	int *p = new int(3);
//	//也可以单独赋值
//	//*p = 3;
//	
//	//如果不想使用指针，可以定义一个变量，在new之前用“*”表示new出来的内容
//	int q = *new int;
//	q = 1;
//	cout << q << endl;
//	
//	return *p;
//}
//
//int* example2()
//{
//	//当new一个数组时，同样用一个指针接住数组的首地址
//	int *q = new int[3];
//	for(int i=0; i<3; i++)
//		q[i] = i;
//	
//	return q;
//}
//
//struct student
//{
//	string name;
//	int score;
//};
//
//
//student* example3()
//{
//	//这里是用一个结构体指针接住结构体数组的首地址
//	//对于结构体指针，个人认为目前这种赋值方法比较方便
//	student *stlist = new student[3]{{"abc", 90}, {"bac", 78}, {"ccd", 93}};
//	
//	return stlist;
//}
//
//
//
//int main()
//{
//	int e1 = example1();
//	cout <<"e1: "<< e1 << endl;
//	
//	int *e2 = example2();
//	for(int i=0; i<3; i++)
//		cout << e2[i] << " ";
//	cout << endl;
//	
//	
//	student *st1 = example3();
//	
//	for(int i=0; i<3; i++)
//		cout << st1[i].name << " " << st1[i].score << endl;
//	
//	
//	
//	return 0;
//} 
//test5.cpp
//#include <iostream>
//using namespace std;
//
//struct Teacher
//{
//	int age_ = 31;
//	int &a;  //error  引用没有初始化；
//	float &b; //error 引用没有初始化；
//};
//
//int main()
//{
//	int a = 10;
//	// int & b; // error, 引用没有初始化；
//	
//	//Teacher my_teacher;
//}
//test5.cpp
//#include <iostream>
//using namespace std;
////void MySwa(int a,int b){
////	int temp=a;
////	a=b;
////	b=temp;
////}
////void MySwa1(int *a,int *b){
////	int temp=*a;
////	*a=*b;
////	*b=temp;
////}
//void MysWa2(int &a,int &b){
//		int temp=a;
//	a=b;
//		b=temp;
//}
//int main()
//{
//	int a = 10,b=20;
//	// int & b; // error, 引用没有初始化；
////	MySwa(a,b);
//	MysWa2(a,b);
//	cout<<a<<"	"<<b<<endl;
//	//Teacher my_teacher;
//}

//#include <iostream>
//using namespace std;
//int test1(){
//static	int a=10;
//	return a;
//}
//int main()
//{
//	int &ref=test1();
//	cout<<ref<<endl;
//}
//test3.cpp
//#include <iostream>
//using namespace std;
//
//struct Teacher
//{
//	int age_ = 30;
//	float height_ = 174.5;
//};
//void MyFun(Teacher &OneTeacher)
//{
//	OneTeacher.height_ = 185.9;
//}
//int main()
//{
//	Teacher my_teacher;
//	MyFun(my_teacher);
//	std::cout << "my_teacher height: " << my_teacher.height_<< std::endl;
//}
//test7.cpp
//#include <iostream>
//using namespace std;
//
//struct Teacher
//{
//	int age_ = 30;  // 8个字节
//	float height_ = 174.5; // 4字节
//	double weight_ = 70.0; //8字节
//	int &a; // 未初始化，仅仅用来试验内存占用大小，与指针占用大小一样
//};
//
//void MyFun(Teacher &OneTeacher)
//{
//	OneTeacher.height_ = 185.9;
//}
//
//int main()
//{
//	/* 基础数据类型 */
//	int a = 11;
//	int &b =  a; // 等价于： int *const b = &a;   // b是一个int类型的指针，指针本身不能变，指针内所指内容可以变；
//	b = 12; // 等价于 （*b) = 12;
//	
//	/* 引用本身占4个字节 */
//	int *pt = NULL;
//	cout << "size of int: " << sizeof(int) << endl;
//	cout << "size of float: " << sizeof(float) << endl;
//	cout << "size of double: " << sizeof(double) << endl;
//	cout << "size of pt: " << sizeof(pt) << endl;
//	cout << "size of teacher: " << sizeof(Teacher) << endl;
//	
//}
//test8.cpp
#include <iostream>
using namespace std;

/* 返回临时变量的引用 */
int& MyFun1()
{
	int var = 10;
	return var;
}

int main()
{
	int a = 0;
	
	// a = MyFun1();  // error
	
	// int &b = MyFun1(); //error
	
}
