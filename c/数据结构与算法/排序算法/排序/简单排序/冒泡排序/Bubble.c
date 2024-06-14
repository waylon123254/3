#include <stdio.h>
#include <stdlib.h>

void Print_Bubble_Sort(int arr[], int size); // 输出
void Bubble_Sort_Print(int* arr, int size); // 排序

int main() {
	int arr[] = {12, 5, 23, 6, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
		printf("i难道是v出现\n");
	system("chcp 65001"); // Move this line inside main()

	Print_Bubble_Sort(arr, size);
	Bubble_Sort_Print(arr, size);
	return 0;
}

void Print_Bubble_Sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d\t", arr[i]);
	}
	printf("\n");
}

void Bubble_Sort_Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		printf("%3d\t", arr[i]);
	}
	printf("\n");
}
