#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "zh_CN.UTF-8"); // 设置locale为支持UTF-8的简体中文环境
	
	FILE *fp;
	char inputfile[100];
	printf("请输入文件名：");
	scanf("%s", inputfile);
	
	fp = fopen(inputfile, "r");
	if (fp == NULL) {
		printf("无法打开文件\n");
		return 1;
	}
	
	wchar_t line[100]; // 使用宽字符数组存储每行内容
	while (fgetws(line, 100, fp) != NULL) { // 使用fgetws读取宽字符（Unicode字符）
		wprintf(L"%ls", line); // 使用wprintf输出宽字符（Unicode字符）
	}
	
	fclose(fp); // 使用完文件后记得关闭
	
	return 0;
}
