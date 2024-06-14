#include<stdio.h>
void Selection_Sort_Print(int* arr,int size);
void Print_Selection_Sort(int arr[],int size);

int main()
{
	int arr[]={12,5,23,6,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	Print_Selection_Sort(arr,size);
	Selection_Sort_Print(arr,size);
	Print_Selection_Sort(arr,size);
	
}

void Print_Selection_Sort(int arr[],int size){
	for (int i = 0; i < size; i++) {
		printf("%3d", arr[i]); // 打印数组元素，宽度为3
	}
	printf("\n"); // 换行
}

void Selection_Sort_Print(int arr[],int size){
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				// Swap the elements
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}	
}
