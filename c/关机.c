#include <stdio.h>
#include <stdlib.h>

int main() {
	char choice;
	int time;
	
	printf("是否关机？(Y/N): ");
	scanf(" %c", &choice);
	
	if (choice == 'Y' || choice == 'y') {
		char unit;
		printf("请输入时间单位，分钟(M)或秒(S)或小时(H): ");
		scanf(" %c", &unit);
		
		char command[100];  // 定义一个足够大的字符数组来存储命令字符串
		if (unit == 'M' || unit == 'm') {
			printf("请输入关机时间(分钟): ");
			scanf("%d", &time);
			sprintf(command, "shutdown -s -t %d", time*60);  // 构建命令字符串
			system(command);  // 执行命令
		} else if (unit == 'S' || unit == 's') {
			printf("请输入关机时间(秒): ");
			scanf("%d", &time);
			sprintf(command, "shutdown -s -t %d", time);  // 构建命令字符串
			system(command);  // 执行命令
		} else if (unit == 'H' || unit == 'h') {
			printf("请输入关机时间(小时): ");
			scanf("%d", &time);
			sprintf(command, "shutdown -s -t %d", time*3600);  // 构建命令字符串
			system(command);  // 执行命令
		} else {
			printf("输入无效的时间单位！\n");
		}
	}
	
	return 0;
}
