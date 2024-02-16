#pragma once 
#include "PathFind.h"
 
//第二条线在两个点的左边，共三条线
bool PathFind::Left(const Point& first,const Point& second)
{  
	for(int i=first.Y-1;i>=0;i--)//循环Y轴(横线)
	{
		if(A[first.X][i]!=ZERO)
		{
			return false;
		}
		Point first1(first.X,i);//第一个拐点
		Point second1(second.X,i);
		if(A[second1.X][second1.Y]!=ZERO)
		{
			return false;
		}
		bool isOK=SameY(first1,second1);//同竖线 
		if(!isOK)
		{
			continue;
		} 
		isOK=SameX(second1,second);//同横线 
		if(isOK)//寻路成功
		{ 
			centerPoint.Clear();
			centerPoint.AddPoint(first1);
			centerPoint.AddPoint(second1); 
			return true;
		} 
	}
	return false;
}

bool PathFind::Right(const Point& first,const Point& second)
{
	for(int i=first.Y+1;i<second.Y;i++)
	{
		if(A[first.X][i]!=ZERO)
		{
			return false;
		}
	}
	for(int i=second.Y;i<column;i++)
	{
		if(A[first.X][i]!=ZERO)
		{
			return false;
		}
		Point first1(first.X,i);//第一个拐点
		Point second1(second.X,i);//第二个拐点
		if(A[second1.X][second1.Y]!=ZERO)
		{
			return false;
		}
		bool isOK=SameY(first1,second1);//同竖线 
		if(!isOK)
		{
			continue;
		} 
		isOK=SameX(second1,second);//同横线 
		if(isOK)//寻路成功
		{
			//do something
			centerPoint.Clear();
			centerPoint.AddPoint(first1);
			centerPoint.AddPoint(second1); 
			return true;
		}
	}
	return false;
}

bool PathFind::Top(const Point& first,const Point& second)
{
	bool isOK=false;
	Point first1;
	Point second1;
	if(first.X>second.X)
	{
		for(int i=first.X-1;i>=second.X;i--)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
		}
		for(int i=second.X-1;i>=0;i--)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
			first1=Point(i,first.Y);//第一个拐点
			second1=Point(i,second.Y);//第二个拐点
			if(A[second1.X][second1.Y]!=ZERO)
			{
				return false;
			}
			isOK=SameX(first1,second1);//同竖线 
			if(!isOK)
			{
				continue;
			} 
			isOK=SameY(second1,second);//同横线 
			if(isOK)//寻路成功
			{
				isOK= true;
				break;
			}
		}
	}else{
		for(int i=first.X-1;i>=0;i--)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
			first1=Point(i,first.Y);//第一个拐点
			second1=Point(i,second.Y);//第二个拐点
			if(A[second1.X][second1.Y]!=ZERO)
			{
				return false;
			}
			isOK=SameX(first1,second1);//同竖线 
			if(!isOK)
			{
				continue;
			} 
			isOK=SameY(second1,second);//同横线 
			if(isOK)//寻路成功
			{ 
				isOK= true;
				break;
			}
		}
	}
	if(isOK)
	{
		centerPoint.Clear();
		centerPoint.AddPoint(first1);
		centerPoint.AddPoint(second1); 
	}
	return isOK;
}

bool PathFind::Bottom(const Point& first,const Point& second)
{
	bool isOK=false;
	Point first1;
	Point second1;
	if(first.X<second.X)
	{
		for(int i=first.X+1;i<second.X;i++)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
		}
		for(int i=second.X;i<row;i++)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
			first1=Point(i,first.Y);//第一个拐点
			second1=Point(i,second.Y);//第二个拐点
			if(A[second1.X][second1.Y]!=ZERO)
			{
				return false;
			}
			isOK=SameX(first1,second1);//同竖线 
			if(!isOK)
			{
				continue;
			} 
			isOK=SameY(second1,second);//同横线 
			if(isOK)//寻路成功
			{
				isOK= true;
				break;
			}
		}
	}else{
		for(int i=first.X+1;i<row;i++)
		{
			if(A[i][first.Y]!=ZERO)
			{
				return false;
			}
			first1=Point(i,first.Y);//第一个拐点
			second1=Point(i,second.Y);//第二个拐点
			if(A[second1.X][second1.Y]!=ZERO)
			{
				return false;
			}
			isOK=SameX(first1,second1);//同竖线 
			if(!isOK)
			{
				continue;
			} 
			isOK=SameY(second1,second);//同横线 
			if(isOK)//寻路成功
			{ 
				isOK= true;
				break;
			}
		}
	}
	if(isOK)
	{
		centerPoint.Clear();
		centerPoint.AddPoint(first1);
		centerPoint.AddPoint(second1); 
	}
	return isOK; 
}

bool PathFind::Center(const Point& first,const Point& second)
{
	bool isOK=false;
	Point first1;
	Point second1;
	for(int i=first.Y+1;i<=second.Y;i++)
	{
		if(A[first.X][i]!=ZERO)
		{
			return false;
		}
		first1=Point(first.X,i);//第一个拐点
		second1=Point(second.X,i);//第二个拐点 
		if(A[second1.X][second1.Y]!=ZERO && second1!=second)
		{
			return false;
		}
		isOK=SameY(first1,second1);//同竖线 
		if(!isOK)
		{
			continue;
		} 
		isOK=SameX(second1,second);//同横线 
		if(isOK)//寻路成功
		{ 
			break;
		} 
	}
	if(!isOK)
	{
		if(first.X<second.X)
		{  
			for(int i=first.X+1;i<second.X;i++)
			{
				if(A[first.Y][i]!=ZERO)
				{
					return false;
				}
				first1=Point(i,first.Y);//第一个拐点
				second1=Point(i,second.Y);//第二个拐点
				if(A[second1.X][second1.Y]!=ZERO && second1!=second)
				{
					return false;
				}
				isOK=SameY(first1,second1);//同竖线 
				if(!isOK)
				{
					continue;
				} 
				isOK=SameX(second1,second);//同横线 
				if(isOK)//寻路成功
				{ 
					break;
				} 
			} 
		}else{  
			for(int i=first.X-1;i>second.X;i--)
			{
				if(A[first.Y][i]!=ZERO)
				{
					return false;
				}
				first1=Point(i,first.Y);//第一个拐点
				second1=Point(i,second.Y);//第二个拐点
				if(A[second1.X][second1.Y]!=ZERO && second1!=second)
				{
					return false;
				}
				isOK=SameY(first1,second1);//同竖线 
				if(!isOK)
				{
					continue;
				} 
				isOK=SameX(second1,second);//同横线 
				if(isOK)//寻路成功
				{ 
					break;
				} 
			} 
		}
	}
	if(isOK)
	{
		centerPoint.Clear();
		centerPoint.AddPoint(first1);
		centerPoint.AddPoint(second1); 
	}
	return isOK; 
}

bool PathFind::Search(TwoPoint& endPoint)
{
	Point first=endPoint.First();
	Point second=endPoint.Second(); 
	return Search(first,second);
}

bool PathFind::Search(const Point& first,const Point& second)
{ 
	if(A[first.X][first.Y]!=A[second.X][second.Y])
	{
		return false;
	}
	bool isOK=Near(first,second);
	if(!isOK)
	{
		isOK=OneLine(first,second);
	}
	if(!isOK)
	{
		isOK=MoreLine(first,second);
	}
	return isOK;
}

bool PathFind::OneLine(TwoPoint& endPoint)
{
	if(endPoint.Count()!=2)
	{
		return false;
	}
	endPoint.Sort();
	Point first=endPoint.First();
	Point second=endPoint.Second(); 
	return OneLine(first,second);
}

bool PathFind::OneLine(const Point& first,const Point& second)
{ 
	//判断两次点击是否在一条横线上即同Y
	bool isOK=SameY(first,second); 
	if(!isOK)
	{
		//判断两次点击是否在一条竖线上即同X
		isOK=SameX(first,second); 
	}  
	return isOK;
}

//两条或三条线
bool PathFind::MoreLine(TwoPoint& endPoint)
{
	Point first=endPoint.First();
	Point second=endPoint.Second();
	return MoreLine(first,second);
}

//两条或三条线
bool PathFind::MoreLine(const Point& first,const Point& second)
{ 
	bool isOK=Center(first,second); 
	if(!isOK)
	{
		isOK=Left(first,second); 
	}
	if(!isOK)
	{
		isOK=Right(first,second);
	} 
	if(!isOK)
	{
		isOK=Top(first,second);
	} 
	if(!isOK)
	{
		isOK=Bottom(first,second);
	}
	return isOK;
}

bool PathFind::Near(TwoPoint& endPoint)
{  
	Point& first=endPoint.First();
	Point& second=endPoint.Second();
	return  Near(first,second);
}

bool PathFind::Near(const Point& first,const Point& second)
{  
	if(first.X==second.X && abs(first.Y-second.Y)==1)
	{
		return true;
	}
	if(first.Y==second.Y && abs(first.X-second.X)==1)
	{
		return true;
	}
	return  false;
}

 
//判断两个点是否在一条竖线上即同Y
bool PathFind::SameY(const Point& first,const Point& second)
{
	bool isOK=false;
	if(first.Y==second.Y)
	{
		isOK=true;
		int start=first.X;
		int end=second.X;
		if(first.X>second.X)
		{
			start=second.X;
			end=first.X;
		}
		for(int i=start+1;i<end;i++)
		{
			if(A[i][first.Y]!=ZERO)
			{
				isOK=false;
				break;
			}
		}
	}
	return isOK;
}

//判断两次点击是否在一条横线上即同X
bool PathFind::SameX(const Point& first,const Point& second)
{
	bool isOK=false;
	if(first.X==second.X)
	{
		isOK=true;
		int start=first.Y;
		int end=second.Y;
		if(first.Y>second.Y)
		{
			start=second.Y;
			end=first.Y;
		}
		for(int i=start+1;i<end;i++)
		{
			if(A[first.X][i]!=ZERO)
			{
				isOK=false;
				break;
			}
		}
	}
	return isOK;
} 
