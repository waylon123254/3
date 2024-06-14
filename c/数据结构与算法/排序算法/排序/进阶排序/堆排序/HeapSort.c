#include<stdio.h>
//堆排序
void heapify(int arr[],int n,int i){
	int largrest =i;
	int leftson =i*2+1;
	int rightson =i*2+2;
	
	if(leftson<n&& arr[largrest]<arr[leftson]){
		//TODO
		largrest = leftson;
		
	}
	if(rightson<n&& arr[largrest]<arr[rightson]){
		//TODO
		largrest = rightson;
		
	}
	
	if(largrest=i){
		swa
	}
}
int main(){
	
}
