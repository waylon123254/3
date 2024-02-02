//#include<string.h>
//#include<stdio.h>
//int main() {
//	char a[] = "nefdscs", temp;
//	int len, i = 0;
//	len = strlen(a);
//	printf("%d\n", len);
//	for (; i <= len / 2; i++) {
//		temp = a[i];
//		a[i] = a[len + 1 - i];
//		a[len + 1 - i] = a[i];
//	}
//printf("%s",a)
//}

//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[1000]={0};//养成一个编程习惯，让数组有内容
//	char tmp[1000]={0};
//	int i;
//	int t;
//	gets(str1);
//	t=strlen(str1);
////计算输入字符串的字符个数
//	for(i=0;i<t;i++)
//	{
//		tmp[i]=str1[t-1-i];//直接从后往前置换
//	}
//	puts(tmp);
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int sign=1;
//	double deno=1.0,temp=1.0,pi=0.0;
//	while((fabs(temp))>1e-6){
//		//TODO
//		pi=pi+temp;
//		deno=deno+2;sign=-sign;
//		temp=sign/deno;
//		
//	}
//	printf("%f",4*pi);
////}
//#include<stdio.h>
//void selection_sort(int arr[], int len);
//int main()
//{
//	int arr[10],len=0;
//	printf("亲输入数字个数:\n");
//	scanf("%d",&len);
//	printf("请输入数值：\n");
//	for(int i=0;i<10;i++){
//		//TODO
//		scanf("%d",&arr[i]);
//	}
//	selection_sort(arr[10],len);
//	return 0;
//	
//}
//void selection_sort(int arr[], int len) {
//	int i, j, min, temp;
//	for (i = 0; i < len - 1; i++) {
//		min = i;
//		for (j = i + 1; j < len; j++)
//			if (arr[min] > arr[j])
//				min = j;
//		temp = arr[min];
//		arr[min] = arr[i];
//		arr[i] = temp;
//	}
//}
/*选择排序算法*/
//#include<stdio.h>// 头文件 
//int main() // 主函数 
//{
//	int data[]={26,54,93,17,71,31,44,55,20}; // 定义一个数组 
//	int i,j,n=9; // 定义变量 
//	int min = 0;  // 定义最小值 
//	for(i=0;i<n-1;i++) // 外层循环 
//	{
//		min = i; // 外层每循环一次，将i的值赋给min 
//		for(j=i+1;j<n;j++)// 内层循环 
//		{
//			if(data[min]>data[j])
//			{
//				min = j;
//			}
//		}
//		int temp = data[min];  // 交换位置 
//		data[min] = data[i];
//		data[i] = temp;
//	}
//	printf("排序后的：");
//	for(i=0;i<n;i++) // 输出排序后的 
//	{
//		printf("%d ",data[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//定义普通变量
//	float a = 99.5, b = 10.6;
//	char c = '@', d = '#';
//	//定义指针变量
//	float *p1 = &a;
//	char *p2 = &c;
//	//修改指针变量的值
//	p1 = &b;
//	p2 = &d;
//printf("%x\n",&a);
//printf("%x\n",p1);
//printf("%x\n",&p2);
//	
//}
/*
#include<stdio.h>
int main () {
//	printf("sizeof(char)=%u\n",sizeof(char));
//	printf("sizeof(int)=%u\n",sizeof(int));
//	return 0;
char a = 5;        // char 类型占一个字节； 
char *b = &a;    // “&”是取变量的地址，取出a在内存中的地址；
// 赋值给b指针，此时b变量存储的就是a地址。
printf("我是a变量的值：%d\n",*b);        // *b表示输出b里面存储的地址上的数据； 
// 证明b上存储的是a的地址；
printf("我是a的地址：%p\n",&a);
printf("我是b变量的值：%p\n",b);
return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int a = 259;
	int * p1 = &a;
	char * p2 = (char *)&a; // 这里需要强制转换一下类型
	printf("*p1=%d,*p2=%d\n",*p1,*p2);
	printf("p1的地址：%p，p2的地址是：%p",p1,p2);
//	-----------------------
//	输出：*p1=259,*p2=3
}*/
//#include<stdio.h>
//int sum(int a){
//	int c =0;
//	static int b=3;
//	c+=1;
//	b+=2;
//	return (a+b+c);
//	
//}
//int main()
//{
//	int a=2;
//	for(int i=0;i<5;i++){
//		//TODO
//		printf("%2d ",sum(a));
//	}
//}

//#include<stdio.h>
//int main()
//{
//int a,b,c,max=0;
//if(a<b)
//{max=a;
//	a=b;
//	b=max;
//}
//	
//	if(a<c){
//	max=a;
//	a=c;
//	c=max;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=100;i++){
//		//TODO
//		if(i%3==0){
//			printf("%2d ",i);
//		}
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=20000;i++){
//		//TODO
//		if(((i%4==0)&&(i%100))||(i%400==0)){
//			//TODO
//			printf("%4d\n",i);
//		}
//	}
//}
/*int a;//a是需要计算个位十位百位的数字
  scanf("%d",&a);
  printf("%d",a%10);//输出个位数
  printf("%d",a/10%10);//输出十位数
  printf("%d",a/100%10);//输出个百位数
  
  本题的关键是输出素数，素数又叫质数，指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数，必须为正整数，1和0既非素数也非合数，所以在写判断素数的函数时
  
  第一步首先判断给的数是否大于2，若小于2，则直接判断为非素数，
  第二步则用一个for循环来对小于该数的各个数依次取余，若取余后等于0，则它不是素数，那么容易得出实现1，仔细想想可以发现，一个数去除以比它的一半还要大的数，一定是除不尽的，这用不着判断，所以要改进for循环中的循环控制语句，改为i < n/2 + 1，见实现2
  
  那么还可以再优化吗？答案是可以的，在数学上有个规律，对于一个小于n的整数x，若n不能整除x，则n必定不能整数n/x，那么带来一个明显的优化就是循环控制语句从2到 n \sqrt{n} n
  ​即可，因为在判断2的同时也判断了n/2，循环到 n \sqrt{n} n
  ​时，就把2到n-1都判断了，所以要改进for循环中的循环控制语句，改为i <= sqrt(n)，见实现3。
  
  3 实现
  3.1 实现1（常规暴力方法，效率低）
  
  int isPrime(int n) {
  if (n < 2) {
  return 0; // 0和1非素数，直接判断
  }
  for (int i = 2; i < n; i++) {
  if (n % i == 0) {
  return 0; // 依次取余，若除的尽，则不是素数
  }
  }
  return 1;
  
  int isPrime(int n) {
  if (n < 2) {
  return 0; // 0和1非素数，直接判断
  }
  for (int i = 2; i < n/2 + 1; i++) {
  if (n % i == 0) {
  return 0; // 依次取余，若除的尽，则不是素数
  }
  }
  return 1;
  }
  }
 */

//#include<stdio.h>
//#include<math.h>
//int isPrime(int i){
//	if(i<2){
////		printf("%d是非素数",i);		
//		return 0;
//	}
//	for(int a=2;a<=sqrt(i);a++){
//		if(i%a==0){
//			//TODO
////		printf("%d不是素数",i);
//		return 0;
//		}
//	
//		//TODO
//
//	}
//		return 1;
//}
//int main()
//{
//	for(int i=2;i<=100000;i++)
//	{
//		if(isPrime(i))
//		{
//		printf("%4d ",i);
//		}
//		}
//}

//#include<stdio.h>
//int main(){
//	int n = 123456;
//	int unitPlace = n / 1 % 10;
//	int tenPlace = n / 10 % 10;
//	int hundredPlace = n / 100 % 10;
//	int thousandPlace = n / 1000 % 10;
//	printf("个位:%d\n十位:%d\n百位:%d\n千位:%d\n", unitPlace, tenPlace, hundredPlace, thousandPlace);
//	
//	getchar();
//	return 0;
//}
/*1+1/2+1/3...........*/
//#include<stdio.h>
//int main(){
//double sum=0.0;
//for(int i=1;i<=100;i++){
//	//TODO
//	sum+=1.0/i;
//}
//printf("%lf\n",sum);
//}


//#include<stdio.h>
//int main(){
//	double sum=0.0;int flag=-1;
//	for(int i=1;i<=100;i++){
//		
//		//TODO
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//}
//#include<stdio.h>
//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max= arr[0];
//	int a=sizeof(arr)/sizeof(arr[0]);
//	for(int i=1;i<a;i++){
//	if(arr[i]>max){
//		//TODO
//		max=arr[i];
//	}
//}
//	printf("%d",max);
//	}
	
//#include<stdio.h>
//int main()
//
//{
//	for(int i=1;i<=10;i++){
//		//TODO
//		for(int j=1;j<=i;j++){
//			//TODO
//			printf("%4d*%4d=%4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20];
//	system ("shutdown -s -t 60");
//	again:
//		printf ("你的电脑将在60秒之后关机，如果输入我是猪，就取消关机。\n");
//		scanf ("%s",input);
//		if (strcmp(input,"我是猪") == 0 )
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//		return 0;
//}
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef struct Queue {
    int front;
    int rear;
    int data[MAXSIZE];
} Queue;

Queue* InitQueue() {
    Queue* Q = (Queue*)malloc(sizeof(Queue)); // 分配内存给队列
    Q->front = Q->rear = 0; // 初始化队首和队尾为0
    return Q;
}

int EnQueue(Queue* Q, int data) {
    if ((Q->rear + 1) % MAXSIZE == Q->front) { // 如果队列已满
        return 0; // 返回0表示入队失败
    } else {
        Q->data[Q->rear] = data; // 将数据放入队尾
        Q->rear = (Q->rear + 1) % MAXSIZE; // 更新队尾位置
        return 1; // 返回1表示入队成功
    }
}

int IsEmptyQueue(Queue* Q) {
    return Q->front == Q->rear; // 队列为空则返回1，否则返回0
}

int IsFullQueue(Queue* Q) {
    return (Q->rear + 1) % MAXSIZE == Q->front; // 队列满则返回1，否则返回0
}

int DeQueue(Queue* Q, int* data) {
    if (IsEmptyQueue(Q)) { // 如果队列为空
        return 0; // 返回0表示出队失败
    } else {
        *data = Q->data[Q->front]; // 获取队首数据
        Q->front = (Q->front + 1) % MAXSIZE; // 更新队首位置
        return 1; // 返回1表示出队成功
    }
}

void PrintQueue(Queue* Q) {
    int count = (Q->rear - Q->front + MAXSIZE) % MAXSIZE; // 计算队列中元素的个数
    int index = Q->front;
    for (int i = 0; i < count; ++i) {
        printf("%d ", Q->data[index]); // 输出队列中的元素
        index = (index + 1) % MAXSIZE; // 移动索引
    }
    printf("\n");
}

int main() {
    // 在这里进行队列操作的测试
Queue *Q =InitQueue();
for(int i=1;i<q;i++){
  EnQueue(Q,i)
}
    return 0;
}