#include<stdio.h>
void Print_Bubble_Sort(int arr[],int size);//输出
void Straight_Insertion_Sort(int* arr,int size);//插入排序
int main(){
	int arr[]={8,5,7,2,1,4,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	Print_Bubble_Sort(arr,size);
	Straight_Insertion_Sort(arr,size);
}

void Print_Bubble_Sort(int arr[],int size){
	for(int i=0;i<size;i++){
		//TODO
		printf("%3d\t",arr[i]);
	}
	printf("\n");
}

void Straight_Insertion_Sort(int* arr,int size)
{
	for (int i = 1; i < size; i++) {
		int current = arr[i];
		int j;
		for (j = i - 1; j >= 0 && arr[j] > current; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = current;
	}
	
	for (int i = 0; i < size; i++) {
		printf("%3d\t", arr[i]);
	}
	printf("\n");
}
