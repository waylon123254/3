#define MAX_SIZE 1000

typedef struct{
	int id;
	char * name;
}ElementType;

typedef struct{
	ElementType datas[MAX_SIZE];
	int length;
}SeqList;
