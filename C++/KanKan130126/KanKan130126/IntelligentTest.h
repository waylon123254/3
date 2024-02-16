#pragma once
#include <algorithm>
//智能测试
class IntelligentTest
{
public:
	IntelligentTest();
	void Remove(const Point& p);//删除已经连接成功的点
	Point GetFirstPoint();//获取第一个点
	Point GetSecondPoint();//获取第二个点
	void AddHasReadPoint(const Point& p);//将已经检索过得点（暂时没有找到跟他匹配的点）加入hasReadList中
private:
	void InitDataBind();//将所有非空的点的坐标（某个值）加入集合noReadList中
	int firstIndex;//第一个点在集合中的索引
	int secondIndex;//第二个点在集合中的索引
	vector<int> hasReadList;//存放已经读了的点信息
	vector<int> noReadList;//存放剩下的点信息
	static const int Hundred=100;
};

IntelligentTest::IntelligentTest():firstIndex(0),secondIndex(1)
{
	InitDataBind();
}

//将已经检索过得点（暂时没有找到跟他匹配的点）加入hasReadList中
void IntelligentTest::AddHasReadPoint(const Point& p)
{
	int value=p.X*Hundred+p.Y;
	vector<int>::iterator item=find(hasReadList.begin(),hasReadList.end(),value);
	if(item==hasReadList.end())
	{
		hasReadList.push_back(value);
	}
}

//获取第二个点
Point IntelligentTest::GetSecondPoint()
{
	if(secondIndex>=noReadList.size())
	{
		secondIndex=0;
	}
	int value=noReadList[secondIndex++];
	return Point(value/Hundred,value%Hundred);
}

//获取第一个点
Point IntelligentTest::GetFirstPoint()
{ 
	if(firstIndex>=noReadList.size())
	{
		firstIndex=0;
	}
	if(hasReadList.size()>0)
	{
		vector<int>::iterator item=find(hasReadList.begin(),hasReadList.end(),noReadList[firstIndex]);
		while(item!=hasReadList.end())
		{
			if(++firstIndex==noReadList.size())
			{
				firstIndex=0;
				hasReadList.clear();
				break;
			}
			item=find(hasReadList.begin(),hasReadList.end(),noReadList[firstIndex]);
		}  
	}
	int value=noReadList[firstIndex++];
	return Point(value/Hundred,value%Hundred);
	
}

//将所有非空的点的坐标（某个值）加入集合noReadList中
void IntelligentTest::InitDataBind()
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(A[i][j]!=ZERO)
			{
				noReadList.push_back(i*Hundred+j); 
			}
		}
	}
}

//删除已经连接成功的点
void IntelligentTest::Remove(const Point& p)
{
	int value=p.X*Hundred+p.Y;
	vector<int>::iterator item=find(hasReadList.begin(),hasReadList.end(),value);
	if(item!=hasReadList.end())
	{
		 hasReadList.erase(item);
	}
	item=find(noReadList.begin(),noReadList.end(),value);
	if(item!=noReadList.end())
	{
		noReadList.erase(item);
		if(firstIndex<noReadList.size())
		{
			if(noReadList[firstIndex]>value && firstIndex>0)
			{
				firstIndex--;
			}
		}
		if(secondIndex<noReadList.size())
		{
			if(noReadList[secondIndex]>value && secondIndex>0)
			{
				secondIndex--;
			}
		}
	} 
}