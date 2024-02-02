//#include"stdio.h"
//#include"string.h"
//#include "conio.h"
//#include "windows.h"
//
//void Youlechang()
//{
//	int P; //所收到的钱总数
//	char An[20],Y1[20]="guoshanche",Y2[20]="motianlun",Y3[20]="haidaochuan";
//	printf("请输入投入的钱是多少:\n");
//	scanf("%d",&P);
//	if(P!=10 && P!=20)
//	{
//		printf("只接受10元或20元，请重新投入！\n");
//		scanf("%d",&P);
//	}
//	printf("请按钮选择游玩项目:\n");
//	scanf("%s",An);
//	//gets(An);
//	while(strcmp(An,Y1)!=0 && strcmp(An,Y2)!=0 && strcmp(An,Y3)!=0)
//	{
//		printf("请不要瞎按，请按:%s",Y1);
//		printf("或者%s",Y2);
//		printf("或者%s\n",Y3);
//		scanf("%s",An);
//
//	}
//	if (P==10 )
//	{
//		if(strcmp(An,Y1)==0)
//
//		{ printf("请拿走您的:%s",Y1);
//			printf("门票!\n"); }
//		else if(strcmp(An,Y2)==0)
//
//		{ printf("请拿走您的:%s",Y2);
//			printf("门票!\n"); }
//		else
//		{ printf("请拿走您的:%s",Y3);
//			printf("门票!\n"); }
//
//	}
//
//	if (P==20 )
//	{
//		if(strcmp(An,Y1)==0)
//		{
//			printf("请拿走您的%s",Y1);
//			printf("门票并取走找零的10元钱！\n");
//		}
//		else if(strcmp(An,Y2)==0)
//		{
//			printf("请拿走您的%s",Y2);
//			printf("门票并取走找零的10元钱！\n");
//		}
//		else
//		{
//			printf("请拿走您的%s",Y3);
//			printf("门票并取走找零的10元钱！\n");
//		}
//
//	}
//}
//int main()
//{
//	Youlechang();
//	printf("******************************\n");
//	printf("请按回车继续:\n");
//	system("pause");
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b,c;
//	printf("请输入三个正整数：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if ((a >0) && (b >0) && (c >0))
//		if (a + b >= c && b + c >= a && a + c >= b)
//			if (a*a+c*c == b*b || b*b+a*a == c*c || c*c+b*b == a*a)
//				printf("直接三角形");
//	else
//		printf("一般三角形");
//	else
//		printf("非三角形");
//	else
//		printf("边的取值超出允许范围！");
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b,c;
//	printf("请输入三个正整数：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if ((a >0) && (b >0) && (c >0))
//		if (a + b >= c && b + c >= a && a + c >= b)
//			if (a*a+c*c == b*b || b*b+a*a == c*c || c*c+b*b == a*a)
//				printf("直接三角形");
//	else
//		printf("一般三角形");
//	else
//		printf("非三角形");
//	else
//		printf("边的取值超出允许范围！");
//}

//#include<stdio.h>
//int main() {
//	int a[10] = {1, 23, 32, 41, 41, 43, 54, 56,67,89};
//	int i, length, b;
//	length = sizeof(a) / sizeof(int);
//	printf("修改前：");
//	for ( i = 0; i <= length; i++) {
//		//TODO
//		printf("%-4d", a[i]);
//	}
//	printf("\n");
//	printf("input ：");
//	scanf("%d", &b);
//	
//	if(b>a[]){
//		//TODO
//	}
//
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[5]={8,6,4,2,0},temp,i,j;
//	int size=strlen(a);
//	printf()
//	for(int i=0;i<5/2;i++)
//	{
//
//	}
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int Status;
//
//#define OVERFLOW -2
//#define ERROR 0
//#define OK 1
//#define MAXSIZE 100
//
//typedef struct
//{
//	int *base;
//	int *top;
//	int stacksize;
//}SqStack;
//
///**栈的创建和初始化**/
//Status InitStack(SqStack *s)
//{
//	s->base=(int *)malloc(sizeof(int));
//	if(!s->base)
//		exit(OVERFLOW);
//	s->stacksize=MAXSIZE;
//	s->top=s->base;
//	return OK;
//}
//
///**入栈**/
//Status Push(SqStack *s,int e)
//{
//	if(s->top-s->base==s->stacksize)
//		return ERROR;//栈满
//	*(s->top)++=e;
//	return OK;
//}
//
///**出栈**/
//Status pop(SqStack *s,int *e)
//{
//	if(s->base==s->top)
//		return ERROR;
//	*e=*--s->top;
//	return OK;
//}
//
//
//int main()
//{
//	SqStack s,s1;
//	int a,i,b,c,d;
//	printf("创建栈\n");
//	if(!InitStack(&s))
//		printf("创建失败\n\n");
//	else printf("创建成功\n\n");
//	
//	printf("给栈内填充数据\n");
//	printf("输入栈内的数据个数:");
//	scanf("%d",&a);
//	printf("输入数据：\n");
//	for(i=0;i<a;i++)
//	{
//		scanf("%d",&b);
//		if(!Push(&s,b))
//			printf("栈满\n");
//	}
//	
//	/*printf("栈顺序输出为：\n");
//	  for(i=0;i<a;i++)
//	  {
//	  if(!pop(&s,&c))
//	  printf("栈空\n");
//	  else
//	  printf("%d ",c);
//	  }*/
//	
//	if(!InitStack(&s1))
//		printf("创建栈失败\n\n");
//	printf("栈按顺序输出为：\n");
//	for(i=0;i<a;i++)
//	{
//		if(!pop(&s,&d))
//			printf("栈空\n");
//		else
//		{
//			printf("%d ",d);
//			if(!Push(&s1,d))
//				printf("栈满\n\n");
//		}
//	}
//	printf("\n");
//	
//	printf("栈逆序输出为：\n");
//	for(i=0;i<a;i++)
//	{
//		if(!pop(&s1,&d))
//			printf("栈空\n");
//		else
//			printf("%d ",d);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include "stdio.h"
//
//#include "malloc.h"//malloc()函数被包含在malloc.h里面
//
//int main(void) {
//
//	char *a = NULL; //声明一个指向a的char*类型的指针
//
//	a = (char *)malloc(100 * sizeof(char)); //使用malloc分配内存的首地址，然后赋值给a
//
//	if (!a) //如果malloc失败，可以得到一些log
//
//	{
//		perror("malloc");
//		return -1;
//	}
//
//	sprintf(a, "%s", "HelloWorld\n"); //"HelloWorld\n"写入a指向的地址
//
//	printf("%s\n", a); //输出用户输入的数据
//
//	free(a);//释放掉使用的内存地址
//
//	return 0;//例2有无内存泄露？
//
//}
//#include<stdio.h>
//int main(){
//	int a,num=0;
//	scanf("%d",&a);
//	do{
//		//TODO
//		num=num*10+a%10;
//		a=a/10;
//	}while(a!=0);
//	printf("%d",num);
//	return 0;
//}
//#include <stdio.h>
//
//int sum(int m, int n);
//
//int main()
//{    
//	int m, n;
//	
//	scanf("%d %d", &m, &n);
//	printf("sum = %d\n", sum(m, n));
//	
//	return 0;
//}
//int sum(int m, int n){
//	if(m<n&&m>0){
//		//TODO
//	return m+n;
//	}else if(m<n&&m<0){
//		//TODO
//	}
//}
//#include <stdio.h>
//
//int sum(int m, int n)
//{
//	int i, result = 0;
//	for (i = m; i <= n; i++) {
//		result += i;
//	}
//	return result;
//}
//
//int main()
//{    
//	int m, n;
//	
//	scanf("%d %d", &m, &n);
//	printf("sum = %d\n", sum(m, n));
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char text[100];
//	int count = 0, sign = 0;
//	
//	fgets(text, sizeof(text), stdin); // 读取输入的字符串
//	
//	for (int i = 0; i < strlen(text); i++) {
//		if (text[i] != ' ') {
//			count++;
//		} else if (text[i] == ' ') {
//			if (count != 0) {
//				if (sign != 0) {
//					printf(" ");
//				}
//				printf("%d", count);
//				sign++;
//			}
//			count = 0;
//		}
//		if (count > 1) {
//			if (sign != 0) {
//				printf(" ");
//			}
//			printf("%d", count - 1);
//		}
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void calculateWordLength(char text[]) {
//	int len = strlen(text);
//	int wordLength = 0;
//	
//	for (int i = 0; i < len; i++) {
//		if (text[i] != ' ' && text[i] != '.') {
//			wordLength++;
//		} else if (wordLength > 0) {
//			printf("%d ", wordLength);
//			wordLength = 0;
//		}
//		
//		if (text[i] == '.') {
//			break;
//		}
//	}
//}
//
//int main() {
//	char text[100];
//	
//	printf("请输入文本（以“.”结束）：");
//	fgets(text, sizeof(text), stdin);
//	
//	printf("单词长度：");
//	calculateWordLength(text);
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int N, K, temp, count = 0; //扫描的次数为K。总个数为N
//	printf("扫描的次数为K。总个数为N\n");
//	scanf("%d%d", &N, &K);
//	int Bubble[200];
//	
//	if (K >= N || N > 200 || K <= 0 || N <= 0) { // 检测K和N的取值范围
//		printf("输入的K和N不符合要求，请重新输入\n");
//		return 0;
//	}
//	
//	for (int i = 0; i < N; i++) {
//		printf("Bubble\n");
//		scanf("%d", &Bubble[i]);
//	}
//	
//	for (int j = 0; j < K; j++) {
//		for (int i = 0; i < N - 1; i++) {
//			if (Bubble[i] > Bubble[i + 1]) {
//				temp = Bubble[i];
//				Bubble[i] = Bubble[i + 1];
//				Bubble[i + 1] = temp;
//			}
//		}
//	}
//	
//	for (int i = 0; i < N; i++) {
//		if (count != 0) {
//			printf(" ");
//		}
//		printf("%d", Bubble[i]);
//		count++;
//	}
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//	int a,b;//a为分子，b为分母；
//	scanf("%d/%d",&a,&b);
//	if(a<b){
//		//TODO
//	for(int i=a;i>0;i--){
//		//TODO
//		if(a%i==0&&b%i==0){
//			//TODO
//			printf("%d/%d",a/i,b/i);
//			break;
//		}
//	}
//	
//	}
//
//		//TODO
//		if(a%i==0&&b%i==0){
//			//TODO
//			printf("%d/%d",a/i,b/i);
//			break;
//		}
//	
//	
//
//}
//
//#include <stdio.h>
//
//// 求两个数的最大公约数（辗转相除法）
//int gcd(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	return gcd(b, a % b);
//}
//
//// 将分数表示成最简形式
//void simplifyFraction(int* numerator, int* denominator) {
//	int commonDivisor = gcd(*numerator, *denominator);
//	*numerator /= commonDivisor;
//	*denominator /= commonDivisor;
//}
//
//int main() {
//	int numerator, denominator;
//	
//	printf("请输入分子和分母：");
//	scanf("%d%d", &numerator, &denominator);
//	
//	simplifyFraction(&numerator, &denominator);
//	
//	printf("最简分式为：%d/%d\n", numerator, denominator);
//	
//	return 0;
//}
// #include<stdio.h>

// int main()
// {
// 	int data[5];
// 	printf("请输入数据：\n");
// 	int i,j;
// 	for(i = 0;i < 5;i ++)
// 	{
// 		scanf("%d",&data[i]);	//输入数据 
// 	}
	
// 	for(i = 0;i < 5;i ++)  //采用双重循环 
// 	{
// 		for(j = 0;j < 5 - 1 - i;j++)
// 		{
// 			if(data[j] > data[j+1])     //这里默认采用升序来排列 
// 			{
// 				int temp;        //定义一个临时值来存储数据，以此来达到交换数值的目的
// 				temp = data[j];
// 				data[j] = data[j+1];
// 				data[j+1] = temp;
// 			}	
// 		}
// 	}
	
// 	printf("排序好的数组为：\n");
// 	for(i = 0;i < 5;i ++)    //用for循环来遍历并输出排序完成的数组 
// 	{
// 		printf("%d ",data[i]);
// 	}
// 	return 0;
// }
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int age;
    int height;
    double weight;
} Student;  // 学生类型

typedef struct Node {
    Student stu;
    struct Node* next;
} Node;  // 单链表的结点类型

// 创建结点
Node* CreateNode(Student* stu) {
    // 申请内存空间
    Node* node = (Node*)malloc(sizeof(Node));
    // 判断是否申请内存空间成功
    if (!node) {
        printf("内存不足\n");
        return NULL;
    }
    // 拷贝学生信息到结点
    node->stu = *stu;
    node->next = NULL;
    return node;
}

// 输入学生信息函数
void InputValue(Student* stu) {
    if (!stu) return;
    printf("请输入学生的年龄、身高和体重：\n");
    scanf("%d%d%lf", &stu->age, &stu->height, &stu->weight);
}

// 创建链表函数
Node* CreateLink() {
    Student stu = {0, 0, 0};
    // 创建头结点
    Node* head = CreateNode(&stu);
    if (!head) exit(-1);
    // 创建其他结点，并连接到头结点构成链表
    int tag = 0;
    Node* pnew, * tail = head;
    printf("是否添加新结点，如果继续，请输入1，否则为0：\n");
    scanf("%d", &tag);
    while (tag != 0) {
        InputValue(&stu);
        pnew = CreateNode(&stu);
        tail->next = pnew;
        tail = pnew;
        printf("是否添加新结点，如果继续，请输入1，否则为0：\n");
        scanf("%d", &tag);
    }
    // 返回创建的链表头结点
    return head;
}

// 输出链表信息
void DisplayList(Node* head) {
    // 首先判断链表是否为空，如果为空则返回
    if (!head) return;
    // 打印链表中的每个学生信息
    Node* p = head->next;
    while (p != NULL) {
        printf("学生信息：年龄：%d，身高：%d，体重：%.2lf\n", p->stu.age, p->stu.height, p->stu.weight);
        p = p->next;
    }
}

// 销毁链表函数
void FreeLink(Node* head) {
    if (head == NULL) return;

    Node* p = head, * q;
    while (p != NULL) {
        q = p->next;
        free(p);
        p = q;
    }

    free(head);
}

void InsertNode(Node *head,Node *penw,int i){
	if(!head)return;
	if(!pnew)return;
	Node *p=head;
	int n=0;
	for (int i = 0; n<i&&p->next!=NULL; n++)
	{
		p=p->next;
	}
	pnew->next=p->next;
	p->next=pnew;

}
int main() {
    Node* head = CreateLink();
    DisplayList(head);
    FreeLink(head);
    return 0;
}
