#include<stdio.h>
#include<stdlib.h>
//二叉搜索树
typedef struct node {
	int data;
	struct node* LeftTree;
	struct node* RightTree;
} Node;

typedef struct {
	Node* root;
} Tree;
//队列的实现
typedef struct {
	Node* elements[1000];
	int front, rear;
} Queue;
//二叉树插入
void InsertTree(Tree* tree,int value){
	Node* node=malloc(sizeof(Node));
	node->data=value;
	node->LeftTree=NULL;
	node->RightTree=NULL;
	if(tree->root==NULL){//头为空的时候
		tree->root=node;
	}
	else{
		Node* temp=tree->root;
		while(temp !=NULL){
			if(value<temp->data){
				if(temp->LeftTree==NULL){
					temp->LeftTree=node;
					return; // 插入后退出函数
				}
				else{
					temp=temp->LeftTree;
				}
			}
			else{
				if(temp->RightTree==NULL){
					temp->RightTree=node;
					return; // 插入后退出函数
				}
				else{
					temp=temp->RightTree;
				}
			}
		}
	}
}
//前序遍历
void PreorderTree(Node* node){
	if(node!=NULL){
		printf("%d ", node->data);
		PreorderTree(node->LeftTree);
		PreorderTree(node->RightTree);
	}
	
}
//中序遍历
void PreorderMidTree(Node* node){
	if(node!=NULL){
		PreorderMidTree(node->LeftTree);
		printf("%d ", node->data);
		PreorderMidTree(node->RightTree);
	}
}

//后序遍历
void PreorderAfterTree(Node* node){
	if(node!=NULL){
		PreorderAfterTree(node->RightTree);
		printf("%d ", node->data);
		PreorderAfterTree(node->LeftTree);
		
	}
}

void PrintTree(Node* node, int indent) {
	if (node == NULL) return;
	for (int i = 0; i < indent; i++) {
		printf("  ");
	}
	printf("%d\n", node->data);
	PrintTree(node->LeftTree, indent + 1);
	PrintTree(node->RightTree, indent + 1);
}

void initQueue(Queue* queue) {
	queue->front = 0;
	queue->rear = -1;
	
}

int isEmpty(Queue* queue) {
	return (queue->rear < queue->front);
}

void enqueue(Queue* queue, Node* value) {
	queue->elements[++queue->rear] = value;
}

int size(Queue* queue) {
	return queue->rear - queue->front + 1;
}

Node* dequeue(Queue* queue) {
	return queue->elements[queue->front++];
}
// 分层遍历树的函数
void LevelOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	
	Queue queue;
	initQueue(&queue);
	enqueue(&queue, root);
	
	while (!isEmpty(&queue)) {
		int levelSize = size(&queue);
		for (int i = 0; i < levelSize; i++) {
			Node *current = dequeue(&queue);
			printf("%d ", current->data);
			if (current->LeftTree != NULL) {
				enqueue(&queue, current->LeftTree);
			}
			if (current->RightTree != NULL) {
				enqueue(&queue, current->RightTree);
			}
		}
		printf("\n");
	}
}

int main(){
	int arr[] = {10, 8, 7, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	Tree tree;
	tree.root = NULL;
	
	// 插入数组中的节点
	for (int i = 0; i < size; i++) {
		InsertTree(&tree, arr[i]);
	}
	
	int choice;
	do {
		printf("\n1. 先序遍历\n");
		printf("2. 中序遍历\n");
		printf("3. 后序遍历\n");
		printf("4. 打印树结构\n");
		printf("5. 退出\n");
		printf("请输入选项: ");
		scanf("%d", &choice);
		
		switch(choice) {
		case 1:
			printf("先序遍历结果:\n");
			PreorderTree(tree.root);
			printf("\n");
			break;
		case 2:
			printf("中序遍历结果:\n");
			PreorderMidTree(tree.root);
			printf("\n");
			break;
		case 3:
			printf("后序遍历结果:\n");
			PreorderAfterTree(tree.root);
			printf("\n");
			break;
		case 4:
			printf("树的结构:\n");
			PrintTree(tree.root, 0);
			break;
		case 5:
			printf("程序退出.\n");
			break;
		default:
			printf("无效的选项，请输入一个有效的选项。\n");
		}
	} while (choice != 5);
	
	return 0;
}
