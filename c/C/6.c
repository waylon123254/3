//#include<stdio.h>
//int main(){
//	float h,s,i;
//	s=100; //第一次落地高度
//	h=s/2; //第一次反弹高度
//	for(i=2;i<=10;i++){
//		s=s+2*h;
//		h=h/2;
//	}
//	printf("一共经过%f米\n",s);
//	printf("第十次反弹%f米\n",h);
//}

//剔除字母
//#include<stdio.h>
//int main()
//{
//	int a[15];
//	for(int i=0;i<15;i++){
//		//TODO
//		printf("第%d个数：\n",i+1);
//		if(1){
//			//TODO
//		}
//		
//	}
//	for(int i=0;i<15;i++){
//		//TODO
//		printf("%d",a[i]);
//	}
//	}
//#include <stdio.h>
//
//int main()
//{
//	int a[10];
//	int i,j,t;
//	printf("input 10 numbers: \n");
//	for(i = 0;i < 10;i++)
//		scanf("%d",&a[i]);
//	printf("\n");
//	for(j=0;j<9;j++)
//		for(i=0;i<9-j;i++)
//			if (a[i]>a[i+1])
//	{ t=a[i];a[i]=a[i+1];a[i+1]=t; }
//	printf("the sorted numbers:\n");
//	for(i=0;i<10;i++)
//		printf("%d",a[i]);
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//头文件 因为使用库函数printf
//#include<string.h>
//char Right_triangle(int n){
//	for(int i=0;i<=n;i++){
//		//TODO
//		for(int j=0;j<=i;j++){
//			//TODO
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入层数\n");
//	scanf("%d",&n);
//   putchar(Right_triangle(n));
//for(int i=0;i<=n;i++){
//	for(int j=i;j<=n;j++){
//		printf("*");
//	}
//	printf("\n");
//}
/*倒立三角形*/
//for(int i=1;i<=n;i++){
//	//TODO
//	for(int j=n;i<=j;j--){
//		//TODO
//		printf("*");
//	}
//	printf("\n");
//}

//}
//int main()
//{
//	long f1,f2;
//	int i;
//	f1=f2=1;
//	for(i=1;i<=20;i++)
//	{ printf("%12ld%12ld",f1,f2);
//		if(i%2==0) printf("\n");/*控制输出，每行四个*/
//		f1=f1+f2;/*前两个月加起来赋值给第三个月*/
//		f2=f1+f2; /*前两个月加起来赋值给第三个月*/
//	}
//}
//int Funv(int x){
//	if(x==2||x==1){
//		//TODO
//		return 1;
//	}else
//	{
//		return Funv(x-1)+Funv(x-2);
//	}
//	
//}
//int main(){
//	int i;
//	// 输出前 10 个数
//	scanf("%d",&i);
////	for (i = 1; i <= 10; i++) {
////		printf("%d ", Funv(i));
////	}
//	printf("%d \n",Funv(i));
//	return 0;
//}
//
////int Fib(int n)
////{
////	int f0=0,f1=1,f,i;
////	if(n==0||n==1)
////	{
////		return n;
////	}
////	for(i=2;i<=n;i++)
////	{
////		f=f0+f1;       //由前两步结果推出当前结果
////		f0=f1;         //原前一步当作下一次的前两步
////		f1=f;          //当前结果当作下一次的前一步
////	}                  //在进行向前传递时，要注意传递的时序
////	return f;
////}
////int main()
////{
////	int n;
////	scanf("%d",&n);
////	printf("Fib(%d)=%d\n",n,Fib(n));
////}
//
//#include <stdio.h>
//
//void Prt(int a) {
//	if (a <= 9) {
//		printf("%d ", a);
//		return;
//	}
//	Prt(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main() {
//	int a;
//	if (scanf("%d", &a) != 1) {
//		printf("Invalid input\n");
//		return 1;
//	}
//	Prt(a);
//	printf("\n");
//	return 0;
//}
//水仙花数
//int main()
//{
//	int n,i,sum=0;//定义一个存放因子和的变量，以及需要判断的数n，和循环条件用到的i
//	printf("请输入需要判断的数：");
//	scanf("%d",&n);//存放需要判断的数n
//	for(i=1;i<n;i++)//循环条件找出因子并累加
//	{
//		if(n%i==0)
//			sum+=i;
//	}
//	if(n==sum)
//		printf("%d 是完数\n",n);
//	else
//		printf("%d 不是完数\n",n);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int n, i, sum = 0; // Define a variable to store the sum of factors and variables for number n and loop condition i
//	printf("Please enter a number for evaluation: ");
//	scanf("%d", &n); // Store the number to be evaluated in variable n
//	for (i = 1; i < n; i++) { // Loop to find factors and accumulate them
//		if (n % i == 0)
//			sum += i;
//	}
//	if (n == sum)
//		printf("%d is a perfect number\n", n);
//	else
//		printf("%d is not a perfect number\n", n);
//	return 0;
//}

/*
  型二：判断多个完数
  判断多个完数其实和判断一个完数是一样的，就是增加了一个循环的功能，给了循环体一个范围，让它在循环范围中判断这些数是否为完数。
  
  运用知识点：循环结构，选择结构
 */
/*
  类型三：用调用函数的方式来判断单个完数
  用调用函数的方法只是让主函数中的步骤减少，使程序运行速度加快。
  
  调用函数来判断是否为完数（完美数），定义了一个isPerfectNum()函数，通过返回值来判断是否为完数，返回1则为是，返回0则为否。
  
  运用知识点：自定义函数，选择结构，循环结构
 */
// #include <stdio.h>
// int isPerfectNum(int n)//判断n是否为完数，如果是，则返回1，否则返回0
// {
// 	int i,s=0;
// 	for(i=1;i<n;i++)//遍历小于n的整数
// 		if(n%i==0)//可以整除，为真因子
// 			s+=i;//累加每个真因子到s上 
// 	if(s==n)//如果符合完数条件，返回1
// 		return 1; 
// 	else //如果不是完数，返回0
// 		return 0;
// }
// int main()
// {
// 	int n;
// 	printf("请输入需要判断的数：");
// 	scanf("%d",&n);//输入n值
// 	if(isPerfectNum(n))//判断是否为完数，并输出结果。
// 		printf("%d 是完数\n",n);
// 	else
// 		printf("%d 不是完数\n", n);
// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>  // 添加此头文件以使用 malloc 函数

// 定义静态顺序表最大长度
#define MAXSIZE 100

// 定义动态顺序表初始默认的最大容量
#define InitSize 100

// 定义布尔类型
#define bool char
#define true 1
#define false 0

// 定义数据类型
typedef int Elemetype;

// 静态顺序表的数据元素结构体
typedef struct 
{
    int data[MAXSIZE];
    int length;
} SqList;

// 动态顺序表的数据元素结构体
typedef struct SeqList {
    Elemetype *data; // 动态数组指针
    int length; // 当前长度
    int maxsize; // 最大容量
} SeqList;

// 初始化静态顺序表
bool InitSqList(SqList *L) {
    L->length = 0;  // 初始化表长度
    return true;  // 初始化成功
}

// 初始化动态顺序表
bool InitSeqList(SeqList *L) {
    L->length = 0;  // 初始化表长度
    L->maxsize = InitSize;  // 初始化最大容量
    // 分配动态数组空间
    L->data = (Elemetype *)malloc(sizeof(Elemetype) * InitSize);
    if (L->data == NULL) {
        return false;  // 内存分配失败
    }
    return true;  // 初始化成功
}

// 输出静态顺序表
bool SqListPrint(SqList L) {
    if (L.length == 0) {
        printf("静态顺序表为空\n");
        return false;
    }
    printf("SqList:\n");
    for (int i = 0; i < L.length; ++i) {
        printf("%d-->", L.data[i]);
    }
    printf("end\n");
    return true;
}

// 输出动态顺序表
bool SeqListPrint(SeqList L) {
    if (L.length == 0) {
        printf("动态顺序表为空\n");
        return false;
    }
    printf("SeqList:\n");
    for (int i = 0; i < L.length; ++i) {
        printf("%d-->", L.data[i]);
    }
    printf("end\n");
    return true;
}

// 在静态顺序表中插入元素
bool SqListInsert(SqList *L,int i, Elemetype e){
    if (i<1 || i>L->length+1)  // 判断插入位置是否有效
    {
        printf("位置错误，无效值");
        return false;
    }
    else if (L->length >= MAXSIZE)  // 判断是否超出范围
    {
        printf("超出范围");
        return false;
    }
    for(int j = L->length; j >= i; j--){
        L->data[j] = L->data[j-1];  // 后移元素
    }
    L->data[i-1] = e;
    L->length++;
    return true;
}

// 在动态顺序表中插入元素
bool SeqListInsert(SeqList *L,int i, Elemetype e){
    if (i<1 || i>L->length+1)  // 判断插入位置是否有效
    {
        printf("位置错误，无效值");
        return false;
    }	
    else if (L->length >= L->maxsize)  // 判断是否超出范围
    {
        printf("超出范围");
        return false;
    }
    for(int j = L->length; j >= i; j--){
        L->data[j] = L->data[j-1];  // 后移元素
    }
    L->data[i-1] = e;
    L->length++;
    return true;
}

// 从动态顺序表中删除元素
bool SeqListDelete(SeqList *L, int i, Elemetype *e) {
    if (i < 1 || i > L->length) {
        printf("位置错误，无效值");
        return false;
    } else if (L->length <= 0) {
        printf("位置错误，无效值");
        return false;
    }
    *e = L->data[i - 1];
    for (int j = i; j < L->length; ++j) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
    return true;
}

// 从静态顺序表中删除元素
bool SqListDelete(SqList *L, int i, Elemetype *e) {
    if (i < 1 || i > L->length) {
        printf("位置错误，无效值");
        return false;
    } else if (L->length <= 0) {
        printf("位置错误，无效值");
        return false;
    }
    *e = L->data[i - 1];
    for (int j = i; j < L->length; ++j) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
    return true;
}

//查找
int SqListSeach(SqList L,Elemetype e){
	for (int i = 0; i < L.length; ++i)
	{
		if (L.data[i]==e)
		{
			return i+1;
		}
	}
	return 0;
}

int SeqListSeach(SeqList L,Elemetype e){
	for (int i = 0; i < L.length; ++i)
	{
		if (L.data[i]==e)
		{
			return i+1;
		}
	}
	return 0;
}


// 扩容
bool IncreaseSizeSqlist(SqList *L,int len){
	Elemetype *p=L->data;
	L->data=(Elemetype *)malloc(sizeof(Elemetype)*(L->maxsize+len));
	for (int i = 0; i < L->length; ++i)
	{
		L->data[i]=p[i]
	}
	L->maxsize+=len;
	free(p);

}
int main()
{
    SqList L1;
    SeqList L2;

    // 初始化静态顺序表
    InitSqList(&L1);
    // 初始化动态顺序表
    if (!InitSeqList(&L2)) {
        printf("初始化动态顺序表失败\n");
        return 1;
    }

    // 插入元素到静态顺序表
    SqListInsert(&L1, 1, 1);
    SqListInsert(&L1, 2, 3);
    SqListInsert(&L1, 3, 5);
    SqListInsert(&L1, 4, 7);
    // 插入元素到动态顺序表
    SeqListInsert(&L2, 1, 1);
    SeqListInsert(&L1, 2, 2);
    SeqListInsert(&L1, 3, 4);
    SeqListInsert(&L1, 4, 6);

    // 测试删除元素
    Elemetype e;
    SqListDelete(&L1, 1, &e);
    printf("Deleted element from SqList: %d\n", e);
    SeqListDelete(&L2, 1, &e);
    printf("Deleted element from SeqList: %d\n", e);

    SqListPrint(L1);
    SeqListPrint(L2);
    // 释放动态数组空间
    free(L2.data);

    return 0;
}