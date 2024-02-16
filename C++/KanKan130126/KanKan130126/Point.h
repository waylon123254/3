#pragma once
#include <iostream>  
using namespace std;

//表示坐标轴上的一个点[X,Y]
struct Point
{
	Point():X(-1),Y(-1){}

	Point(int _x,int _y):X(_x),Y(_y){}

	Point(const Point& p):X(p.X),Y(p.Y){}

	Point& operator=(const Point& p);

    bool operator==(const Point& p);

    bool operator==(Point& p);

    bool operator!=(const Point& p);

    bool operator!=(Point& p);

	int X;//X轴
	int Y;//Y轴
}; 

 
//用于记录用户点击了哪两个点  
class TwoPoint
{
public:
	TwoPoint(); 
	~TwoPoint(); 
	//添加点
	bool AddPoint(const Point& p);  
	//点的个数
	int Count() const;

	Point First() const;
	void First(const Point& p);
	Point Second() const; 
	void Sort();
	void Clear();
private:
	TwoPoint(const TwoPoint& p); 
	TwoPoint& operator=(const TwoPoint& p); 
	Point* first;
	Point* second;
	int count;
};