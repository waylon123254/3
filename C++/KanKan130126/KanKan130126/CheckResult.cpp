#include "CheckResult.h"

CheckResult::CheckResult():leftPoint(0),leftLinkLine(0)
{
	SearchLeftLinkLine();
	SearchLeftPoint();
}

CheckResult::CheckResult(int _leftPoint):leftPoint(_leftPoint)
{
	SearchLeftLinkLine();
}

int CheckResult::LeftPoint() const
{
	return leftPoint;
}

int CheckResult::LeftLinkLine() 
{
	if(leftLinkLine<=0)
	{
		SearchLeftLinkLine();
	}
	return leftLinkLine;
}

//查询可连接的点对数
//每个点与其他任何点进行连接，如果连接成功leftLinkLine+1；将这两个点加入集合Set中，Set中的元素不在用于考虑
void CheckResult::SearchLeftLinkLine()
{
	set<int> list;//存放成功连接的点
	Point* first=NULL;
	Point* second=NULL;
	PathFind pathFind;
	int value1=0;
	int value2=0;
	for(int i=0;i<row;i++)
	{  
		//获取第一个点
		for(int j=0;j<column;j++)
		{
			if(A[i][j]==ZERO)
			{
				continue;
			} 
			value1=i*Hundred+j;//构成一个唯一的数
			if(list.find(value1)!=list.end())//如果这个数在集合中就继续循环
			{
				continue;
			}
			first=new Point(i,j);
			break; 
		}
		if(first==NULL)
		{
			continue;
		}
		//获取第二个点，并进行连接测试
		for(int j=0;j<column;j++)
		{ 
			if(A[i][j]==ZERO)
			{
				continue;
			}
			value2=i*Hundred+j;//构成一个唯一的数
			if(list.find(value2)!=list.end())//如果这个数在集合中就继续循环
			{
				continue;
			} 
			if(A[first->X][first->Y]!=A[i][j])
			{
				continue;
			}
			second=new Point(i,j); 
			if(*first==*second)
			{
				continue;
			}
			bool isOK=pathFind.Search(*first,*second);
			if(!isOK)
			{
				continue;
			}
			//成功连接
			delete first;
			first=NULL;
			delete second;
			second=NULL;
			list.insert(value1);
			list.insert(value2);  
			++leftLinkLine;
			break;
		}
		if(first!=NULL)
		{
			delete first;
			first=NULL;
		}
	}   
}

//查询剩下的点个数
void CheckResult::SearchLeftPoint()
{
	leftPoint=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(A[i][j]!=ZERO)
			{
				++leftPoint;
			}
		}
	}
}

//减少两个剩余的点 
bool CheckResult::Reduce2Point()
{
	if(leftPoint>=2)
	{
		leftPoint-=2;
		return true;
	}
	return false;
}

//判断是否成功
bool CheckResult::IsSuccess()
{
	return leftPoint<1;
}

//是否是无解
bool CheckResult::IsNoSolution()
{
	if(leftLinkLine<1)
	{
		SearchLeftLinkLine();
	}
	return leftLinkLine<1;
}