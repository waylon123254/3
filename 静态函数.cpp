//#include<iostream>
//using namespace std;
//class Bese {
//		int YourVar;
//	public:
//		int m_a;
//	protected:
//		int m_v;
//	private:
//		int m_y;
//};
//class Son: public Bese {
//	public:
//		void fun() {
//			m_a = 10;
//			m_v = 10;
//			cout<<m_a<<"		"<<m_v<<endl;
//		}
//};
//void test() {
//	Son s;
//	s.m_a = 12;
//	s.fun();
//}
//int main() {
//	test();
//	return 0;
//}
//#include <iostream>
//
//int main() {
//	int rows;
//	
//	std::cout << "请输入行数：";
//	std::cin >> rows;
//	
//	for (int i = 1; i <= rows; i++) {
//		// 打印空格
//		for (int j = 1; j <= rows - i; j++) {
//			std::cout << " ";
//		}
//		
//		// 打印星号
//		for (int k = 1; k <= i * 2 - 1; k++) {
//			std::cout << "*";
//		}
//		
//		std::cout << std::endl;
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//
//#define    NR    10   // 输入整数的个数
//
//int main(void)
//{
//	int ar[NR];
//	int i, j;
//	
//	fprintf(stdout, "请输入10个整数：\n");
//	
//	/* 获取10个元素 */
//	while (1)
//	{
//		for (i = 0; i < NR; i++)
//		{
//			if (fscanf(stdin, "%d", &ar[i]) != 1)
//			{
//				fprintf(stderr, "输入错误！请重新输入：\n");
//				break;
//			}
//		}
//		
//		/* 不足十个元素 */
//		if (i != NR)                   
//		{
//			while (getchar() != '\n'); // 去掉回车符
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//	
//	/* 查找重复元素 */
//	fprintf(stdout,"存在重复元素的值为：");
//	
//	for (i = 0; i < NR; i++)
//	{
//		for (j = 0; j < NR; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			if (ar[i] == ar[j])/* 出现重复元素但不知道有无打印过 */
//			{
//				if (i < j)
//				{
//					fprintf(stdout, "%d ", ar[i]);
//				}
//				break;        /* 避免重复打印 */
//			}
//		}
//	}
//	fputc('\n', stdout);
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		//TODO
//	if(i%2==0)
//		//TODO
//		break;
//	else
//		cout<<i<<endl;
//	}
//}
//#include <iostream>
//using namespace std;
//
//void printNumbers(int n) {
//	int count = 0; // 计数器，用于控制每行输出的个数
//	for (int i = 1; i <= n; i++) {
//		int lastDigit = i % 10; // 获取个位数
//		if (lastDigit == 1 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7) {
//			cout << i << " ";
//			count++;
//			if (count == 11) { // 每行输出 11 个数字
//				cout << endl;
//				count = 0; // 重置计数器
//			}
//		}
//	}
//	if (count != 0) {
//		cout << endl; // 处理最后一行少于 11 个数字的情况
//	}
//}
//
//int main() {
//	int n;
//	cout << "请输入 n 的值：";
//	cin >> n;
//	
//	printNumbers(n);
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for (int i = 1; i <= n; i++) {
//		int lastDigit = i % 10; // 获取个位数
//		if (lastDigit == 2|| lastDigit == 4 || lastDigit == 8||lastDigit == 0) {
//			cout << i << endl;
//		}
//	}
//}
//#include<iostream>
//#include<string>
//using namespace std;
////通过结构体创建变量的方式有三种
////1、struct结构体名 变量名
////2、struct 结构体名 变量名={成员值1，成员值2，...}
////3、定义结构体时顺便定义变量
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct Student2
//{
//	string name;
//	int age;
//	int score;
//}s3;
//int main() {
//	//第一种
//	Student s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 99;
//	cout << "name=" << s1.name << "  age=" << s1.age << "  score=" << s1.score << endl;
//	//第二种
//	Student s2 = {"王二",18,97};
//	cout << "name=" << s2.name << "  age=" << s2.age << "  score=" << s2.score << endl;
//	//第三种
//	s3.name = "王二";
//	s3.age = 17;
//	s3.score = 78;
//	cout << "name=" << s3.name << "  age=" << s3.age << "  score=" << s3.score << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
////结构体数组
////1、定义结构体 
//struct  student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	//2、创建结构体数组
//	struct student stuarr[3] = {
//		{"张三",18,100},
//		{"李四",17,90},
//		{"王二",16,80}
//	};
//	//3、给结构体数组中的元素赋值
//	stuarr[2].name = "李三";
//	stuarr[2].age = 17;
//	stuarr[2].score = 10;
//	//4、遍历结构体数组
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名:" << stuarr[i].name << "\t年龄：" << stuarr[i].age << "\t分数:" << stuarr[i].score << endl;
//		
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
////结构体数组
//struct  student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	//1、创建学生结构体变量
//	student s1 = { "李四",19,90 };
//	//2、通过指针指向结构体变量
//	student *p = &s1;
//	//3、通过指针访问结构体变量中的数据
//	cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score<<endl;
//	//通过结构体指针 访问结构体中的属性，需要利用“->”
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
struct Student{
	string Sname;
	int score;
};
struct Teacher{
	string Tname;
	struct Student SArray[5];
};
void AllocateSpace(struct Teacher TArray[],int len){
	string NameSeed="ABCDEF";
	for(int i=0;i<len;i++){
		//TODO
		TArray[i].Tname="Teacher";
		TArray[i].Tname+=NameSeed[i];
		for(int j=0;j<5;j++){
			//TODO
			TArray[i].SArray[j].Sname="Student";
			TArray[i].SArray[j].Sname+=name;
			int random=rand()%61+40;
		}
	}
}
int main(){

}
