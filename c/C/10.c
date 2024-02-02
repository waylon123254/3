//#include <stdio.h>

//
//int main() {
//	char c = 8;
//	int  i = 32;+
//	printf("%ld\n", sizeof(c    ));  // 结果:1, 因为char就是1字节
//	printf("%ld\n", sizeof(c + i  )); // 结果:4, i��?字节, 运算时c值被隐式转换成int, 运算值是4字节
//	printf("%ld\n", sizeof(c = c + i)); // 结果:1, 等同��?c), 编译��? 因为=不被执行, ����?的右边只是个��?
//}

//#include <stdio.h>
//
//int main() {
//	// 小心, char��?a'在被=动作��? 是两个独立类��? 没关��?
//	char c = 'a';
//	printf("%ld", sizeof(c));      // 结果:1, char类型��?字节
//	printf("%ld", sizeof('a'));    // C结果:4，C++结果:1
//		// C99的标准，    'a'是整型字符常量，常量!常量!常量!被看成是int型， ��以占4字节��?
//		// ISO C++的标准，'a'是字符字面量  ，被看成是char型，��以占1字节��?
//
//}

//#include <stdio.h>
//
////ð�������㷨
//void bubbleSort(int *arr, int n) {
//	for (int i = 0; i < n - 1; i++)
//		for (int j = 0; j < n - i - 1; j++) {
//			//����ǰ�������Ⱥ����󣬽��н���
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//}
//
//int main() {
//	int arr[] = { 10, 6, 5, 2, 3, 8, 7, 4, 9, 1 };
//	int n = sizeof(arr) / sizeof(int);
//	bubbleSort(arr, n);
//	printf("������������Ϊ��\n");
//	for (int j = 0; j < n; j++)
//		printf("%d ", arr[j]);
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,r,temp;
//	printf("��������������");
//	scanf("%d%d",&a,&b);
//	if(a<b){
//		//TODO
//		temp=a;
//		a=b;
//		b=temp;
//
//	}
//	r=a%b;
//	while(r!=0){
//		a=b;
//		b=r;
//		r=a%b;
//	}
//	printf("%d",b);
//}
//#include<stdio.h>
//int main()
//{
//	int a,b,n;
//	printf("�������֣�\n")
//	scanf("%d%d",&a,&b);
//	if(a<b){
//		n=a;
//		a=b;
//		b=n;
//		//TODO
//	}
//	while(b!=0){
//		//TODO
//		n=a;
//		a=b;
//		n=a%b;
//		
//	}
//	printf("%d",b);
//}

/*����*/
//#include<stdio.h>
//int main()
//{
//	int m,j,s=0;
//	for(m=2;m<=10000;m++){
//		//TODO
//		for(j=1;j<m;j++){
//			//TODO
//			if(m%j==0){
//				//TODO
//			s=s+j;
//			}
//			if(s==m){
//				printf("%d\n",m);
//			}
//			if(m%j==0){
//				//TODO
//				printf("%d",j);
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
///*�ṹ��*/
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//} Node;
//
//Node* InitLine(Node* list, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = list->next;
//	list->next = node;
//	list->data++;
//	return list;
//}
//
//void TailInsert(Node* list, int data) {
//	Node* head = list;
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = NULL;
//	list = head;
//	while (list->next) {
//		list = list->next;
//	}
//	list->next = node;
//	head->data++;
//}
//
//void HeadInsert(Node* list, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = list->next;
//	list->next = node;
//	list->data++;
//}
//
//void Delete(Node* list, int data) {
//	Node* pre = list;
//	Node* current = list->next;
//	
//	while (current) {
//		if (current->data == data) {
//			pre->next = current->next;
//			free(current);
//			break;
//		}
//		pre = current;
//		current = current->next;
//	}
//	list->data--;
//}
//
//void PrintList(Node* list) {
//	if (list->data == 0) {
//		printf("链表为空。\n");
//		return;
//	}
//	
//	list = list->next;
//	while (list) {
//		printf("%d ", list->data);
//		list = list->next;
//	}
//	printf("\n");
//}
//
//int main() {
//	Node* list = (Node*)malloc(sizeof(Node));
//	list->data = 0;
//	list->next = NULL;
//	
//	int choice, data;
//	
//	while (1) {
//		printf("\n选择操作：\n");
//		printf("1. 头部插入\n");
//		printf("2. 尾部插入\n");
//		printf("3. 删除节点\n");
//		printf("4. 打印链表\n");
//		printf("5. 退出\n");
//		printf("输入你的选择：");
//		scanf("%d", &choice);
//		
//		switch (choice) {
//		case 1:
//			printf("输入要插入的数据：");
//			scanf("%d", &data);
//			HeadInsert(list, data);
//			printf("已插入节点到链表头部。\n");
//			break;
//		case 2:
//			printf("输入要插入的数据：");
//			scanf("%d", &data);
//			TailInsert(list, data);
//			printf("已插入节点到链表尾部。\n");
//			break;
//		case 3:
//			printf("输入要删除的数据：");
//			scanf("%d", &data);
//			Delete(list, data);
//			break;
//		case 4:
//			printf("链表内容：");
//			PrintList(list);
//			break;
//		case 5:
//			printf("程序已退出。\n");
//			exit(0);
//		default:
//			printf("无效的选择，请重新输入。\n");
//		}
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node{
//	int data;
//	struct Node* next;
//	
//} Node;
//Node*InitList(){
//	Node* Long=(Node*)malloc(sizeof(Node));
//	Long->next=Long;
//	Long->data=0;
//	return Long;
//	
//}
//
//void HeadInsert(Node* Long,int data){
//	Node* node=(Node*)malloc(sizeof(Node));
//	node->data= data;
//	node->next=Long->next;
//	Long->next=node;
//}
//void PrintList(Node* Long){
//	Node* node=Long->next;
//	node->data= data;
//	node->next=list->next;
//}
//int main(){
//	
//}
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef struct Stack
{
    int data[MAXSIZE];
    int top;
} Stack;

// 初始化栈
void InitStack(struct Stack *stack)
{
    stack->top = -1;
}

// 清空栈，这里修改为返回int类型
int EmptyStack(struct Stack *stack)
{
    return (stack->top == -1) ? 1 : 0;
}

// 栈满判断，这里修改为返回int类型
int FullStack(struct Stack *stack)
{
    return (stack->top == MAXSIZE - 1) ? 1 : 0;
}

// 入栈操作，这里修改为返回int类型
int PushStack(struct Stack *stack, int value)
{
    if (FullStack(stack))
    {
        return 0; // 栈满，入栈失败
    }
    stack->data[++stack->top] = value;
    return 1; // 入栈成功
}

// 出栈操作，这里修改为返回int类型
int PopStack(struct Stack *stack, int *revalue)
{
    if (EmptyStack(stack))
    {
        return 0; // 栈空，出栈失败
    }
    *revalue = stack->data[stack->top--];
    return 1; // 出栈成功
}

// 读栈操作，这里修改为返回int类型
int GetStack(struct Stack *stack, int *revalue)
{
    if (EmptyStack(stack))
    {
        return 0; // 栈空，读栈失败
    }
    *revalue = stack->data[stack->top];
    return 1; // 读栈成功
}

void PrintStack(struct Stack *stack)
{
    if (EmptyStack(stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = stack->top; i >= 0; i--)
        {
            printf("%d ", stack->data[i]);
        }
        printf("\n");
    }
}

int main()
{
    Stack stack;
    int n;

    InitStack(&stack); // 初始化栈

    // 进行入栈和出栈操作，这里需要根据具体需求编写代码
    // 示例：
    PushStack(&stack, 1);
    PushStack(&stack, 2);
    PushStack(&stack, 3);
    PrintStack(&stack); // 打印栈内元素
    PopStack(&stack, &n);
    PrintStack(&stack); // 打印栈内元素

    return 0;
}
