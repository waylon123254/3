#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* CreateLink(){
    // 创建一个新节点并返回指针
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->next = NULL;
    return p;
}

void InsertNode(struct Node* head, int data){
    // 在链表末尾插入一个新节点
    struct Node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    // 创建新节点
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    // 插入新节点
    p->next = newNode;
}

void PrintNode(struct Node* head){
    // 打印链表中的节点数据
    struct Node* p = head->next;
    while(p != NULL){
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    // 创建链表头节点
    struct Node* head = CreateLink();
    
    // 插入节点数据
    InsertNode(head, 1);
    InsertNode(head, 2);
    InsertNode(head, 3);
    
    // 打印节点数据
    PrintNode(head);
    
    return 0;
}