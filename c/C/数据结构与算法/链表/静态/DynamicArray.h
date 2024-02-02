#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

// 在这里可以包含所需的标准库头文件
#include <stdio.h>
#include <stdlib.h>


// 定义动态数组结构体
typedef struct {
    int *array; // 指向数组的指针或者地址
    int size;   // 数组当前的元素个数
    int capacity; // 数组的容量
} DynamicArray;

// 函数声明
DynamicArray* createDynamicArray(int initialCapacity);
void freeDynamicArray(DynamicArray *dynArray);
void append(DynamicArray *dynArray, int value);
int get(DynamicArray *dynArray, int index);
void set(DynamicArray *dynArray, int index, int value);
// 其他函数声明...

#endif /* DYNAMICARRAY_H */