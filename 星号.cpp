//#include <iostream>
//using namespace std;
//
//int main() {
//	int i, j, n;
//	cin >> n;
//	for (i = 1; i < n; i++) {
//		cout << "*" << endl;
//		for (j = i; j < i * 2 + 1; j++) {
//			cout << "	" << endl;
//
//		}
//
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////函数占位参数，占位参数也可以有默认函数
//void func(int a, int)
//{
//	cout << "this is func" << endl;
//}
//
//int main()
//{
//	func(10, 10);//占位参数必须填补
//	
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;

//函数高级-函数的占位参数
//函数默认参数

//语法：返回值类型  函数名  （形参 = 默认值）  
int func(int a=10,int b=20,int c=30)
{
	return (a+b+c);
} 


int func2(int a = 10,int b = 30,int c = 40)
{
	return (a*b*c);
} 

//注意：1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//2、如果函数声明有默认参数，那么函数实现就不能默认参数 
//声明和函数只能有一个有默认参数 

//int func3(int a =20,int b =40,int c = 50);
//int func3(int a =10,int b=20,int c=30)
//{
//	return (a+b-c);
//} 
//
//int main()
//{
//	
//	//如果默认之后又重新指认新的参数，之前的默认的参数就会被覆盖 ，如果没指出参数，就使用默认的参数的值即可 
//	//cout<< func(10,30,30) <<endl;//结果为70 
//	cout<<func2(10,10,30)<<endl;
//	cout<<func3(10,20,10)<<endl; 
//	system("pause");
//	return 0;
//}

//函数占位参数
//C++ 中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须补全该位置的参数

//语法：返回值类型 函数名 （数据类型）{参数}
//
//#include<iostream>
//using namespace std;
//
//void func(int a,int)
//{
//	cout<<"this is a GUN!"<<endl;
//}
//
//
//int main()
//{
//	//函数调用
//	func(10,20);
//	
//	system("pause");
//	return 0;
//}
//以判断点与圆的坐标关系为例
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Point                                 //点参数初始化
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//
//class Circle                                //圆参数初始化
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setC(Point center)
//	{
//		m_Center = center;
//	}
//	Point getC()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;                   //此处可看出不同类可相互嵌套使用
//};
//
//void isInCircle(Circle &c,Point &p)       //判断位置关系函数
//{
//	int distance =
//	(c.getC().getX() - p.getX()) * (c.getC().getX() - p.getX()) +
//	(c.getC().getY() - p.getY()) * (c.getC().getY() - p.getY());
//	int Rdistance = c.getR() * c.getR();
//	if (distance == Rdistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > Rdistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;                       //创建圆（录入半径与圆心）
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setC(center);
//	Point p;                        //创建点
//	p.setX(10);
//	p.setY(10);
//	isInCircle(c, p);                //判断关系
//	system("pause");
//	return 0;
//}
//圆参数初始化头文件
//#pragma once                               //防止头文件重复包含
//#include<iostream>
//#include"point.h"                          //嵌套了点初始化的类，需包含点初始化头文件
//class Circle
//{
//public:
//	void setR(int r);                  //此处省去函数实现，加分号补全
//	int getR();
//	void setC(Point center);
//	Point getC();
//private:
//	int m_R;
//	Point m_Center;
//};
//
////圆参数初始化源文件
//#include"circle.h"                        //只需包含圆初始化头文件
//void Circle::setR(int r)
//{
//	m_R = r;
//}
//int Circle::getR()
//{
//	return m_R;
//}
//void Circle::setC(Point center)
//{
//	m_Center = center;
//}
//Point Circle::getC()
//{
//	return m_Center;
//}
