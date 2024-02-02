#include <iostream>
using namespace std;
//定义类
//定义一个矩形，并计算矩形的面积
class RectangleS
{
	//定义类的访问权限
public:
	
	//定义类的属性
	//定义矩形的长和宽
	int l;
	int d;
	
	//定义类的行为
	//第1种定义方式：直接类里面定义类的函数
	int area()
	{
		return l * d;
	};
	//第2种定义方式：在类的外部定义函数
	//int area(int l, int d);
	
};

/*
  //第二种定义方式
  //在类的外部定义函数
  int RectangleS::area(int l, int d)
  {
  return l * d;
  }
 */


int main()
{
	//定义类的对象
	//实例化（通过一个类来创建一个对象的过程）
	RectangleS RS1;
	
	//为类的对象的属性赋值
	RS1.d = 5;
	RS1.l = 10;
	
	//调用类的行为
	cout << "输出矩形的面积" << RS1.area() << endl;
	
	return 0;
}
