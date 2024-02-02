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
void InsertElement(SeqList *seqList, int index, ElementType element);
void PrintList(SeqList *seqList);

// 初始化顺序表
void InitList(SeqList *seqList, ElementType *elementArray, int length) {
    if (length > MAX_SIZE) {
        printf("数组长度超出范围\n");
        return;
    }

    for (int i = 0; i < length; i++) {
        InsertElement(seqList, i, elementArray[i]);
    }
}

// 插入元素到顺序表指定位置
void InsertElement(SeqList *seqList, int index, ElementType element) {
    if (seqList->length >= MAX_SIZE) {
        printf("顺序表已满\n");
        return;
    } else if (index < 0 || index > seqList->length) {
        printf("只能在有效范围内插入元素\n");
        return;
    }

    for (int i = seqList->length - 1; i >= index; i--) {
        seqList->data[i + 1] = seqList->data[i]; // 元素后移
    }

    seqList->data[index] = element;
    seqList->length++;
}

// 打印顺序表元素
void PrintList(SeqList *seqList) {
    for (int i = 0; i < seqList->length; i++) {
        printf("%d\t%s\n", seqList->data[i].id, seqList->data[i].name);
    }
}

// 测试顺序表
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
}