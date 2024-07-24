#include<iostream>
using namespace std;
typedef int STDataType;
struct Stack
{
	// 定义成员函数
	void StackInit(int initcapacity = 4)
	{
		_a = (int*)malloc(sizeof(int) * initcapacity);
		_size = 0;
		_capacity = initcapacity;
	}
	void StackPush(STDataType x)
	{
		_a[_size++] = x;
	}
	// 定义成员变量
	STDataType* _a; // 成员变量在这里是声明
	int _size;
	int _capacity;
};
int main()
{
	Stack st; // 这里是定义
	st.StackInit(10);
	st.StackPush(1);
	st.StackPush(2);
	st.StackPush(3);
	return 0;
}
