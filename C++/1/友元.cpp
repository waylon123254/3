//#include<iostream>
//using namespace std;
//class Building {
//	friend void Goodfriend(Building *building);
//public:
//	Building()
//	
//	{
//		m_SttingRoom="客厅";
//		m_BedRoom="卧室";
//	
//	}
//	public:
//		string m_SttingRoom;
//	private:
//		string m_BedRoom;
//};
//void Goodfriend(Building *building)
//{
//	cout<<"全局函数正在访问"<<endl;
//	cout<<building->m_SttingRoom;
//	cout<<building->m_BedRoom<<endl;
//	
//}
//void test()
//{
//	Building b;
//	Goodfriend(&b);
//}
//int main() {
//	test();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n,temp=0;
//	cin>> n;
//	for(int i=1;i<=n;i+=2){
//
//		
//			temp+=i;
//
//		
//	}
//	cout<<temp<<endl;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//#define pai 3.1415926
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << fixed << setprecision(2)<<"\n" << n * n * pai << " " << fixed << setprecision(2)<<"\n" << n * 2 * pai << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//unsigned long long factorial(int num) {
//	unsigned long long result = 1;
//	
//	for(int i = 1; i <= num; ++i) {
//		result *= i;
//	}
//	
//	return result;
//}
//
//int main() {
//	int n;
//	cout << "请输入要计算的阶乘个数：";
//	cin >> n;
//	
//	if(n < 0) {
//		cout << "错误：阶乘个数不能为负数。" << endl;
//		return 0;
//	}
//	
//	unsigned long long sum = 0;
//	for(int i = 0; i <= n; ++i) {
//		sum += factorial(i);
//	}
//	
//	cout << "前 " << n << " 个阶乘的和为：" << sum << endl;
//	
//	return 0;
//}

////test8.cpp
//#include <iostream>
//using namespace std;
//
///* 返回临时变量的引用 */
//int& MyFun1()
//{
//	int var = 10;
//	return var;
//}
//
//int main()
//{
//	int a = 0;
//	
//	// a = MyFun1();  // error
//	
//	// int &b = MyFun1(); //error
//	
//}

//#include <iostream>
//using namespace std;
//
//int global_var1 = 8;
//int global_var2 = 77;
//
//int& MyFun1()
//{
//	
//	return global_var1;
//}
//
//int& MyFun2()
//{
//	
//	return global_var2;
//}
//
//int& MyFun3()
//{
//	static int c = 4;
//	return c;
//}
//int main()
//{
//	/* 返回引用作为右值 */
//	int a = MyFun1();
//	cout << "a: " << a << endl;
//	
//	/* 通过引用去承接，接到的是引用，能够修改其值*/
//	int &b =  MyFun1();
//	cout << "b: " << b << endl;  
//	b = 11;
//	cout << "b: " << b << endl;
//	
//	/* 返回引用作为左值 */
//	MyFun2() = 12;
//	cout << "global_var2: "  << global_var2 << endl;
//	
//	/* 局部静态变量 */
//	MyFun3() = 15;
//	std::cout << "MyFun3: " << MyFun3() << endl;
//	
//}
//test10.cpp
#include<iostream>
using namespace std;
int main(){
	double a=10.3;
	int &b=a; //错误，引用的类型必须和其所绑定的变量的类型相同
	cout<<b<<endl;
}
