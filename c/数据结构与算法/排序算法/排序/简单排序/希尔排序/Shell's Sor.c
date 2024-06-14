#include<stdio.h>

void Print_Arr(int arr[], int size);
void ShellSort(int* arr, int size);

int main(){
	int arr[] = {5, 2, 8, 3, 1, 6, 4};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	Print_Arr(arr, size);
	ShellSort(arr, size);
	Print_Arr(arr, size);
	
	return 0;
}

void Print_Arr(int arr[], int size){
	for(int left=0; left<size; left++){
		printf("%d ", arr[left]);
	}
	putchar('\n');
}

void ShellSort(int* arr, int size ){
	int mid, left, right, temp;
	
	for(mid = size / 2; mid > 0; mid /= 2){
		for(left = mid; left < size; left++){
			temp = arr[left];
			right = left - mid;
			while(right >= 0 && arr[right] > temp){
				arr[right + mid] = arr[right];
				right -= mid;
			}
			arr[right + mid] = temp;
		}
	}
}
