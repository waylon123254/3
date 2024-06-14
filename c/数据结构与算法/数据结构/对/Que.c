#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
typedef int Data;
typedef struct Node{
	Data data;
	struct Node* next;
}DataQueue;

typedef struct Queue{
	int size;
	DataQueue* front;
	DataQueue* rear;
}LinkQueue;

LinkQueue* createLinkQueue() {
	LinkQueue* queue = (LinkQueue*)calloc(1, sizeof(LinkQueue));
	assert(queue != NULL);
	
	queue->size = 0;
	queue->front = NULL;
	queue->rear = NULL;
	
	return queue;
}
int main(){
	
}
