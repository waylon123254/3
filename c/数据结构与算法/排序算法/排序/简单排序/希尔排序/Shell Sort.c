#include<stdio.h>

void Print_Shell_Sort(int arr[], int size); // 输出
void Shell_Sort_Print(int* arr, int size); // 希尔排序

int main() {
	int arr[] = {5, 2, 8, 6, 1, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("原始数组：");
	Print_Shell_Sort(arr, size);
	
	Shell_Sort_Print(arr, size);
	
	printf("排序后数组：");
	Print_Shell_Sort(arr, size);
	
	return 0;
}

void Print_Shell_Sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}

void Shell_Sort_Print(int* arr, int size) {
	for (int i = size / 2; i >= 1; i = i / 2) {
		for (int j = i; j < size; j++) {
			int temp = arr[j];
			int k = j;
			while (k - i >= 0 && arr[k - i] > temp) {
				arr[k] = arr[k - i];
				k -= i;
			}
			arr[k] = temp;
		}
	}
}
