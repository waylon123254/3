//#include<stdio.h>
//int main() {
//	int arr[5] = {19, 30, 12, 13, 13, 10};
//	int temp = 0;
//	for (int i = arr.length - 1; i > 0; i--) { // 每次需要排序的长度
//		for (int j = 0; j < i; j++) { // 从第一个元素到第i个元素
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}//loop j
//	}//loop i
//}

//排序
//#include<stdio.h>	
//int main()
//{
//	int n[10] = { 25,35,68,79,21,13,98,7,16,62 };//定义一个大小为10的数组
//	int i, j, temp;
//	printf("排序过前的数顺序:\n");
//	for (i = 0; i < 10; i++)
//		printf("%-4d", n[i]);
//	printf("\n");
//	for (i = 1; i <= 9; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
//	{
//		for (j = 0; j <= 9 - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
//		{
//			if (n[j] > n[j + 1])//相邻两个数如果逆序，则交换位置
//			{
//				temp = n[j];
//				n[j] = n[j + 1];
//				n[j + 1] = temp;
//			}
//		}
//	}
//	printf("排序过后的数顺序:\n");
//	for (i = 0; i < 10; i++)
//		printf("%-4d", n[i]);
//	printf("\n");
//}

//#include<stdio.h>
//int main()
//{
//	// 字节对齐,为快速处理数据,内存是按32位读取写的,而不是一字节一字节地读写
//	// 结构体的首地址自动对齐至能被对齐字节数大小所整除。
//	// 结构体每个成员在结构体内的偏移地址都是成员大小的整数倍，否则, 在前方填充byte。
//	// 结构体的总大小为结构体对齐字节数大小的整数倍
//	
//	struct T1{
//		int   a;                  // 成员随意位置
//		char  b;
//		int   c;
//		short d;
//	}t1;
//	printf("%ld\t", sizeof(t1));     // 结果:16, 4+4+4+4
//		
//		struct T2{
//			int   a;                  // 合理安排成员位置
//			char  b;
//			short d;
//			int   c;
//		}t2;
//		printf("%ld\t", sizeof(t2));    // 结果:12, 4+4+4, 设计结构时，调整成员的位置，可节省存储空间。
//}

/*结构体*/
//#include <stdio.h>
//int main(){
//	struct{
//		char *name;  //姓名
//		int num;  //学号
//		int age;  //年龄
//		char group;  //所在小组
//		float score;  //成绩
//	} stu1;
//	
//	//给结构体成员赋值
//	stu1.name = "Tom";
//	stu1.num = 12;
//	stu1.age = 18;
//	stu1.group = 'A';
//	stu1.score = 136.5;
//	
//	//读取结构体成员的值
//	printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
//	
//	return 0;
//}
//#include <stdio.h>
//struct stu{ 
//	int num; 
//	char name[20];
//	char sex;
//};
//int main(int argc, char *argv[])
//{
//	struct stu bob={101,"bob",'m'}; struct stu lilei;
//	lilei=bob;
//	printf("%d %s %c\n",lilei.num,lilei.name,lilei.sex); return 0;
//}今天要发布的视频是用C语言实现判断奇偶性(函数篇)，我们知道，判断一个数为奇数还是偶数，是非常简单的，主要是根
//#include <stdio.h>
//
//int even( int n ){
//	if(n%2==0){
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{    
//	int n;
//	
//	scanf("%d", &n);
//	if (even(n))
//		printf("%d is even.\n", n);
//	else
//		printf("%d is odd.\n", n);
//	
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int m=1;
//	for(int i=9;i>0;i--){
//		//TODO
//		m=(m+1)*2;
//		
//	}
//	printf("%d",m);
//
//}
//#include<stdio.h>
//int main(){
//	int m=100;
//	for(int i=0;i<=10;i++){
//		//TODO
//		m=m/2;
//		if(m==0){
////			printf("%d",i);
//			break;
//			
//		}else
//			printf("%d",m);
//	}
//}
//#include <stdio.h>
//
//int main() {
//	int m = 100;
//	int total_distance = 100; // 初始高度为100米，所以总距离初始值为100
//	for (int i = 0; i < 10; i++) {
//		m = m / 2; // 每次落地反弹后的高度
//		total_distance += m * 2; // 加上下落和反弹的距离
//	}
//	
//	printf("第10次落地时，共经过%d米\n", total_distance);
//	printf("第10次反弹的高度为%d米\n", m);
//	
//	return 0;
//}
#include<stdio.h>

// 判断一个数是否为完数，打印出所有因子
void Number(int m) {
	int sum = 0;
	
	for (int i = 1; i <= m / 2; i++) {
		if (m % i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	
	if (sum == m) {
		printf("是完数\n");
	} else {
		printf("不是完数\n");
	}
}

// 找出100到n之间的所有完数
void just(int n) {
	for (int m = 100; m <= n; m++) {
		int sum = 0;
		
		for (int i = 1; i <= m / 2; i++) {
			if (m % i == 0) {
				sum += i;
			}
		}
		
		if (sum == m) {
			printf("%d ", m);
		}
	}
}

int main() {
	while (1) {
		printf("输入你的选项：\n");
		printf("1. 判断一个数是不是完数\n");
		printf("2. 寻找100到n之间的完数\n");
		
		int choice;
		scanf("%d", &choice);
		
		switch (choice) {
			case 1: {
				while (1) {
					int num;
					printf("请输入一个数字（输入0返回主页面）：");
					scanf("%d", &num);
					
					if (num == 0) {
						break;
					}
					
					Number(num);
				}
				break;
			}
			case 2: {
				while (getchar() != '\n'); // 清空输入缓冲区
				
				int num;
				printf("请输入一个数字（输入0返回主页面）：");
				scanf("%d", &num);
				
				if (num == 0) {
					break;
				}
				
				printf("完数：");
				just(num);
				printf("\n");
				break;
			}
		default:
			return 0;
		}
	}
	
	return 0;
}
