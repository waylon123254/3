//#include <stdio.h>
//#include <windows.h>

//#include <math.h>
//
//int main() {
//	float x, y;
//	printf("Please input x and y:\n");
//	scanf("%f,%f", &x, &y);
//	printf("ans=%.2f\n", pow(x, 2.0) + pow(y, 2.0));
//	return 0;
//#include <stdio.h>
//int main(){
//	printf("成绩等级\n");
//	char rank;
//	scanf("%c",&rank);
//	if(rank<'Z'&&rank>'A'){
//		switch (rank) {
//		case 'A':
//			//TODO
//			printf("AAAAA");
//			break;
//		case 'B':
//
//			printf("AAAA");
//			//TODO
//			break;
//		case 'C':
//			printf("AAA");
//			break;
//		case 'D':
//			printf("AA");
//			break;
//		default:
//			//TODO
//			printf("A");
//			break;
//		}
//	}
//}
//
//#include <stdio.h>
//void Prt(int a) { //�ݹ麯��
//	if (a > 9)
//		Prt(a / 10);   //�������佫{}ʡ��
//	printf("%d ", a % 10);
//}
//int main() { //������
//	int a ;
//	scanf("%d", &a);
//	Prt(a);
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main() {
//	//打开文件
//	FILE *pf = fopen("D:\\microsoft visual stdio files\\C\\worktest.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));//用该函数打印错误信息
//		return 0;
//	}
//	//1.读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	long num, x, y = 0;
//	printf("请输入一个整数：");
//	scanf("%ld", &num);
//	x = num;
//	
//	while (x > 0) {
//		y = y * 10 + x % 10;
//		x = x / 10;
//	}
//	
//	if (num == y) {
//		printf("%ld 是一个回文数\n", num);
//	} else {
//		printf("%ld 不是一个回文数\n", num);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
///*最标准的定义方式*/
//struct Student{	  //结构体定义与变量声明分开
//	char snumber[16];
//	char sname[12];
//	char sclass[8];
//};
//
//int main(){
//	struct Student s1 = {"100001","张三","一班"};//声明结构体变量
//	printf("%s %s %s\n",s1.snumber,s1.sname,s1.sclass);//打印
//	return 0;
//}
//#include<stdio.h>
///*最不提倡用的定义方式*/
//struct{	  //结构体定义与变量声明一起，但没有结构体名称 
//	char snumber[16];
//	char sname[12];
//	char sclass[8];
//}s1 = {"100001","张三","一班"};//此结构体就只能用一次 
//
//int main(){
//	printf("%s %s %s\n",s1.snumber,s1.sname,s1.sclass);//打印
//	return 0;
//}
//#include<stdio.h>
///*一般不用的定义方式*/
//struct Student{	  //结构体定义与变量声明一起
//	char snumber[16];
//	char sname[12];
//	char sclass[8];
//}s1 = {"100001","张三","一班"}; //声明结构体变量s1
//
//int main(){
//	printf("%s %s %s\n",s1.snumber,s1.sname,s1.sclass);//打印 s1 
//	
//	struct Student s2 = {"100002","李四","二班"};//声明结构体变量s2
//	printf("%s %s %s",s2.snumber,s2.sname,s2.sclass);//打印 s2 
//	return 0;
////}
//#include<stdio.h>
//typedef int ZhengShu;//给 int 取个新名字 ZhengShu
//int main(){
//	ZhengShu a = 2;//声明整数变量
//	printf("%d",a); //打印
//	return 0;
//}
//结果输出为：2

//#include<stdio.h>
//struct Score{ //成绩结构体 
//	int Math;
//	int Chinese;
//	int English; 	
//}; 
//
///*Score结构体必须比Student先定义或声明*/
//struct Student{ //学生结构体 
//	char snumber[16];
//	char sname[12];
//	char sclass[8];
//	struct Score sscore;
//};
//
////用 typedef 给结构体取别名 
//typedef struct Student SStudent;
//typedef struct Score SScore; 
//
//int main(){
//	SScore score = {92,88,82};  //声明一个成绩结构体变量 
//	SStudent s1 = {"100001","张三","一班",score}; //声明学生一个结构体变量,并存入成绩 
//	printf("信息：%s %s %s\n 成绩：%d %d %d\n",s1.snumber,s1.sname,s1.sclass, //打印学生信息 
//		s1.sscore.Math,s1.sscore.Chinese,s1.sscore.English);		//打印成绩 
//	return 0;
//}

//#include<stdio.h>
///*一般很少用,了解定义结构就行了*/
//
//struct B;//结构体 B 必须有不完整声明 
//struct A{
//	struct B *p; //结构体 A 中有结构体 B 的指针 
//};
//
//struct B{
//	struct A *p; //结构体 B 中有结构体 A 的指针 
//};

//#include<stdio.h>
///*简单地创建使用链表*/
//struct Node{ //结构体中使用自身结构体 
//	int velue;
//	struct Node *next;//结构体指针 (struct可以省略)
//};
//#include<stdio.h>
///*指针的简单使用*/ 
//int main(){
//	int x = 6; 
//	int *p;	//一个整型指针
//	p = &x;
//	printf(" 整数的地址:%p\n p指针存储的地址:%p\n p指针自己的地址:%p",&x,p,&p); 
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
///*简单地创建使用链表*/
//struct Node {
//	int value;
//	struct Node* next;
//};
//
////用 typedef 给结构体取别名
//typedef struct Node* list;  //链表
//typedef struct Node Node_p; //节点
//
////创建链表
//list MakeList() {
//	Node_p* head = (Node_p*)malloc(sizeof(Node_p));
//	if (head == NULL) {
//		printf("内存不足！");
//		return NULL;
//	}
//	//头节点
//	head->value = 0;
//	head->next = NULL;
//	return (list)head;
//}
//
////判空
//bool IsEmpty(list L) {
//	return L->next == NULL;
//}
//
////插入
//void Insert(int x, list L) {
//	Node_p* temp, *p;
//	temp = L;
//	//到达尾节点处
//	while (temp->next != NULL) {
//		temp = temp->next;
//	}
//	//动态分配空间
//	p = (Node_p*)malloc(sizeof(Node_p));
//	if (p == NULL) {
//		printf("内存不足！");
//		return;
//	}
//	//插入节点
//	p->value = x;
//	p->next = NULL;
//	temp->next = p;
//}
//
////遍历
//void PrintAll(list L) {
//	Node_p* temp = L->next;
//	int i = 1;
//	while (temp != NULL) {
//		printf("第%d次=%d\n", i, temp->value);
//		temp = temp->next;
//		i++;
//	}
//}
//
////主函数
//int main() {
//	list L;
//	L = MakeList();
//	
//	//判断表是否为空
//	if (IsEmpty(L)) {
//		printf("此链表为空！\n");
//	}
//	
//	//添加元素
//	for (int i = 1; i <= 5; i++) {
//		Insert(i, L);
//	}
//	
//	//遍历（打印）
//	PrintAll(L);
//	
//	return 0;
//}

//#include <stdio.h>
//typedef struct Actress {
//	int height; // 身高
//	int weight; // 体重
//	int age;    // 年龄（注意，这不是数据库，不必一定存储生日）
//	
//	void (*desc)(struct Actress*);
//} Actress;
//
//void profile(Actress* obj) {
//	printf("height:%d weight:%d age:%d\n", obj->height, obj->weight, obj->age);
//}
//
//int main() {
//	Actress a;
//	a.height = 168;
//	a.weight = 50;
//	a.age = 20;
//	a.desc = profile;
//	
//	a.desc(&a);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int date;
	struct Node* next;
};
struct stack{
	struct Node* stackTop;
	int size;
}
struct stack* CreateStack(int data){

}
int main()
{
	

	struct Node * node4
	return 0;
}