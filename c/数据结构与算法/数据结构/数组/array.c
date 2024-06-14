#include <stdio.h>

#define MAX_SIZE 100

int array[MAX_SIZE]={1,2,3,4,5};
int size = 5;

// 插入元素
void insertElement(int element, int position) {
	if (size >= MAX_SIZE) {
		printf("数组已满，无法插入新元素\n");
		return;
	}
	if (position < 0 || position > size) {
		printf("插入位置非法\n");
		return;
	}
	for (int i = size; i > position; i--) {
		array[i] = array[i-1];
	}
	array[position] = element;
	size++;
}

// 删除元素
void deleteElement(int position) {
	if (size <= 0) {
		printf("数组为空，无法删除元素\n");
		return;
	}
	if (position < 0 || position >= size) {
		printf("删除位置非法\n");
		return;
	}
	for (int i = position; i < size - 1; i++) {
		array[i] = array[i+1];
	}
	size--;
}

// 修改元素
void modifyElement(int element, int position) {
	if (position < 0 || position >= size) {
		printf("修改位置非法\n");
		return;
	}
	array[position] = element;
}

// 查找元素
int searchElement(int element) {
	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			return i;
		}
	}
	return -1; // 未找到
}

// 打印数组内容
void printArray() {
	if (size == 0) {
		printf("数组为空\n");
		return;
	}
	printf("当前数组：");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int choice, element, position, result;
	
	while (1) {
		printf("\n1. 插入元素\n2. 删除元素\n3. 修改元素\n4. 查找元素\n5. 显示数组\n6. 退出\n");
		printf("请输入您的选择：");
		scanf("%d", &choice);
		
		switch (choice) {
		case 1:
			printf("请输入要插入的元素和位置：");
			scanf("%d %d", &element, &position);
			insertElement(element, position);
			break;
		case 2:
			printf("请输入要删除的位置：");
			scanf("%d", &position);
			deleteElement(position);
			break;
		case 3:
			printf("请输入要修改的元素和位置：");
			scanf("%d %d", &element, &position);
			modifyElement(element, position);
			break;
		case 4:
			printf("请输入要查找的元素：");
			scanf("%d", &element);
			result = searchElement(element);
			if (result != -1) {
				printf("元素%d的索引为%d\n", element, result);
			} else {
				printf("未找到元素%d\n", element);
			}
			break;
		case 5:
			printArray();
			break;
		case 6:
			return 0;
		default:
			printf("无效的选择\n");
		}
	}
	
	return 0;
}
