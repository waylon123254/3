/*猴子吃桃*/
//#include<stdio.h>
//int main() {
//	int day, x = 1, y = 0;
//	for (day = 9; day >= 1; day--) {
//		y = (x + 1) * 2;
//		x = y;
//		//TODO
//	}
//	printf("%d", y);
//
//}

//#include <stdio.h>
//int getPeachNumber(int n)  //这里要定义n，要不编译器会报错！
//{
//	int num;
//	if(n==10)
//	{
//		return 1;
//	}
//	else
//	{
//		num = (getPeachNumber(n+1)+1)*2;
//		printf("第%d天所剩桃子%d个\n", n, num);
//	}
//	return num;
//}
//int main()
//{
//	int num = getPeachNumber(1);
//	printf("猴子第一天摘了:%d个桃子。\n", num);
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int count=0;
//	for(int i=0;i<=100;i++){
//		//TODO
//		if(i/10==9){
//			//TODO
//			count++;
//		}else if(i%10==9)
//		{
//			count++;
//		}
//		
//	}
//
//printf("%d",count);
//}
/*二分查找*/
//#include <stdio.h>
//#include <stdlib.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == key)
//		{
//			return mid;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n;
//	printf("请输入要排列的数字个数（1-10）：");
//	scanf("%d", &n);
//	
//	if (n < 1 || n > 10)
//	{
//		printf("输入的数字个数超出限制！\n");
//		return 0;
//	}
//	
//	int arr[10];
//	printf("请输入%d个数字（升序排列）：", n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	int key;
//	printf("请输入要查找的数字：");
//	scanf("%d", &key);
//	
//	int ret = bin_search(arr, 0, n - 1, key);
//	if (ret == -1)
//	{
//		printf("未找到该数字\n");
//	}
//	else
//	{
//		printf("找到该数字，下标为：%d\n", ret);
//	}
//	
//	return 0;
//}
/*
  当 arr[mid] > key：  
  这意味着目标值 key 在数组的左半部分。
  由于数组是已排序的，因此我们可以确定目标值不可能位于 mid 处，所以可以将右边界缩小为 mid - 1，从而将搜索范围限制在左半部分。
  当 arr[mid] < key：  
  这意味着目标值 key 在数组的右半部分。
  同样地，由于数组是已排序的，我们可以确定目标值不可能位于 mid 处，所以可以将左边界增加为 mid + 1，从而将搜索范围限制在右半部分。
 */
//#include<stdio.h>错误的
//int main(){
//	int arr[]={1,2,3,4,5};
//	int right=(sizeof(arr)/sizeof(arr[0]))-1,left=0,key;
//	int mid=(right+left);
//	for(int i=0;i<=right;i++){
//		//TODO
//		printf("%2d ",arr[i]);
//	}
//	printf("请输入要查找的key\n");
//	scanf("%d",&key);
//	if(arr[mid]==key){
//		//TODO
//		printf("%d",mid);
//	}else if(arr[mid]>key){
//		//TODO
//		right=mid-1;
//	}else if(arr[mid]<key){
//		//TODO
//		left=mid+1;
//	}
//	else
//	{
//		return -1;
//	}
//	
//	
//}
/*
  初始化 mid 的计算有误：
  
  当你计算 mid 时，使用的是 (right + left)，但没有除以 2 来得到中间位置的下标。
  修改为 int mid = (right + left) / 2;，以正确计算中间位置的下标。
  缺少循环来执行二分查找：
  
  在你的代码中，只有一个 for 循环用于输出数组的内容，但没有包含二分查找的循环逻辑。
  在进行二分查找时，需要使用循环或递归来重复执行查找操作，直到找到目标值或确定目标值不存在。
  缺少针对更新左右边界的逻辑：
  
  在你的代码中，只有在 arr[mid] == key 的情况下，才会打印出 mid 的值。但没有对左右边界进行更新操作。
  在 arr[mid] > key 的情况下，你需要将 right 更新为 mid - 1。
  在 arr[mid] < key 的情况下，你需要将 left 更新为 mid + 1。
  缺少循环结束的条件：
  
  在你的代码中，没有定义循环结束的条件。二分查找通常使用左右边界重合或交叉作为循环结束的条件
  
 */
//#include <stdio.h>
//
//int main() {
//	int arr[] = {1, 2, 3, 4, 5};
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int key;
//		for(int i=0;i<=right;i++){
//			//TODO
//			printf("%2d ",arr[i]);
//		}
//		printf("请输入要查找的key\n");
//		scanf("%d",&key);	
//	while (left <= right) {
//		int mid = (right + left) / 2;
//		
//		if (arr[mid] == key) {
//			printf("%d", mid);
//			break;
//		} else if (arr[mid] > key) {
//			right = mid - 1;
//		} else {
//			left = mid + 1;
//		}
//	}
//	
//	if (left > right) {
//		printf("Key not found");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int research(int arr[], int right, int left, int key) {
//	while (left <= right) {
//		int mid = (right + left) / 2;
//		
//		if (arr[mid] == key) {
//			printf("%d", mid);
//			return 0;
//		} else if (arr[mid] > key) {
//			right = mid - 1;
//		} else {
//			left = mid + 1;
//		}
//	}
//	
//	printf("Key not found");
//	return -1;
//}
//
//int main() {
//	int arr[] = {1, 2, 3, 4, 5};
//	int key;
//	printf("请输入key的值：");
//	scanf("%d", &key);
//	
//	int res = research(arr, (sizeof(arr) / sizeof(arr[0])) - 1, 0, key);
//	printf("\n%d", res);
//	if (res == -1) {
//		printf("Key not found");
//	}
//	
//
//}

/*递归函数*/
//#include <stdio.h>
//int fibonacci(int n) 
//{  
//	if(n <= 2)  
//	{  return 1;  }  
//	else  
//	{      return fibonacci(n - 1) + fibonacci(n - 2);     } 
//}
//int main()
//{  int n;//第n项  
//	scanf("%d", &n); 
//	printf("%d\n", fibonacci(n));//第n项斐波那契数列的值  
//	return 0; 
//}
/*阶乘*/
//#include<stdio.h>
//int Fact(int n)//递归函数  
//{     
//	if( n <= 1)     
//	{    return 1;     }  
//	return n * Fact(n - 1);
//}
//int main()//主函数  
//{     
//	int n;//阶乘数      
//	scanf("%d", &n);     
//	printf("%d\n", Fact(n));     
//	return 0; 
//}
//
//#include<stdio.h>
//void Prt(int a)//递归函数
//{     
//	if(a > 9)         
//		Prt(a / 10);   //单个语句将{}省略     
//	printf("%d ", a % 10); 
//} 
//int main()//主函数  
//{     
//	int a ;
//	scanf("%d",&a)
//	​Prt(a);
//	printf("\n"); ​   
//	return 0; 
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//// 编写函数不允许创建临时变量，求字符串的⻓度
//
//size_t my_strlen(const char* str) {
//	// 非法输入
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
//
//int main() {
//	char* str = "hello world";
//	printf("len is %d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main(){
////	int arr1[10] = { 1,2,3 }; //不完全初始化
////	int arr2[] = { 1,2,3,4 };
////	int arr3[5] = { 1,2,3,4,5 };  //完全初始化
////	char arr4[3] = {'a ',98,'c'};
////	char arr5[] = { 'a ',' b','c '};
////	char arr6[] = "abcdef";
///*
//  2.strlen 是求字符串长度的-只能针对字符串求长度 ，求字符串的长度-'\0’之前的字符个数- -库函数 - 使用得引头文件
//  
//  3.sizeof 计算变量、数组、类型的大小 - 单位是字节 - 操作符
//  
// */
//int arr[10] = { 0 };//数组的不完全初始化
////计算数组的元素个数
//int sz = sizeof(arr) / sizeof(arr[0]);
////对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//int i = 0;//做下标
//
////输出数组的内容
//for (i = 0; i < sz; ++i)
//{
//	printf("%d ", arr[i]);
//}
//}
/*最小公倍数（Least Common Multiple，LCM），如果有一个自然数a能被自然数b整除，则称a为b的倍数，b为a的约数，对于两个整数来说，指该两数共有倍数中最小的一个。计算最小公倍数时，通常会借助最大公约数来辅助计算。
  
  最小公倍数=两数的乘积/最大公约（因）数，解题时要避免和最大公约（因）数问题混淆。
  
  对于最小公倍数的求解，除了利用最大公约数外，还可根据定义进行算法设计。要求任意两个正整数的最小公倍数即，求出一个最小的能同时被两整数整除的自然数。*/
