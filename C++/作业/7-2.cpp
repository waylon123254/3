#include <iostream>
#include <cstring>>

struct Person {           //声明结构体
	char name[20];
	int count;

} leader[3] = {"li", 0, "zhang", 0, "sun", 0}; //定义结构体数组并初值化
int main() {
	int i, j;
	char leader_name[20];     //定义字符数组
	printf("请输入候选人名字：li,zhang,sun\n");
	for (i = 0; i < 10; i++) {
		scanf("%s", leader_name);  //选民输入候选人名字
		for (j = 0; j < 3; j++) {
			if (strcmp(leader_name, leader[j].name) == 0) //如果名字对应，则该名字加1
				leader[j].count++;
		}
	}
	printf("\n最终投票结果为：\n");
	for (i = 0; i < 3; i++) {
		printf("%13s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}