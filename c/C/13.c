//#include <stdio.h>

//#define ROOT
//
//int main(void) {
//	FILE *fp;
//	fp = fopen("D:\\microsoft visual stdio files\\C\\test.c", "workw+"); // ´´½¨ÃûÎªtest.cÎÄ¼þ,"w+"¸ÃÎÄ¼þ¿É¶Á¿ÉÐ´
//
//	fprintf(fp, "%s", "123445679 \n");
//
//
//	return 1;
/*
ÅÐ¶ÏÊÇ·ñÎªµ¥´ÊµÄÒÀ¾Ý£¬Í¨¹ýÒ»¸öflag±êÊ¶£¬flagÎª0±íÊ¾×Ö·ûÎª¿Õ¸ñ£¬½ÓÏÂÀ´³öÏÖ²»ÊÇ¿Õ¸ñ£¬»á½«flagÖÃÎª1

Ö»ÓÐµ±flagÎª1ÇÒµ±Ç°×Ö·û²»Îª¿Õ¸ñ£¬²Å»áËã×÷Ò»¸öµ¥¶Àµ¥´Ê£¬±£Ö¤Á¬Ðø¶à¸ö×Ö·ûÎªÒ»¸öµ¥´Ê¡£
*/
//#include <stdio.h>
//
//int main() {
//	//¶¨ÒåÒ»¸östring×Ö·ûÊý×éÀ´½ÓÊÕÊäÈëµÄ×Ö·û´®
//	//¶¨ÒåÒ»¸öc×Ö·ûÓÃÀ´±È½Ïµ±Ç°×Ö·ûÊÇ·ñÊÇ¿Õ¸ñ
//	char string[100], c;
//	//countÓÃÀ´Í³¼Æµ¥´Ê¸öÊý£¬
//	// Ê¹ÓÃflagÀ´±êÊ¶ÈçºÎÎªÒ»¸öÐÂµÄµ¥´Ê£¬ÎªÒ»¸öÐÂµ¥´ÊµÄ±ê×¼ÊÇÇ°ÃæµÄÒ»¸ö×Ö·ûÎª¿Õ¸ñ£¬ÇÒ³õÊ¼ÖµÎª0
//	int i, count = 0, flag = 0;
//	gets(string);//ÊäÈëÒ»¸ö×Ö·û´®¸ø×Ö·ûÊý×éstring
//	for (i = 0; (c = string[i]) != '\0'; i++) {
//		if (c == ' ') { //Èç¹ûÊÇ¿Õ¸ñ×Ö·û£¬Ê¹wordÖÃ0
//			flag = 0;
//		} else if (flag == 0) { //Èç¹û²»ÊÇ¿Õ¸ñ×Ö·û£¬ÇÒflagÔ­À´µÄÖµÎª0£¬¼´Ç°ÃæÊÇ¿Õ¸ñ£¬Ê¹flagÖÃ1
//			flag = 1;
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
///*CÓïÑÔ-ÊäÈëÒ»ÐÐ×Ö·û´®£¨µ¥´ÊºÍÈô¸É¿Õ¸ñ£©£¬Êä³ö¸ÃÐÐµ¥´Ê£¨Ã¿¸öµ¥´ÊÒ»ÐÐ£©
//*/
//#include <stdio.h>
//#include <stdlib.h>
//enum {sign, word};
//int main() {
//	int c, pre_input = sign; //±íÊ¾Ö®Ç°µÄÊä³ö×´Ì¬
//	int en = 0; //enÊÇ0 ±íÊ¾Ã»Êä³ö¹ý×ÖÄ¸
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {
//			if (en == 0)
//				continue;
//			if (pre_input == word) {	//Ö»ÒªÊä³ö¹ý×ÖÄ¸ ¾Í¿ÉÒÔ»»ÐÐ
//				putchar('\n');
//				pre_input = sign;
//			}
//		} else {
//			en++;
//			if (pre_input == sign) {
//				//Ö®Ç°Êä³ö»»ÐÐ ¾ÍÔÚÊý×ÖÄ¸µÄÍ¬Ê±°Ñ×´Ì¬¸ÄÎªword
//				putchar(c);
//				pre_input = word;
//			} else { //Ö®Ç°Êä³öµÄÊÇ×ÖÄ¸ ¾ÍÖ±½ÓÊä³ö
//				putchar(c);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int Sum_and_Unmber(int m) {
//	int temp = 0;
//	while (1) {
//		if (m > 1){
//			printf("ÇëÊäÈëÕýÈ·µÄÊý×Ö£º\n");
//			// Çå¿ÕÊäÈë»º³åÇø
//			while (getchar() != '\n') {}
//			scanf("%d", &m);
//		} else {
//			break;
//		}
//	}
//	
//	for (int i = 1; i <= m; i++) {
//		printf("%2d ", i);
//		temp += i;
//	}
//	printf("\n×ÜºÍÎª£º%d\n", temp);
//	
//	return temp;
//}
//
//int main() {
//	int m;
//	printf("ÇëÊäÈëÄãµÄÊý×Ö£º\n");
//	scanf("%d", &m);
//	Sum_and_Unmber(m);
//	
//	return 0;
////}
//
//#include <stdio.h>
//#include <math.h>
//#define MAX 100
//
//double fun(int n, double a[], double x);
//
//int main() {
//	int n;
//	double a[MAX], x;
//	scanf("%d %lf", &n, &x);
//	for (int i = 0; i <= n; i++) {
//		scanf("%lf", &a[i]);
//	}
//	printf("%.lf", fun(n, a, x));
//	
//	return 0;
//}
//
//double fun(int n, double a[], double x) {
//	double sum = 0;
//	for (int i = 0; i <= n; i++) {
//		sum += a[i] * pow(x, i);
//	}
//	return sum;
//}
//
//#include <stdio.h>
//#include <math.h>
//#define MAX 100
//
//double evaluatePolynomial(int n, double a[], double x);
//
//int main() {
//	int n;
//	printf("ÇëÊäÈë¶àÏîÊ½µÄ½×Êý£º");
//	scanf("%d", &n);
//	
//	double a[MAX], x;
//	printf("ÇëÊäÈë¶àÏîÊ½µÄÏµÊý£¨´ÓµÍ½×µ½¸ß½×£©£º");
//	for (int i = 0; i <= n; i++) {
//		scanf("%lf", &a[i]);
//	}
//	
//	printf("ÇëÊäÈëÎ´ÖªÊýµÄÖµ£º");
//	scanf("%lf", &x);
//	
//	double result = evaluatePolynomial(n, a, x);
//	printf("¶àÏîÊ½µÄÇóÖµ½á¹ûÎª£º%lf\n", result);
//	
//	return 0;
//}
//
//double evaluatePolynomial(int n, double a[], double x) {
//	double sum = 0;
//	for (int i = 0; i <= n; i++) {
//		sum += a[i] * pow(x, i);
//	}
//	return sum;
//}
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//	int List[MAX],N;
//	scanf("%d",&N);
//	for(int i=0;i<N;i++){
//		//TODO
//		scanf("%d",&List[i]);
//	}
//	printf("%d\n",Sum(List, N));
//}
//int Sum(int List[], int N )
//{
//	int Sum=0;
//	for(int i=0;i<N;i++){
//		//TODO
//		Sum=Sum+List[i];
//	}
//	return Sum;
//}
//#include <stdio.h>
//#define MAX 100
//
//int calculateSum(int list[], int n);
//
//int main() {
//	int list[MAX], n;
//	
//	printf("ÇëÊäÈëÊý×éµÄ³¤¶È£º");
//	scanf("%d", &n);
//	
//	printf("ÇëÊäÈëÊý×éµÄÔªËØ£º");
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &list[i]);
//	}
//	
//	int sum = calculateSum(list, n);
//	printf("Êý×éÔªËØµÄºÍÎª£º%d\n", sum);
//	
//	return 0;
//}
//
//// ¼ÆËãÊý×éÔªËØµÄºÍ
//int calculateSum(int list[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += list[i];
//	}
//	return sum;
//}
//#include<stdio.h>
//
//int main(){
//	float a,sum=0,q=1;
//	int i=1, n=1, even=1;
//	
//	printf("Enter a value for 'a': ");
//	scanf("%f",&a);
//	
//	if(a>=1){
//		printf("Enter another value for 'a': ");
//		scanf("%f",&a);
//	}
//	
//	for(q=1; q>=a; i++){
//		n = n*i;
//		even = even*(2*i+1);
//		q = n / even;
//		sum = sum + q;
//	}
//	
//	printf("The result is: %f",sum*2);
//	
//	return 0;
//}
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Median( ElementType A[], int N )
//{
//	int k;
//	ElementType TempStore;
//	// ²ÉÓÃÔöÁ¿ÎªiµÄ²åÈëÅÅÐòËã·¨
//	for(int i=N/2;i>0;i=i/2){
//		for(int j=i;j<=N;j++){
//			TempStore=A[j];
//			// ½«A[j]ÏòÇ°²åÈëÒÑÅÅºÃÐòµÄ²¿·Ö
//			for(k=j;k>=i;k=k-i){
//				if(TempStore<A[k-i]){
//					A[k]=A[k-i];
//				}
//				else{
//					break;
//				}
//			}
//			A[k]=TempStore; // ½«TempStore²åÈëµ½ÕýÈ·Î»ÖÃ
//		}
//	}
//	
//	return A[N/2]; // ·µ»ØÖÐÎ»Êý
//}
//
//int main ()
//{
//	ElementType A[MAXN];
//	int N, i;
//	
//	printf("Enter the number of elements (N): ");
//	scanf("%d", &N);
//	
//	printf("Enter %d numbers: ", N);
//	for ( i=0; i<N; i++ )
//		scanf("%f", &A[i]);
//	
//	printf("The median is: %.2f\n", Median(A, N));
//	
//	return 0;
//}
/*
  ³ÌÐòÊ×ÏÈÒªÇóÓÃ»§ÊäÈëÔªËØ¸öÊý N£¬È»ºóÒªÇóÓÃ»§ÊäÈë N ¸ö¸¡µãÊý£¬ÕâÐ©Êý×Ö½«´æ´¢ÔÚÊý×é A ÖÐ¡£½ÓÏÂÀ´£¬³ÌÐòµ÷ÓÃ Median º¯ÊýÀ´¼ÆËãÊý×é A µÄÖÐÎ»Êý£¬²¢½«½á¹û´òÓ¡³öÀ´¡£
  Õâ¶Î´úÂëµÄÖ÷Òª¹¦ÄÜÊÇÍ¨¹ý²åÈëÅÅÐòËã·¨À´ÕÒµ½¸ø¶¨Êý×éµÄÖÐÎ»Êý¡£
 */
//
//#include <stdio.h>
//
//void Print_Factorial ( const int N ){
//	int Store[1000];
//	Store[0]=1;
//	int every=0, M=0, digit=1;
//	
//	if(N<1000 && N>0){
//		for(int i=1;i<=N;i++){
//			every = 0;
//			for(int j=0;j<digit;j++){
//				every = Store[j]*i+M;
//				Store[j] = every%10;
//				M = every/10;
//			}
//			
//			while(M>0){
//				Store[digit] = M%10;
//				M = M/10;
//				digit++;
//			}
//		}
//		
//		for(int k=digit-1;k>=0;k--){
//			printf("%d", Store[k]);
//		}
//		printf("\n");
//	}
//}
////Õâ¶Î´úÂëµÄÖ÷Òª¹¦ÄÜÊÇ¼ÆËã¸ø¶¨Êý×Ö N µÄ½×³Ë£¬²¢½«½á¹û°´Î»´æ´¢ÔÚÊý×é Store ÖÐ¡£
//int main()
//{
//	int N;
//	
//	printf("Enter a number (N): ");
//	scanf("%d", &N);
//	
//	printf("The factorial is: ");
//	Print_Factorial(N);
//	
//	return 0;
//}
/*
  ³ÌÐòÊ×ÏÈÒªÇóÓÃ»§ÊäÈëÒ»¸öÊý×Ö N¡£½ÓÏÂÀ´£¬³ÌÐòµ÷ÓÃ Print_Factorial º¯ÊýÀ´¼ÆËãÊý×Ö N µÄ½×³Ë£¬²¢½«½á¹û°´Î»´òÓ¡³öÀ´¡£
  
  ÔÚº¯Êý Print_Factorial ÖÐ£¬ÎÒÃÇÊ¹ÓÃÊý×é Store À´´æ´¢Ã¿Ò»Î»µÄ½×³Ë¼ÆËã½á¹û¡£ÎÒÃÇÍ¨¹ýÒ»¸öÑ­»·±éÀú 1 µ½ N µÄÃ¿¸öÊý×Ö£¬È»ºóÔÚÄÚ²¿µÄÑ­»·ÖÐ£¬½«µ±Ç°Î»Óë i Ïà³Ë²¢¼ÓÉÏ½øÎ» M£¬È»ºó¸üÐÂµ±Ç°Î»µÄ½á¹ûºÍ½øÎ»¡£
  
  µ±¼ÆËãÍê³Éºó£¬ÎÒÃÇ»¹ÐèÒª´¦Àí¿ÉÄÜ³öÏÖµÄ×î¸ßÎ»µÄ½øÎ»¡£ÎÒÃÇÍ¨¹ýÒ»¸öÑ­»·½«Ã¿Ò»Î»µÄ½á¹û°´Î»´òÓ¡³öÀ´¡£
 */
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 1000
//typedef int ElemType;
//typedef struct{
//	ElemType data[MAX_SIZE];
//	int length;
//}SeqList;
#include <stdio.h>
#include <stdlib.h>

#define LIST_INIT_SIZE 5
#define LIST_INCREMENT 2

typedef struct {
  int age;
  int height;
  double weight;
} Student;

typedef struct {
  Student *stu;
  int length;
  int listsize;
} SqList;

// 初始化一个顺序表
int initList(SqList *L) {
  if (L->stu != NULL) {
    return 0; // 已经初始化过
  }
  
  L->stu = (Student *)malloc(LIST_INIT_SIZE * sizeof(Student));
  if (!L->stu) {
    exit(-1); // 内存申请失败
  }
  
  L->length = 0;
  L->listsize = LIST_INIT_SIZE;

  return 1;
}

// 销毁顺序表
int deleteList(SqList *L) {
  if (L->stu == NULL) {
    return 0; // 顺序表不存在
  }

  free(L->stu);
  L->stu = NULL;
  L->length = 0;
  L->listsize = 0;
  
  return 1;
}

// 遍历顺序表
void findAllList(SqList *L) {
  for (int i = 0; i < L->length; i++) {
    printf("age=%5d, height=%5d, weight=%5lf\n", L->stu[i].age, L->stu[i].height, L->stu[i].weight);
  }
}

// 查找数组中的某个元素，如果查找到某个元素，将返回1，否则返回0
int findOneList(SqList *L, Student *stu) {
  for (int i = 0; i < L->length; i++) {
    if (L->stu[i].age == stu->age && L->stu[i].height == stu->height && L->stu[i].weight == stu->weight) {
      return 1;
    }
  }
  return 0;
}

// 打印成员信息
void displayValue(Student *stu) {
  if (!stu) {
    return;
  }
  printf("age=%5d, height=%5d, weight=%5lf\n", stu->age, stu->height, stu->weight);
}

// 扩大数组的长度
int extantList(SqList *L) {
  int new_size = L->listsize + LIST_INCREMENT;
  Student *p = (Student *)realloc(L->stu, new_size * sizeof(Student));
  if (!p) {
    return 0; // 内存申请失败
  }
  
  L->stu = p;
  L->listsize = new_size;
  
  return 1;
}

// 元素复制
void copyValue(Student *s1, Student *s2) {
  s1->age = s2->age;
  s1->height = s2->height;
  s1->weight = s2->weight;
}

// 在顺序表的尾部插入元素
void insertLastList(SqList *L, Student *s) {
  if (L->length >= L->listsize) {
    extantList(L);
  }

  copyValue(&L->stu[L->length], s);
  L->length++;
}

// 在顺序表的指定位置插入
int insertLocList(SqList *L, int i, Student *e) {
  if (i < 0 || i > L->length) {
    return 0; // 插入位置不合法
  }

  if (L->length >= L->listsize) {
    extantList(L);
  }

  for (int j = L->length; j > i; j--) {
    copyValue(&L->stu[j], &L->stu[j-1]);
  }

  copyValue(&L->stu[i], e);
  L->length++;

  return 1;
}

// 删除最后一个元素
void deleteLastList(SqList *L) {
  if (L->length <= 0) {
    return; // 顺序表为空，无法删除
  }
  
  L->length--;
}

int main() {
  SqList L;
  initList(&L);

  for (int i = 0; i < L.listsize; i++) {
    printf("输入年龄，身高，体重\n");
    scanf("%d%d%lf", &L.stu[i].age, &L.stu[i].height, &L.stu[i].weight);
    L.length++;
  }

  findAllList(&L);

  printf("查找到的元素\n");
  Student s = {10, 160, 45};
  if (findOneList(&L, &s)) {
    displayValue(&s);
  } else {
    printf("未找到元素\n");
  }

  printf("插入元素之后的顺序表\n");
  insertLastList(&L, &s);
  findAllList(&L);

  printf("在指定位置插入元素的顺序表\n");
  insertLocList(&L, 3, &s);
  findAllList(&L);

  printf("删除最后一个元素\n");
  deleteLastList(&L);
  findAllList(&L);

  deleteList(&L);

  return 0;
}
