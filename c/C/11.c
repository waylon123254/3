//#include <stdio.h>



//
//
//#include <math.h>
//
//void DoWork(int x, int y, int z) {
//	int k = 0, j = 0;
//	if ((x > 3) && (z < 10)) {
//		k = x * y - 1;
//		j = sqrt(k);
//	}
//	if ((x == 4) && (y < 5))
//		j = x * y + 10;
//	j = j % 3;
//	printf("j=%d\n", j);
//}
//
//int main() {
//	int a, b, c;
//	printf("ÇëÊäÈëÈý¸öÕûÊý£º\n");
//	scanf("%d%d%d", &a, &b, &c);
//	DoWork(a, b, c);
//}
////
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int x, y, z;
////printf("ÇëÊäÈëÈý¸öÊý£º");
////scanf("%d%d%d",&x,&y,&z);
////	int k = 0, j = 0;
////	if((x > 3) && (z < 10)) {
////		k = x * y - 1;
////		j = sqrt(k);
////	}
////	if((x == 4) || (y > 5)){
////		j = x * y + 10;
////		j = j % 3;
////	}
////	printf("j=%d",j);
////}

//#include <stdio.h>
//#include <string.h>
//int get_length(char str[]);
//
//int main() {
//	char str[] = "abcd";
//	int count1 = sizeof(str);
//	int count2 = strlen(str);
//	int count3 = get_length(str);
//	printf("use sizeof the length is %d\n", count1);
//	printf("use strlen the length is %d\n", count2);
//	printf("use get_length the length is %d\n", count3);
//	return 0;
//}
//
//int get_length(char str[]) {
//	char *p = str;
//	int count = 0;
//	while (*p++ != '\0') {
//		count++;
//	}
//	return count;
//}

//Èý½Ç
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	int a[10][10]={};
//	for(i=1;i<=10;i++){
//		//TODO
//		for( j=0;j<=i;j++){
//			if(i==j){
//				a[i][j]=1;
//			}
//			else
//			{
//
//			}
//			printf("%-4d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char c1 = {'c','c', 'c'};
//	char c2 = "bfvdps";
//	printf("%d%d",sizeof(c1),sizeof(c2));
//
//}

//#include <stdio.h>
//int main(){
//	char str[15];
//	scanf("%s",str);
//	printf("%s",str);
//
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//	int day, mounth, year;
//	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	printf("ÇëÊäÈëÄêÔÂÈÕ");
//	scanf("%d%d%d",&year,&mounth,&day);
//
//}
/*
  ×î´ó¹«Ô¼Êý£ºÖ¸Ä³¼¸¸öÕûÊý¹²ÓÐÔ¼ÊýÖÐ×î´óµÄÒ»¸ö

  ·½·¨Ò»£ºÏà¼õ·¨ Ò²½Ð¸üÏà¼õËð·¨

  Ë¼Â·£º

  1¡¢Èç¹ûa > b a = a - b;

  2¡¢Èç¹ûb > a b = b - a;

  3¡¢¼ÙÈça = b,Ôò a»ò bÊÇ×î´ó¹«Ô¼Êý£»

  4¡¢Èç¹ûa != b;Ôò¼ÌÐø´ÓÒ»¿ªÊ¼Ö´ÐÐ£»

  5¡¢Ò²¾ÍÊÇËµÑ­»·µÄÅÐ¶ÏÌõ¼þÎªa != b,Ö±µ½a = bÊ±£¬Ñ­»·½áÊø¡£
 */

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("ÊäÈëÁ½¸öÊýÇó×î´ó¹«Ô¼Êý£º");
//	scanf("%d%d",&a,&b);
//	while(a!=b)
//	{
//		if(a>b)
//			a = a - b;
//		if(a<b)
//			b = b - a;
//	}
//	printf("%d\n",a);
//	return 0;
//}

/*
  ·½·¨¶þ
  Ë¼Â·£º

  1.Ñ¡³öa£¬bÖÐ×îÐ¡µÄÒ»¸öÊý×Ö·Åµ½cÖÐ
  2.·Ö±ðÓÃa£¬b¶ÔcÇóÓàÊý£¬¼´¿´ÊÇ·ñÄÜ±»cÕû³ý
  3.Ö±µ½a£¬bÍ¬Ê±¶¼ÄÜ±»cÕû³ý
  4.Èç²»ÄÜÕû³ý£¬c¨C (cµÄÖµ¼õÒ») ¼ÌÐø´Ó2¿ªÊ¼Ö´ÐÐ
  5.Ò²¾ÍÊÇËµ¸ÃÑ­»·µÄÅÐ¶ÏÌõ¼þÎª a£¬bÄÜ·ñÍ¬Ê±±»cÕû³ý£¬Ö»ÒªÓÐÒ»¸öÊý²»ÄÜ±»cÕû³ý£¬Ñ­»·¼ÌÐøÖ´ÐÐ

  ¾ÙÀýËµÃ÷£º

  a = 9 b = 4
  ½«ÆäÖÐ×îÐ¡µÄÊý×Ö¸³Óèc
  c = 4
  a%c = 1 ,b%c = 0 a,b²»ÄÜÍ¬Ê±±»cÕû³ý Ñ­»·¼ÌÐø
  c¨C £¬c = 3
  a%c = 0 ,b%c = 1 a,b²»ÄÜÍ¬Ê±±»cÕû³ý Ñ­»·¼ÌÐø
  c¨C £¬c = 2
  a%c = 1 ,b%c = 0 a,b²»ÄÜÍ¬Ê±±»cÕû³ý Ñ­»·¼ÌÐø
  c¨C £¬c = 1
  a%c = 0 ,b%c = 0 a,bÍ¬Ê±±»cÕû³ý Ñ­»·½áÊø cÊÇaºÍbµÄ×î´ó¹«Ô¼Êý
 */

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while(1)
//	{   printf("ÊäÈëÁ½¸öÊýÇó×î´ó¹«Ô¼Êý£º");
//		scanf("%d%d",&a,&b);
//		c = (a>b)?b:a;     //ÈýÄ¿ÔËËã·û
//		while((a%c != 0) || (b%c != 0))
//		{
//			c--;
//		}
//		printf("×î´ó¹«Ô¼ÊýÎª£º %d \n",c);
//	}
//	return 0;
//}

/*
  ·½·¨Èý£ºÕ·×ªÏà³ý·¨

  Ë¼Â·£º
  1.½«Á½ÕûÊýÇóÓà a%b = c
  2.Èç¹ûc = 0;ÔòbÎª×î´ó¹«Ô¼Êý
  3.Èç¹ûc != 0,Ôò a = b£»b = c£»¼ÌÐø´Ó1¿ªÊ¼Ö´ÐÐ
  4.Ò²¾ÍÊÇËµ¸ÃÑ­»·µÄÊÇ·ñ¼ÌÐøµÄÅÐ¶ÏÌõ¼þ¾ÍÊÇcÊÇ·ñÎª0

  ¾ÙÀýËµÃ÷£º

  a = 21 b = 28

  c = a%b = 21%28 = 21£¬ Ôòc = 21 ´ËÊ±c²»Îª0
  Ö´ÐÐ a = b £¬ b = c £¬ a = 28 £¬b = 21

  c = a%b = 28%21 = 7 £¬Ôòc = 7 ´ËÊ±c²»Îª0
  Ö´ÐÐ a = b £¬ b = c £¬ a = 21 , b = 7

  c = a%b = 21%47 = 0 £¬Ôòc = 0 Ñ­»·½áÊø

 */

//#include <stdio.h>
//int main() {
//	int a, b, c, temp=0;
//	printf("Ç×ÊäÈëÈý¸öÊý£º\n");
//	scanf("%d%d%d", &a, &b, &c);
//	while(1){
//		//TODO
//		temp = (a > b) ? a:b;
//		if(c>temp)
//			printf("%d",c);
//		else
//				printf("%d",temp);
//		return 0;
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("ÇëÊäÈëa:");
//	scanf("%d",&a);
//		if(a<1){
//			printf("aµÄÖµÎª£º",a);
//		}
//
//		else if(a>1||a<10)
//			printf("aµÄÖµÎª£º",2*a-1);
//		else
//			printf("aµÄÖµÎª£º",a*3-11);
//		return 0;
//
//}
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int s=1;
//	double deno=1.0,term=1.0,pi=0.0;
//	while((fabs(term))>=1e-6){
//		//TODO
//		pi=pi+term;
//		deno=deno+2;
//
//	}
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//	int a;
//	float k;
//	printf("ÇëÊäÈëÊý×Ö\n");
//	scanf("%d", &a);
//	while(a<=1000){
//
//		k=sqrt(a);
//		printf("%f",k);
//		break;
//	}
//	return 0;
//
//}
//
//#include <stdio.h>
//#define M 5
//
//int binSearch(int array[], int key) {
//	int mid, low, high, length;
//	low = 0;
//	high = M - 1;
//	while (low < high) {
//		mid = (low + high) / 2;
//		if (key == array[mid])
//			return mid;
//		else if (key < array[mid])
//			high = mid - 1;
//		else
//			low = mid + 1;
//	}
//	return -1;
//}
//
//void main() {
//	int n, i = 0, j, arr[M];
//	printf("Çë·Ö±ðÊäÈë¸÷¸öÊý×éÔªËØµÄÖµ:");
//	while (i < M) {
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	printf("ÇëÊäÈëÒª²éÕÒµÄÖµ£º");
//	scanf("%d", &n);
//	j = binSearch(arr, n);
//	if (j == -1)
//		printf("ÕÒ²»µ½");
//	else
//		printf("ÒªÕÒµÄÊý¾ÝÏîÏÂ±ê=%d\n", j);
//}

//#include <stdio.h>
//int Count(int i);
//
//int main() {
//	int a, t = 0;
//	printf("ÇëËæ±ãÊäÈë£º");
//	scanf("%d", &a);
//	t = Count(a);
//	printf("%d", t);
//	return 0;
//
//}
//
//int Count(int i) { //ÇóÎ»Êýº¯Êý
//	int count = 0;
//	if (i == 0)
//		count = 1;
//	else
//		while (i != 0) {
//			i /= 10;
//			count++;
//		}
//
//	return count;
//}



//#include<stdio.h>
//int mmain()
//{
//	int i=1,j=1;
//	for(;i<=10;i++){
//		for(;j<=10;j++){
//			//TODO
//			printf("%d",i*j);
//		}
//	}
//	return 0;
//}
/*
  ÓÃ¸üÏà¼õËðÊõÇó98Óë63µÄ×î´ó¹«Ô¼Êý¡£
  
  ½â£ºÓÉÓÚ63²»ÊÇÅ¼Êý£¬°Ñ98ºÍ63ÒÔ´óÊý¼õÐ¡Êý£¬²¢Õ·×ªÏà¼õ£º
  
  98-63=35
  
  63-35=28
  
  35-28=7
  
  28-7=21
  
  21-7=14
  
  14-7=7
  
  ËùÒÔ£¬98ºÍ63µÄ×î´ó¹«Ô¼ÊýµÈÓÚ7¡£
  
  ÓÃ¸üÏà¼õËðÊõÇó260ºÍ104µÄ×î´ó¹«Ô¼Êý¡£
  
  ½â£ºÓÉÓÚ260ºÍ104¾ùÎªÅ¼Êý£¬Ê×ÏÈÓÃ2Ô¼¼òµÃµ½130ºÍ52£¬ÔÙÓÃ2Ô¼¼òµÃµ½65ºÍ26¡£
  
  ´ËÊ±65ÊÇÆæÊý¶ø26²»ÊÇÆæÊý£¬¹Ê°Ñ65ºÍ26Õ·×ªÏà¼õ£º
  
  65-26=39
  
  39-26=13
  
  26-13=13
  
  ËùÒÔ£¬260Óë104µÄ×î´ó¹«Ô¼ÊýµÈÓÚ13³ËÒÔµÚÒ»²½ÖÐÔ¼µôµÄÁ½¸ö2£¬¼´1322=52¡£
 */

//#include<stdio.h>

//static int count = 0;
//int main()
//{
//	int a, b;
//	printf("ÊäÈëaºÍb:");
//	scanf("%d%d",&a,&b);
//	
//	int temp;
//	//ÈÎÒâ¸ø¶¨Á½¸öÕýÕûÊý£»ÅÐ¶ÏËüÃÇÊÇ·ñ¶¼ÊÇÅ¼Êý¡£
//	if (a % 2 == 0 && b % 2 == 0 && !count)
//	{
//		//ÈôÊÇ£¬ÔòÓÃ2Ô¼¼ò£»Èô²»ÊÇÔòÖ´ÐÐµÚ¶þ²½¡£
//		a /= 2;
//		b /= 2;
//		//±£´æÔ¼µôµÄÈô¸É¸ö2´ÎÊý
//		count += 2;
//	}
//	//ÒÔ½Ï´óµÄÊý¼õ½ÏÐ¡µÄÊý£¬aÖÐ±£´æ´óÊý
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	//½Ó×Å°ÑËùµÃµÄ²îÓë½ÏÐ¡µÄÊý±È½Ï£¬²¢ÒÔ´óÊý¼õÐ¡Êý
//	if (a - b != 0)
//	{
//		//µÝ¹éÇó½â
//		return gcd3(b, a - b);
//	}
//	else
//	{
//		//¼ÆËãÍê±ÏÍêºócountÒªÖÃÎª0£¬·ÀÖ¹µÚ¶þ´Îµ÷ÓÃÊ±³ö´í£»
//		//ËùÒÔÐèÒªÌáÇ°¶¨Òå³£Á¿±£´æÊä³ö½á¹û£ºÔ¼µôµÄÈô¸É¸ö2µÄ»ýÓëµÚ¶þ²½ÖÐµÈÊýµÄ³Ë»ý¾ÍÊÇËùÇóµÄ×î´ó¹«Ô¼Êý¡£
//		int result = count * b;
//		//ÖÃ0
//		count = 0;
//		return result;
//	}
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int m, n,temp,i;
//	printf("ÇëÊäÈëmºÍn");
//	scanf("%d", &m);
//	scanf("%d", &n);
//	
//	if (m>n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	
//	for (i = m; i >= 1;i--)
//		if (m%i==0 && n%i==0)
//			break;
//	
//	printf("%d\n", i);
//	
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int gcd(int a, int b)
//{
//	int mod;
//	if ((mod = a % b) == 0)
//		return b;
//	return gcd(b, mod);
//}
//
//int main()
//{
//	int m, n,ret;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	
//	ret = gcd(m, n);
//	printf("%d", ret);
//	
//	system("pause");
//	return 0;
//}
/*
  ¸øÒ»¸öÕûÊý£ºÒªÇó£¨1£©ÇóËüµÄÎ»Êý£»£¨2£©Êä³öÃ¿Ò»Î»Êý×Ö£»£¨3£©°´ÄæÐòÊä³ö¸÷Î»Êý×Ö
 */
//#include<stdio.h>
//#include<math.h>
//int Count(int i)  //ÇóÎ»Êýº¯Êý
//{
//	int count=0;
//	if(i==0)
//		count=1;
//	else
//		while(i!=0)
//	{i/=10;
//		count++;
//	}
//	
//	return count;
//}
//
//void  Put(int i) //
//{  printf("¸÷Î»ÊýÎª£º");
//	int n=Count(i)-1;
//	int x=pow(10.0,n);
//	if(i==0)
//	{   printf("%d",i);
//		return;
//	}
//	else if(i<0)
//	{
//		printf("-");
//		i=-i;
//		Put(i);
//	}
//	else
//		while(i!=0)
//	{   
//		printf("%d ",i/x);
//		i%= x;
//		x/=10;
//	}
//	printf("\n");
//	
//}
//void Reverse(int i)
//{
//	printf("ÄæÐòÊä³öÎª£º");
//	if(i==0)
//	{ printf("%d",i);
//		return;}
//	else if(i<0)
//	{printf("-");
//		i=-i;
//		Reverse(i); }
//	else
//		while(i!=0)
//	{
//		printf("%d ",i%10);
//		i/=10;
//	}
//	printf("\n");
//	
//	
//}
//
//
//
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	
//Õ»µÄÀûÓÃ
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[10],i,j;
//	int temp=0;
//	printf("input ten number");
//	for(i=0;i<=10;i++){
//		scanf("%d",&a[i]);
//		printf("\n");
//	printf("µÚ%d¸öÊýÎª%d",i,a[i]);
//	
//	for( i=0;i<=9;i++){
//		for(j=0;j<=9-1;j++){
//			//TODO
//		}
//		//TODO
//	}
//	}
//}

#include <stdio.h>
#include <stdlib.h>

// 定义布尔类型以及true和false
#define bool char
#define true 1
#define false 0

#define MAXSIZE 100
typedef int Elemtype;

// 定义顺序栈结构体
typedef struct SqStack
{
  Elemtype data[MAXSIZE]; // 数据存储数组
  int top; // 栈顶指针
} SqStack;

// 初始化栈
bool InitStack(SqStack *s)
{
  s->top = -1; // 将栈顶指针置为-1，表示空栈
  return true; // 返回true表示初始化成功
}

bool StackEmpty(SqStack s){
  if (s.top==-1)
  {
    /* code */
  }else
}
int main(int argc, char const *argv[])
{
  SqStack s; // 声明一个顺序栈变量
  if (InitStack(&s)) // 调用初始化栈函数进行初始化
  {
    printf("Stack initialized successfully.\n");
  }
  else
  {
    printf("Failed to initialize stack.\n");
  }
  return 0;
}

