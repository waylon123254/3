#include <iostream>
using namespace std;

//比较int 类型
int Max(int a, int b)
{
	return a > b ? a : b;
}

//比较char 类型
char Max(char a, char b)
{
	return a > b ? a : b;
}

//比较float 类型
float Max(float a, float b)
{
	return a > b ? a : b;
}

int main(void)
{
	
	int  n = 1;
	int	 m = 2;
	cout << "max(1, 2) = " << Max(n, m) << endl;
	
	float a = 2.0;
	float b = 3.0;
	cout << "max(2.0, 3.0) = " << Max(a, b) << endl;
	
	char i = 'a';
	char j = 'b';
	cout << "max('a', 'b') = " << Max(i, j) << endl;
	
	return 0;
}
