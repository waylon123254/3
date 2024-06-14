#include<stdio.h>
#include<stdlib.h>
/*
  5
  / \
  6   7
  / \
  9   10
  
  
 */
//二叉树的创建
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}Node;
//前序遍历
void PreorderTree(Node* node){
	if(node!=NULL){
		printf("%d ", node->data);
		PreorderTree(node->left);
		PreorderTree(node->right);
	}

}
//中序遍历
void PreorderMidTree(Node* node){
	if(node!=NULL){
		PreorderMidTree(node->left);
			printf("%d ", node->data);
		PreorderMidTree(node->right);
	}
}

//后序遍历
void PreorderAfterTree(Node* node){
	if(node!=NULL){
		PreorderAfterTree(node->right);
		printf("%d ", node->data);
		PreorderAfterTree(node->left);
	
	}
}

void PrintTree(Node* node, int indent) {
	if (node == NULL) return;
	for (int i = 0; i < indent; i++) {
		printf("  ");
	}
	printf("%d\n", node->data);
	PrintTree(node->left, indent + 1);
	PrintTree(node->right, indent + 1);
}

// 创建新节点的函数
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int main(){
	// 创建节点并分配内存
	Node *n1 = createNode(5);
	Node *n2 = createNode(6);
	Node *n3 = createNode(7);
	Node *n4 = createNode(9);
	Node *n5 = createNode(10);
	
	// 连接节点
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	
	// 遍历二叉树
	PrintTree(n1, 0);
	printf("\n");
	PreorderTree(n1);
	printf("\n");
	PreorderMidTree(n1);
	printf("\n");
	PreorderAfterTree(n1);
	printf("\n");
	// 释放内存
	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
	
	return 0;
}
