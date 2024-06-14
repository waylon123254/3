#include<stdio.h>
#include<stdlib.h>

// 定义元素类型别名，相当于整数类型
typedef int ElemType;

// 定义链表节点结构体
typedef struct LNode {
	// 节点数据，类型为 ElemType（即整数）
	ElemType data;
	// 指向下一个节点的指针
	struct LNode *next;
} LNode, *LinkList;
//next 是一个指向下一个节点的指针。同时，定义了一个类型别名 LinkList，它是一个指向 LNode 结构体的指针。

void CreateList(LinkList *L, int n) {
	// 创建链表头结点
	LNode *r, *p;
	*L = (LNode*)malloc(sizeof(LNode));
	(*L)->next = NULL;
	r = *L;
	printf("请输入各个元素中的值\n");
	// 创建n个结点，并将它们链接起来
	for (int i = 0; i < n; i++) {
		// 创建新的结点
		p = (LNode*)malloc(sizeof(LNode));
		// 初始化结点的数据域
		scanf("%d", &p->data);
		p->next = NULL;
		// 将新的结点链接到链表的末尾
		r->next = p;
		r = p;
	}
}

// 遍历链表
void TraverList(LinkList L) {
	// 声明一个指针p，用于遍历链表
	LNode *p;
	// 将p指向链表的第二个节点（头节点不包含在遍历中）
	p = L->next;
	// 遍历链表，直到p为空（即到达链表的末尾）
	while (p) {
		// 打印当前节点的数据
		printf("%d ", p->data);
		// 将p指向下一个节点
		p = p->next;
	}
	// 打印一个换行符，以便与下一行的输出分隔
	printf("\n");
}
/// 查找元素
int LocateELem(LinkList L, ElemType e){
	LNode *p;
	int j = 1; // initialize j to 1
	p = L->next;
	while(p && p->data != e){
		p = p->next;
		j++;
	}
	if(p){
		return j; // return the position of the element
	} else {
		return 0; // return 0 if the element is not found
	}
}
// 链表插入
int ListInsert(LinkList *L, int i, ElemType e){
	LNode *p;
	int j;
	p = *L;
	j = 0;
	while(p && j < i-1){
		p = p->next;
		j++;
	}
	if (!p || j > i-1) {
		return 0; // insertion position is out of range
	}
	LNode *newNode = (LNode*)malloc(sizeof(LNode));
	newNode->data = e;
	newNode->next = p->next;
	p->next = newNode;
	return 1; // insertion successful
}

int ListDelete(LinkList *L, int i) {
	LNode *p;
	int j;
	p =*L;
	j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!p || j > i - 1) {
		return 0; // deletion position is out of range
	}
	LNode *delNode = p->next;
	p->next = delNode->next;
	free(delNode);
	return 1; // deletion successful
}

void Menu(){
	printf("*************************");
	printf("欢迎使用链表");
	printf("***下面是操作提示信息****");
	printf("1.遍历链表\n");
	printf("2.创建链表\n");
	printf("3.")
}
int main() {
	LinkList L;
	int n;
	ElemType e;
	int choice;
	
	printf("请输入元素个数：\n");
	scanf("%d", &n);
	CreateList(&L, n);
	TraverList(L);
	
	printf("请选择操作：\n");
	printf("1. 查找元素\n");
	printf("2. 插入元素\n");
	printf("3. 删除元素\n");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1:
		printf("请输入要查找的元素：\n");
		scanf("%d", &e);
		if (LocateELem(L, e) != 0) {
			printf("元素 %d 在链表中的位置是 %d\n", e, LocateELem(L, e));
		} else {
			printf("元素 %d 不在链表中\n", e);
		}
		break;
	case 2:
		printf("请输入要插入的元素：\n");
		scanf("%d", &e);
		int i;
		printf("请输入要插入的位置：\n");
		scanf("%d", &i);
		if (ListInsert(&L, i, e) != 0) {
			printf("插入成功\n");
		} else {
			printf("插入失败\n");
		}
		break;
	case 3:
		printf("请输入要删除的元素位置：\n");
		scanf("%d", &i);
		if (ListDelete(&L, i) != 0) {
			printf("删除成功\n");
		} else {
			printf("删除失败\n");
		}
		break;
	default:
		printf("无效的选择\n");
		break;
	}
	
	TraverList(L);
	
	return 0;
}
