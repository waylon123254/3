#include<stdio.h>
#include<string.h>
#define MAX 100

//创建
typedef struct NodeType{
	int id;
	char name[MAX];
}NodeA;

//初始化
void InitNode(NodeA *p,int n){//p: 一个指向 NodeA 结构体的指针，表示要初始化的数组的起始地址。,n: 一个整数，表示要初始化的数组元素的个数
	for(int i=0;i<n;i++){
		p[i].id = 0;  // 初始化 id 成员为 0
		p[i].name[0] = '\0';  // 初始化 name 成员为空字符串,ASCII 码的空字符，表示字符串的结尾。
	}
}
//长度计算
int LengthNode(NodeA *p, int n) {
	int length = 0; // 初始化长度变量
	for (int i = 0; i < n; i++) { // 遍历数组
		if ((p+i)->id!= '\0' && strcasecmp((p+i)->name, "")!= 0) { // 检查 id 和 name 是否满足条件
			length++; // 如果满足条件，增加长度变量
		}
	}
	return length; // 返回长度变量
}

void InsertNode(NodeA *p,int n,NodeA *pInsert){
	int lenth=LengthNode(p,n);
	if(lenth==n){
		//TODO
	}else
	{
		(p+lenth)->id=pInsert->id;
		strcpy((p+lenth)->name,pInsert->name);
	}
}
int main(){
	
}
