#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 定义栈结构
typedef struct {
	int capacity;  // 栈的最大容量
	int top;       // 栈顶指针
	int *data;     // 存储数据的数组
} Stack;

// 初始化栈
void initStack(Stack *stack, int capacity) {
	stack->capacity = capacity;
	stack->top = -1;
	stack->data = (int *)malloc(capacity * sizeof(int));
}

// 判断栈是否为空
bool isEmpty(Stack *stack) {
	return stack->top == -1;
}

// 判断栈是否已满
bool isFull(Stack *stack) {
	return stack->top == stack->capacity - 1;
}

// 入栈
void push(Stack *stack, int value) {
	if (isFull(stack)) {
		printf("Stack is full.\n");
		return;
	}
	stack->data[++stack->top] = value;
}

// 出栈
int pop(Stack *stack) {
	if (isEmpty(stack)) {
		printf("Stack is empty.\n");
		return -1;
	}
	return stack->data[stack->top--];
}

// 获取栈顶元素
int peek(Stack *stack) {
	if (isEmpty(stack)) {
		printf("Stack is empty.\n");
		return -1;
	}
	return stack->data[stack->top];
}

// 递归反转栈的函数
void reverseStack(Stack *stack);

// 将元素插入到栈的底部
void insertAtBottom(Stack *stack, int item);

// 递归反转栈
void reverseStack(Stack *stack) {
	if (!isEmpty(stack)) {
		int item = pop(stack);
		reverseStack(stack);
		insertAtBottom(stack, item);
	}
}

// 将元素插入到栈的底部
void insertAtBottom(Stack *stack, int item) {
	if (isEmpty(stack)) {
		push(stack, item);
	} else {
		int temp = pop(stack);
		insertAtBottom(stack, item);
		push(stack, temp);
	}
}

int main() {
	Stack stack;
	int capacity;

	printf("请输入数据总数:\n ");
	scanf("%d", &capacity);

	initStack(&stack, capacity);

	// 入栈测试数据
	printf("请输入数据:\n");
	for (int i = 0; i < capacity; i++) {
		int element;
		scanf("%d", &element);
		push(&stack, element);
	}

	printf("原始数据内容: \n");
	while (!isEmpty(&stack)) {
		printf("%d ", pop(&stack));
	}

	// 递归反转栈
	reverseStack(&stack);

	return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	int age;
	int height;
	double weight;

};//学生类型
typedef struct Node{
	Student stu;//数据域
	struct Node *LeftChild,*RightChild;	//指针域
}NODE;//结点类型
//初始化二叉树
NODE *CreateTree(NODE *tree){
	int tag=0;
	
}
int int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}