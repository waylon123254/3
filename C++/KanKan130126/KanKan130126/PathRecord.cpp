#pragma once
#include "Point.h"
#include "PathRecord.h" 

PathRecord::~PathRecord()
{
	Clear(); 
}

int PathRecord::Size()
{
	return pointVector.size();
}
 
Point* PathRecord::operator[](int index)
{
	if(index>=pointVector.size() || index<0)
	{
		throw new runtime_error("out of range exception!");
	}
	return  pointVector[index];
}

void PathRecord::Clear()
{
	if(pointVector.size()>0)
	{
		for(int i=pointVector.size()-1;i>=0;i--)
		{
			delete pointVector[i];
		}
		pointVector.clear();
	} 
}

void PathRecord::AddPoint(const Point& p)
{
	pointVector.push_back(new Point(p));
}
 
void PathRecord::AddPointLine(const Point& first,const Point& second)
{  
	if(first.X==second.X)//ͬX
	{ 
		if(first.Y>second.Y)
		{ 
			for(int i=first.Y-1;i>second.Y;i--)
			{
				pointVector.push_back(new Point(first.X,i));
			}
		}else{ 
			for(int i=first.Y+1;i<second.Y;i++)
			{
				pointVector.push_back(new Point(first.X,i));
			}
		} 
	}else{//ͬY
		if(first.X>second.X)
		{ 
			for(int i=first.X-1;i>second.X;i--)
			{
				pointVector.push_back(new Point(i,first.Y));
			}
		}else{ 
			for(int i=first.X+1;i<second.X;i++)
			{
				pointVector.push_back(new Point(i,first.Y));
			}
		} 
	}
}

void PathRecord::AddPoint(const Point& first,const Point& center1,const Point& second)
{
	AddPointLine(first,center1);
	AddPoint(center1); 
	AddPointLine(center1,second);
}

void PathRecord::AddPoint(const Point& first,const Point& center1,const Point& center2,const Point& second)
{
	AddPoint(first,center1,center2); 
	AddPoint(center2);
	AddPointLine(center2,second);
}