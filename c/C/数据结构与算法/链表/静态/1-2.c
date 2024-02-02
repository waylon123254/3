// #include <stdio.h>
// #include <stdlib.h>

// struct TreeNode
// {
//     char data;
//     struct TreeNode* LeftChild;
//     struct TreeNode* RightChild;
// };

// struct TreeNode* CreateTree(char data) {
//     struct TreeNode* NewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//     NewNode->data = data;
//     NewNode->LeftChild = NULL;
//     NewNode->RightChild = NULL;
//     return NewNode;
// }

// void InsertNode(struct TreeNode* CurNode, struct TreeNode* LeftChildTree, struct TreeNode* RightChildTree) {
//     CurNode->LeftChild = LeftChildTree;
//     CurNode->RightChild = RightChildTree;
// }

// void PrintNode(struct TreeNode* CurNode) {
//     printf("%c\n", CurNode->data);
// }

// int main(int argc, char const *argv[]) {
//     struct TreeNode* A = CreateTree('A');
//     struct TreeNode* B = CreateTree('B');
//     struct TreeNode* C = CreateTree('C');

//     InsertNode(A, B, C);

//     // 打印节点数据
//     PrintNode(A);
//     PrintNode(A->LeftChild);
//     PrintNode(A->RightChild);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
typedef struct Student
{
	int age;
	int height;
		double weight;
};
 int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}