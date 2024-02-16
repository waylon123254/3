#pragma once 
#include <set>
#include "Point.h"
#include "Source.h"
#include "PathFind.h"
//结果判定-判定是死局或是已通关
class CheckResult
{
	public:
		CheckResult();
		CheckResult(int _leftPoint);
		int LeftPoint() const;//返回剩下的点
		int LeftLinkLine();//可连接的点对数
		void SearchLeftLinkLine();//查询可连接的点对数
		void SearchLeftPoint();//查询剩下的点个数
		bool Reduce2Point();//减少两个剩余的点 
		bool IsSuccess();//判断是否成功
		bool IsNoSolution();//是否是无解
	private:
		int leftPoint;//剩下的点用于判断是否结束
		volatile int leftLinkLine;//可连接的点对数 用于判断是否死局 
		static const int Hundred=100;
};
