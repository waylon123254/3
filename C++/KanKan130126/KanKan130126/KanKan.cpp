// KanKan.cpp : 定义控制台应用程序的入口点。
//
 
#include <iostream> 
using namespace std;   
#include <string> 
#include <sstream> 
#include <fstream>   
#include <time.h>
#include "FileHelper.h" 
#include "PathRecord.h"; 
#include "CheckResult.h";
#include "IntelligentTest.h"; 

void Print1(int,const Point& first,const Point& second, PathRecord& pointVector);
void PrintA(int index,const Point& first,const Point& second); 
void InitData();  
 
int main( ) {   
	{   
		InitData(); 
		clock_t  clockBegin, clockEnd;  
        clockBegin = clock();   
		int index=0;
		CheckResult result;
		IntelligentTest intelTest;
		PathFind path;
		PathRecord record; 
		int forCount=0;
		while(result.LeftPoint()>0) 
		{
			record.Clear();
			endPoint.Clear(); 
			bool isOK=false;
			Point first=intelTest.GetFirstPoint();   
			Point second;
			while(++forCount<SamePointCount)
			{
			    second=intelTest.GetSecondPoint() ;   
				while(A[first.X][first.Y]!=A[second.X][second.Y] || first==second)
				{
					second= intelTest.GetSecondPoint();  
				}
				endPoint.AddPoint(first);
				endPoint.AddPoint(second);  
				isOK=path.Search(endPoint); 
				if(!isOK)
				{
					intelTest.AddHasReadPoint(first);
					endPoint.Clear();
					continue;
				} else{ 
					break;
				} 
			}
			forCount=0; 
			if(!isOK)
			{
				if(result.IsNoSolution())
				{
					cout<<"对不起，无解了"<<endl; 
					goto End;
				}else{
					continue;
				}
			} 
			++index; 
			PrintA(index,first,second); 
			A[first.X][first.Y]=ZERO;
			A[second.X][second.Y]=ZERO;  
			result.Reduce2Point();
			intelTest.Remove(first);
			intelTest.Remove(second);
			if(result.IsNoSolution())
			{
				cout<<"对不起，无解了"<<endl; 
				goto End;
			}
			if(result.IsSuccess())
			{
				cout<<"恭喜您，成功了"<<endl; 
				goto End;
			}  
		} 
		cout<<"结束"<<endl;
		End:;
		clockEnd = clock();  
		cout<<"用时："<<clockEnd-clockBegin<<"毫秒"<<endl;
	}
	 
	getchar();  
    return 0; 
}
 
void PrintA(int index,const Point& first,const Point& second)
{
	FileHelper f;
	ostringstream s; 
	s<<"步骤"<<index<<":("<<first.X<<","<<first.Y<<")~("<<second.X<<","<<second.Y<<") -> "<<A[first.X][first.Y]<<endl;
	for(int i=0;i<row;i++)
	{ 
		for(int j=0;j<column;j++)
		{ 
			if((first.X==i && first.Y==j) ||(second.X==i && second.Y==j))
			{
				s<<"X  "; 
			}else{
				if(A[i][j]==ZERO)
				{
					s<< "   "; 
				}else{
					s<<A[i][j]<<"  "; 
				}
			}
		} 
		s<<endl;
	} 
	s<<endl;
	f.Append("step.txt",s.str()); 
}
 
  
void Print1(int index,const Point& first,const Point& second, PathRecord& pointVector)
{   
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			AA[i][j]=A[i][j];
		}  
	}  
	for(int i=pointVector.Size()-1;i>=0;i--)
	{
		Point* p=(pointVector)[i];
		AA[p->X][p->Y]='|';
	}
	AA[first.X][first.Y]='X';
	AA[second.X][second.Y]='X';
	FileHelper f;
	ostringstream s;
	s<<"步骤"<<index<<"("<<first.X<<","<<first.Y<<")~"<<"("<<second.X<<","<<second.Y<<") 输出结果："<<endl; 
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			s<<AA[i][j]<<" "; 
		} 
		s<<endl; 
	}  
	f.Append("record.txt",s.str()); 
}
  
void InitData()
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			A[i][j]=ZERO;
		} 
	} 
	 
	DType digit[17]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NIGHT,TEN,ELEVEN,TWELEVE,THIRTEEN,FOURTEEN,FIFTEEN}; 
	srand((unsigned)time(NULL));
	int index=1;
	while(index<16){ 
		int x=rand()%(row-2)+1; 
		int y=rand()%(column-2)+1;  
		if(A[x][y]==ZERO)
		{
			A[x][y]=digit[index];
		}else{
			continue;
		}
		int count=0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
				if(A[i][j]==digit[index])
				{           
					count++;
				}
			} 
		} 
		 
		if(count==SamePointCount)
		{ 
			index++;
		} 
	} 
	int left=rand()%16;
	for(int i=1;i<row-1;i++)
	{
		for(int j=1;j<column-1;j++)
		{
			if(A[i][j]==ZERO)
			{
				A[i][j]=digit[left];
			}
		} 
	} 
	cout<<"开始图形："<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(A[i][j]!=ZERO)
			{
				cout<<A[i][j]<<"  ";
			}else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
 