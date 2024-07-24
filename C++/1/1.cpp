#include <iostream>

using namespace std;

//
//int main() {
//	//脪禄脦卢脢媒脳茅
//	int arr[5] = { 1, 2, 3, 4, 5 };
//
//	/* 脪禄脦卢脢媒脳茅碌脛碌脴脰路脫毛脰赂脮毛 */
//	int *p1 = (int *)(&arr + 1);	//&arr拢潞脮没赂枚脢媒脳茅碌脛碌脴脰路	//&arr + 1拢潞脰赂脧貌脢媒脳茅碌脛脛漏脦虏麓娄
//	int *p2 = (int *)(arr + 1);		//arr碌脠录脹脫脷&arr[0]拢卢脌脿脨脥脦陋int *脌脿脨脥拢潞脢媒脳茅脢脳脭陋脣脴碌脴脰路
//	cout << p1[-2] << endl;		//4
//	cout << *p2 << endl;		//2
//
//
//	cout << arr << endl;			//009DFBB8
//	cout << *arr << endl;			//1隆戮碌脷1赂枚脭陋脣脴脰碌隆驴
//	cout << arr + 1 << endl;		//009DFBBC	潞贸脪脝4脳脰陆脷隆戮脤酶鹿媒1赂枚脭陋脣脴隆驴
//	cout << *(arr + 1) << endl;		//2隆戮碌脷2赂枚脭陋脣脴脰碌隆驴
//
//	cout << &arr[0] << endl;		//009DFBB8
//	cout << *(&arr[0]) << endl;		//1隆戮碌脷1赂枚脭陋脣脴脰碌隆驴
//	cout << &arr[0] + 1 << endl;	//009DFBBC	潞贸脪脝4脳脰陆脷隆戮脤酶鹿媒1赂枚脭陋脣脴隆驴
//	cout << *(&arr[0] + 1) << endl;	//2隆戮碌脷2赂枚脭陋脣脴脰碌隆驴
//
//	cout << &arr << endl;			//009DFBB8
//	cout << *(&arr) << endl;		//009DFBB8
//	cout << &arr + 1 << endl;		//009DFBCC	潞贸脪脝4*5=20脳脰陆脷隆戮脤酶鹿媒脮没赂枚脢媒脳茅隆驴
//	cout << *(&arr + 1) << endl;	//009DFBCC
//
//	return 0;
//}
// int main() {
// 	int arr[5] = {300, 500, 200, 250};
// 	int count = sizeof(arr) / sizeof(arr[0]);
// 	int temp = 0 ;
// for (int i = 0; i < count - 1; i) {
// 	/* code */
// 	for (int j = 0; j < count - i; ++j) {
// 		/* code */
// 		if (arr[j] < arr[j + 1]) {
// 			/* code */
// 			temp = arr[j];
// 			arr[j] = arr[j + 1];
// 			arr[j + 1] = temp;

// 			}
// 		}

// 	}
// 	cout  << arr[0] << endl;
// }

//int main() {
//	int arr[] = {5, 4, 3, 2, 1, 0};
//	int count = sizeof(arr) / sizeof(arr[0]), temp = 0;
//	for (int i = 0; i < count - 1; i++) {
//
//		for (int j = count - 1 - i; j >= 0; --j) {
//
//			temp = arr[j];
//			arr[j] = arr[j - 1];
//			arr[j - 1] = temp;
//		}
//	}
//	/* code */
//	for (int i = 0; i < count; ++i) {
//		cout  << arr[i] << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[] = {1, 3, 2, 5, 4};
//	int count = sizeof(arr) / sizeof(arr[0]);
//
//	// 将数组元素逆置
//	for (int i = 0; i < count / 2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[count - 1 - i];
//		arr[count - 1 - i] = temp;
//	}
//
//	// 输出逆置后的结果
//	for (int i = 0; i < count; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//#include <iostream>  
//using namespace std;  
//
//float FuncP(int a, float b)  
//{  
//	return a + b;  
//}  
//
//int FuncNP()  
//{  
//	return 3;  
//}  
//
//void Func()  
//{  
//}  
//
//int main()  
//{  
//	cout<<sizeof(FuncP(3, 0.4))<<endl; //OK，值为4，sizeof(FuncP(3,0.4))相当于sizeof(float)  
//	cout<<sizeof(FuncNP())<<endl; //OK，值为4，sizeof(FuncNP())相当于sizeof(int)  
//	/*cout<<sizeof(Func())<<endl; //error，sizeof不能对返回值为空类型的函数求值*/  
//	/*cout<<sizeof(FuncNP)<<endl; //error，sizeof不能对函数名求值*/  
//	return 0;  
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num = 0; // 符合条件的数字个数
//	
//	int x, y, z; // 数字的百位、十位和个位
//	
//	for (int i = 100; i <= 999; i++) { // 遍历从100到999之间的三位数
//		// TODO
//		x = i % 10; // 获取个位
//		y = (i / 10) % 10; // 获取十位
//		z = i / 100; // 获取百位
//		
//		if (z * z * z + y * y * y + x * x * x == i) { // 判断是否满足条件
//			// TODO
//			num++; // 符合条件的数字个数加1
//			cout << i << endl; // 输出符合条件的数字
//		} else {
//			break; // 如果不满足条件，则跳出循环
//		}
//	}
//	
//	cout << "符合条件的数字个数：" << num << endl; // 输出符合条件的数字个数
//	
//	cout << "最后一次循环中的个位、十位和百位：" << x << y << z << endl; // 输出最后一次循环中的个位、十位和百位
//	
//	return 0;
//}
//int main(){
//	int temp;
//	int a[5] = { 1,3,2,5,4 };
//	int start = 0;
//	int end = sizeof(a) / sizeof(a[0]) - 1;
//	for (int i = 0; i < 5; i++)
//	{
//		if (start < end)
//		{
//			temp = a[start];
//			a[start] = a[end];
//			a[end] = temp;
//		}
//		start++;
//		end--;
//	}
//	for (int i = 0; i < 5;i++)
//	{
//		cout << a[i] << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int Scores[3][3] = {
//		{100, 100, 99},
//		{89, 99, 80},
//		{79, 90, 60}
//	};
//	
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += Scores[i][j];
//		}
//		cout << "第" << i+1 << "个学生的总分：" << sum << endl;
//	}
//	
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void swap_by_value(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//	cout << "&x: " << &x << ", &y: " << &y << endl;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 7;
//	
//	cout << "before: a: " << a << ", b: " << b << endl;
//	cout << "&a: " << &a << ", &b: " << &b << endl;
//	swap_by_value(a, b);
//	cout << "after : a: " << a << ", b: " << b << endl;
//	
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void swap_by_pointer(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//	cout << "&x: " << x << ", &y: " << y << endl;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 7;
//	
//	cout << "before: a: " << a << ", b: " << b << endl;
//	cout << "&a: " << &a << ", &b: " << &b << endl;
//	swap_by_pointer(&a, &b);
//	cout << "after : a: " << a << ", b: " << b << endl;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n,temp=1;
//cin>>n;
//	for(int i=1;i<=n;i++){
//		//TODO
//		temp*=i;
//		
//	}
//	cout<<temp<<endl;
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,temp =0;
//	int i1,i2,i3,i4;
//	cin>>n;
//	i1=n/1000;
//	i2=n/100%10;
//	i3=n%100/10;
//	i4=n%10;
//	temp=i1+i2+i3+i4;
//	cout<<temp<<endl;
//}
//#include <iostream>
//#include <iomanip>  // 引入头文件以使用setprecision函数
//using namespace std;
//
//int main()
//{
//	int n;
//	float temp;
//	int i1, i2;
//	cin >> n;
//	i1 = n / 10;
//	i2 = n % 10;
//	temp = float(i1) / i2;
//	cout << fixed << setprecision(1) << temp << endl;  // 设置输出保留一位小数
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int x,temp=0,i1,i2,i3;
//	cin>>x;
//	i1=x%10;
//	i2=x%100/10;
//	i3=x/10/10;
//	temp=i1*100+i2*10+i3+x;
//	cout<<temp<<endl;
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,temp =0;
//	int i1,i2,i3,i4;
//	cin>>n;
//	i1=n/1000;
//	i2=n/100%10;
//	i3=n%100/10;
//	i4=n%10;
//	temp=i1+i2+i3+i4;
//	cout<<temp<<endl;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int M = 5;
//	int n = 5;
//	
//	// 声明数组行指针
//	char *a[5];
//	
//	for (int i = 0; i < M; i++) 
//	{
//		// 声明数组列指针
//		a[i] = new char[n];
//		// 列赋值
//		for (int j = 0; j < n; j ++)
//		{
//			a[i][j] = j;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	// delete 内存
//	for (int i = 0; i < M; i++)
//	{
//		delete [] a[i];
//	}
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{   
	int n = 5;
	int (* array2D)[5] = new int[n][5];  
	for(int i=0; i<n; ++i)  
	{  
		for(int j=0; j<5; ++j)  
		{  
			array2D[i][j] = i * 5 + j;  
		}  
	}  
	for(int i=0; i<n; ++i)  
	{  
		for(int j=0; j<5; ++j)  
		{  
			printf("%d  ", array2D[i][j]);
		} 
		printf("\n");
	}
	system("pause");
	delete[] array2D;
	return 0;
}
