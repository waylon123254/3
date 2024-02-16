#pragma once 
#include "Point.h" 
#include "Source.h" 
//寻路，主要的逻辑实现   
class PathFind
{
public: 
	bool Left(const Point& first,const Point& second);
	bool Right(const Point& first,const Point& second);
	bool Top(const Point& first,const Point& second);
	bool Bottom(const Point& first,const Point& second);
	bool Center(const Point& first,const Point& second);

	bool OneLine(TwoPoint& endPoint); 
	bool OneLine(const Point& first,const Point& second);
	bool MoreLine(TwoPoint& endPoint);
	bool MoreLine(const Point& first,const Point& second);
	bool Near(TwoPoint& endPoint); 
	bool Near(const Point& first,const Point& second); 
	bool Search(TwoPoint& endPoint);
	bool Search(const Point& first,const Point& second); 

private: 
	//判断两个点是否在一条竖线上即同Y
	bool SameY(const Point& first,const Point& second);
	//判断两次点击是否在一条横线上即同X
	bool SameX(const Point& first,const Point& second);  
}; 
 