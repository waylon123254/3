//#include <stdio.h>




//
//int main() {
//	int a[10], x = 0, temp = 0;
//	printf("Input ten numbers\n");
//	for (; x < 10; x++) {
//		scanf("%d", &a[x]);
//
//		if (a[x] > a[x + 1]) {
//			temp = a[x + 1];
//			a[x + 1] = a[x];
//			a[x ] = temp;
//		} else {
//			temp = a[x];
//			a[x ] = a[x + 1];
//			a[x + 1] = temp;
//		}
//	}
//	for (x = 0; x < 10; x++) {
//		printf("%d", a[x]);
//	}
//}
//乘法口诀
//#include <stdio.h>
//int main() {
//	int x, y;
//	for (x = 1; x <= 9; x++) {
//		for (y = 1; y <= x; y++) {
//			printf("%d * %d =%2d\t", x, y, x * y);
//			if (x == y)//  判定换行的条��?
//				printf("\n");
//			//TODO
//		}
//		//TODO
//	}
//}
//斐波数字
//#include <stdio.h>
//int fib(int m)
//{
//	if(m>=3)
//	{
//		return fib(m-1)+fib(m-2);
//	}
//	else{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",fib(n));
//	return 0;
//}
//阶乘
//#include <stdio.h>
//int n0(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	return n0(n - 1 ) * n;
//}
//int main() {
//	int x;
//	scanf("%d", &x);
//	printf("%d", n0(x));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x;printf("请输出利润：");
//	scanf("%d",&x);
//	x=x/10;
//	switch () {
//	case 1:
//		//TODO
//		break;
//	case 2:
//		//TODO
//		break;
//	default:
//		//TODO
//		break;
//	}
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int x,y;
//	printf("请输入x和y的值：\n");
//	scanf("%d%d",&x,&y);
//	if(x<=0||y<=0){
//
//		printf("输入不符合要��?);
//	}else if(x==y){
//
//		printf("可以构建圆形或正方形");
//
//	}else if((fabs(x-y))>2&&((fabs(x-y)<=5))){
//
//		printf("可以构建椭圆");
//	}else if((fabs(x-y))>5){
//		printf("可以构建矩形")
//
//	}
//	if((fabs(x-y))>0&&((fabs(x-y)<=2))){
//
//		printf("可以构建长方��?);
//
//	}
//}
/*
#include <stdio.h>
//int main()
//{
//	int m,n;
//	for(m=1;m<10;m++)
//	{
//		printf("m的值为%d",m);
//		for(n=1;n<=m;n++)
//		{
//
//			printf("我是n的��?d",n);
//			//printf("%d*%d=%-2d",m,n,m*n);
//			//%-2d设置打印的格式采用左对齐使其打印比较整齐
//		}
//		printf("\n");
//	}
//
//}

//int main()
//{
//	for(int i=0;i<=10;i++){
//		//TODO
//		for(int j=0;j<=i;j++){
//			//TODO
//			printf("*");
//		}
//		printf("\n");
//	}
//}
int Prin(int n)
{
	for(int i=1;i<=n;i++){
		//TODO

//		for(int j=0;j<=i;j++){
//			//TODO
//			printf("*");
//		}
for(int j=0;j<=2*i-1;j++){
	//TODO
	printf("*");
}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("请输入你的层数：");
	scanf("%d",&n);
	Prin(n);
}
*/


//#include <stdio.h>
//void selection_sort(int a[], int len)
//{
//	int i,j,temp;
//
//	for (i = 0 ; i < len - 1 ; i++)
//	{
//		int min = i;                  // 记录最小值，第一个元素默认最��?
//		for (j = i + 1; j < len; j++)     // 访问未排序的元素
//		{
//			if (a[j] < a[min])    // 找到目前最小��?
//			{
//				min = j;    // 记录最小��?
//			}
//		}
//		if(min != i)
//		{
//			temp=a[min];  // 交换两个变量
//			a[min]=a[i];
//			a[i]=temp;
//		}
//		/* swap(&a[min], &a[i]);  */   // 使用自定义函数交��?
//	}
//}
//
//int main(){
//	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
//	int len = (int) sizeof(arr) / sizeof(*arr);
//	selection_sort(arr, len);
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

typedef struct {
	int id;
	char *name;
} ElementType;

typedef struct {
	ElementType data[MAX_SIZE];
	int length;
} SeqList;

void InitList(SeqList *seqList, ElementType *elementArray, int length);
void InsertElemt(SeqList *seqList, int index, ElementType element);
void PrintList(SeqList *seqList);



void InitList(SeqList *seqList, ElementType *elementArray, int length) {
	if (length > MAX_SIZE) {
		printf("�������������߽�\n");
		return;
	}

	for (int i = 0; i < length; i++) {
		InsertElemt(seqList, i, elementArray[i]);
	}
}

void InsertElemt(SeqList *seqList, int index, ElementType element) {
	if (seqList->length >= MAX_SIZE) {
		printf("�����Ѿ���\n");
		return;
	} else if (index < 0 || index > seqList->length) {
		printf("ֻ���������ķ�Χ�ڲ���Ԫ��\n");
		return;
	}

	for (int i = seqList->length - 1; i >= index; i--) {
		seqList->data[i + 1] = seqList->data[i];
	}

	seqList->data[index] = element;
	seqList->length++;
}

void PrintList(SeqList *seqList) {
	for (int i = 0; i < seqList->length; i++) {
		printf("%d\t%s\n", seqList->data[i].id, seqList->data[i].name);
	}
}

void TestSequenceList() {
	SeqList seqList;
	ElementType dataArray[] = {
		{1, "Element 1"},
		{2, "Element 2"},
		{3, "Element 3"}
	};

	InitList(&seqList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	PrintList(&seqList);
}

int main() {
	TestSequenceList();
	return 0;
};

