//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("ÇëÊäÈëÒ»¸öÕûÊý£º\n"); 	//ÌáÊ¾´Ó£º¼üÅÌÊäÈëÒ»¸öÕûÊý 
//	scanf("%d",&n);					// ´Ó¼üÅÌÊäÈëÒ»¸öÕûÊý 
//	while(n!=0)						//Ö»Òªn²»ÊÇ0 
//	{
//		printf("%d",n%10);
//		n=n/10;
//	}
//	printf("\n");
//	return 0;
// } 
//#include <stdio.h>
//
//int main() {
//	int i, j, k; // i,j,k·Ö±ð´ú±í°ÙÎ»£¬Ê®Î»£¬¸öÎ»
//	int count = 0; // ¼ÇÂ¼×Ü¹²²»ÖØ¸´µÄÊý×ÖµÄ¸öÊý
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= 5; j++) {
//			for (k = 1; k <= 5; k++) {
//				if (i != k && i != j && j != k) {
//					count++;
//					printf("%d%d%d ", i, j, k);
//					if (0 == count % 10) //»»ÐÐ
//					{
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("²»ÖØ¸´µÄÊý×ÖµÄ¸öÊýÎª£º%d", count);
//}

//#include<stdio.h>
//long func(int n){
//	if(n==1){
//		//TODOS
//		return 1;
//	}
//	else
//	{
//		return func(n-1)+func(n);
//	}
//}
//int main(){
//	int n;
//	printf("µÄ½×³Ë£º\n");
//	scanf("%d",&n);
//	long x=func(n);
//	printf("%d",x);
//}

//#include <stdio.h>
//
//long factorial(int n) {
//	long result = 1;
//	
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	
//	return result;
//}
//
//int main() {
//	int n;
//	
//	printf("ÇëÊäÈëÒ»¸öÕûÊý£º");
//	scanf("%d", &n);
//	
//	long x = factorial(n);
//	printf("%d µÄ½×³ËÎª %ld\n", n, x);
//	
//	return 0;
//}
//#include <stdio.h>
//
//long factorial(int n) {
//	long result = 1;
//	
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	
//	return result;
//}
//
//int main() {
//	int n;
//	
//	while (1) {
//		printf("ÇëÊäÈëÒ»¸öÕûÊý£¨ÊäÈë0½áÊø£©£º");
//		scanf("%d", &n);
//		
//		if (n == 0) {
//			break;
//		}
//		
//		long x = factorial(n);
//		printf("%d µÄ½×³ËÎª %ld\n", n, x);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//struct Student{
//	char name[50];
//	char id[50];
//	int score;
//};
//int main(){
//	struct Student st[50];
//	int n;
//	printf("ÇëÊäÈën¸öÑ§ÉúÐÅÏ¢\n");
//	scanf("%d",&n);
//	for(int i=0;i<=n;i++){
//		//TODO
//		scanf("%s %S %d",st[i].name,st[i].id,st[i].score);
//	}
//}
//#include <stdio.h>
//#include<string.h>
//struct Person {
//	char name[20];
//	int age;
//};
//
//int main() {
//	struct Person person1; // ÉùÃ÷Ò»¸ö½á¹¹Ìå±äÁ¿
//	
//	strcpy(person1.name, "John"); // Ê¹ÓÃstrcpyº¯Êý¸øname¸³Öµ
//	person1.age = 25; // Ö±½Ó¸øage¸³Öµ
//	
//	printf("Name: %s\n", person1.name);
//	printf("Age: %d\n", person1.age);
//	
//	return 0;
//}
//#include<stdio.h>
//
//int main(){
//	int N,count=0;
//	while(1){
//		//TODO
//		scanf("%d",&N);
//		count++;
//		if(N==250){
//			//TODO
//			printf("%d",count);
//			break;
//		}
//	}
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//int A,B,count=0,sum;
//scanf("%d%d",&A,&B);
//if((A<-100)||(B>100)||A>B){
//	//TODO
//scanf("%d%d",&A,&B);
//}
//for(int i=A;i<=B;i++){
//	//TODO
//	printf("%5d",i);
//	count++;
//	sum=sum+i;
//	if(count%5==0){
//		//TODO
//		printf("\n");
//	}
//}
//if(count%5!=0){
//	//TODO
//	printf("\n");
//}
//}
/*
  ·Ö½âÖÊÒòÊýµÄË¼Â·¾ÍÊÇÓÃ¸ÃÊýn²»¶Ï³ýÒÔÒ»¸öµÝÔöµÄÊýi£¨¸ÃÊý³õÊ¼Îª2£¬µÝÔöÖÁn£©ÈôÄÜÕû³ýi£¬Ôòµ±Ç°i¾ÍÎªnµÄÒò×ÓÖ®Ò»£¬È»ºó½«nÓÃ¸ÃÒò×ÓËõÐ¡£¬¼´n=n/iÔÙÖØ¸´Ö´ÐÐÉÏÊö²Ù×÷£¬Èôn = iÔòËµÃ÷·Ö½âÒò×Ó½áÊøÁË
  ºÃµÄ£¬ÎÒÃÇÓÃÒ»¸ö¾ßÌåµÄÀý×ÓÀ´ËµÃ÷Õâ¶Î´úÂëµÄÖ´ÐÐ¹ý³Ì¡£
  
  ¼ÙÉèÊäÈëµÄÕýÕûÊýÎª n = 36¡£
  
  ³õÊ¼Ê±£¬i = 2£¬½øÈëÍâ²ãÑ­»·¡£ÄÚ²ãÑ­»·¼ì²é n ÊÇ·ñÄÜ±» i Õû³ý£¬Èç¹ûÊÇ£¬ÔòÊä³öÒò×Ó i£¬¼´Êä³ö "2 * "£¬È»ºó½« n ¸üÐÂÎª n / i£¬¼´ n = 36 / 2 = 18¡£´ËÊ±ÄÚ²ãÑ­»·»á¼ÌÐøÖ´ÐÐ£¬ÒòÎª n »¹¿ÉÒÔ±» i Õû³ý¡£
  
  ½Ó×Å£¬µÚ¶þÂÖÄÚ²ãÑ­»·¿ªÊ¼£¬ÈÔÈ»Âú×ãÌõ¼þ£¬Êä³öÒò×Ó i£¬¼´Êä³ö "2 * "£¬È»ºó½« n ¸üÐÂÎª n / i£¬¼´ n = 18 / 2 = 9¡£
  
  µÚÈýÂÖÄÚ²ãÑ­»·¿ªÊ¼£¬´ËÊ± n ²»ÔÙÄÜ±» i Õû³ý£¬Òò´ËÌø³öÄÚ²ãÑ­»·£¬Íâ²ãÑ­»·µÝÔö i£¬Ê¹µÃ i = 3¡£
  
  µÚËÄÂÖÄÚ²ãÑ­»·¿ªÊ¼£¬n ÄÜ¹»±» i Õû³ý£¬Êä³öÒò×Ó i£¬¼´Êä³ö "3 * "£¬È»ºó½« n ¸üÐÂÎª n / i£¬¼´ n = 9 / 3 = 3¡£
  
  µÚÎåÂÖÄÚ²ãÑ­»·¿ªÊ¼£¬´ËÊ± n ÒÑ¾­µÈÓÚ i£¬²»ÔÙÂú×ãÑ­»·Ìõ¼þ£¬ÄÚ²ãÑ­»·½áÊø¡£Íâ²ãÑ­»·µÝÔö i£¬Ê¹µÃ i = 4¡£
  
  ¼ÌÐø½øÐÐÏÂÒ»ÂÖµÄÍâ²ãÑ­»·£¬Ö±µ½ i µÈÓÚ n£¬´ËÊ± n ²»ÔÙÄÜ±»½øÒ»²½·Ö½â£¬Ê£ÏÂµÄ n ¾ÍÊÇ×î´óµÄÒò×Ó¡£ÔÚÕâ¸öÀý×ÓÖÐ£¬Êä³ö¾ÍÊÇ "2 * 2 * 3"¡£
  
  Ï£ÍûÍ¨¹ýÕâ¸öÀý×ÓÄÜ¹»¸üºÃµØÀí½â´úÂëµÄÖ´ÐÐ¹ý³Ì¡£Èç¹ûÓÐÈÎºÎÒÉÎÊ£¬ÇëËæÊ±ÌáÎÊ¡£
 */
//#include <stdio.h>
//
//int main() {
//	int n ;
//	printf("ÇëÊäÈëÒ»¸öÕýÕûÊý£º");
//	scanf("%d", &n);
//	printf("%d = ", n);
//	for (int i = 2; i <= n; i++) {
//		while(n != i) { // Ö´ÐÐµÄÌõ¼þ±ØÐëÊÇnÓëi²»µÈ£¬ÈôÏàµÈÔò·Ö½â½áÊøÁË
//			if(n % i == 0) { // ÈôÄÜÕû³ýÔòiÎªnµÄÒò×ÓÖ®Ò»
//				printf("%d * ", i); // Êä³öÒò×Ó
//				n = n / i; // ÕÒµ½ÁËÒ»¸öÒò×Ói£¬Ôòn/iËõÐ¡n¼ÌÐøÑ°ÕÒ
//			} else {
//				break; // ²»ÄÜÕû³ýÔòÌø³ö±¾´ÎÑ­»·£¬µÝÔöi½øÐÐÏÂÒ»ÂÖ
//			}
//		}
//	}
//	printf("%d\n", n); // ×îºóÊ£ÏÂµÄn²»ÄÜÕû³ýi£¬ËùÒÔËüÒ²ÎªÒò×ÓÖ®Ò»£¬ËùÒÔ×îºóÊä³ö
//	return 0;
//}
/*
  ³õÊ¼»¯Èä³æµÄ¸ß¶ÈÎª0£¨height = 0£©¡£
  ³õÊ¼»¯Ê±¼äÎª0£¨time = 0£©¡£
  ½øÈëÒ»¸öÎÞÏÞÑ­»·£º
  ½«Ê±¼ä¼Ó1£¨time += 1£©¡£
  ½«Èä³æµÄ¸ß¶ÈÔö¼Ó U ´ç£¨height += U£©¡£
  Èç¹ûÈä³æµÄ¸ß¶È³¬¹ý»òµÈÓÚ¾®µÄÉî¶È N£¬ÔòÈä³æÒÑ¾­ÅÀ³ö¾®£¬Ìø³öÑ­»·£¬²¢Êä³öµ±Ç°µÄÊ±¼ä¡£
  ·ñÔò£¬½«Èä³æµÄ¸ß¶È¼õÉÙ D ´ç£¨height -= D£©¡£
  Èç¹ûÈä³æµÄ¸ß¶È±äÎª¸ºÊý£¨¼´Èä³æÅ¿µ½ÁË¾®µ×ÒÔÏÂ£©£¬ÔòÈä³æÒÑ¾­ÎÞ·¨ÔÙÅÀ³ö¾®£¬Ìø³öÑ­»·£¬²¢Êä³öµ±Ç°µÄÊ±¼ä¡£
 */
//#include <stdio.h>
//
//int worm_out(int N, int U, int D) {
//	int height = 0;
//	int time = 0;
//	
//	while (1) {
//		time++;
//		height += U;
//		
//		if (height >= N) {
//			return time;
//		}
//		
//		height -= D;
//		if (height < 0) {
//			return time;
//		}
//	}
//}
///*
//  Ò»ÌõÈä³æ³¤1´ç£¬ÔÚÒ»¿ÚÉîÎªN´çµÄ¾®µÄµ×²¿¡£ÒÑÖªÈä³æÃ¿1·ÖÖÓ¿ÉÒÔÏòÉÏÅÀU´ç£¬µ«±ØÐëÐÝÏ¢1·ÖÖÓ²ÅÄÜ½Ó×ÅÍùÉÏÅÀ¡£ÔÚÐÝÏ¢µÄ¹ý³ÌÖÐ£¬Èä³æÓÖÏÂ»¬ÁËD´ç¡£¾ÍÕâÑù£¬ÉÏÅÀºÍÏÂ»¬ÖØ¸´½øÐÐ¡£ÇëÎÊ£¬Èä³æÐèÒª¶à³¤Ê±¼ä²ÅÄÜÅÀ³ö¾®£¿
//  
//  ÕâÀïÒªÇó²»×ã1·ÖÖÓ°´1·ÖÖÓ¼Æ£¬²¢ÇÒ¼Ù¶¨Ö»ÒªÔÚÄ³´ÎÉÏÅÀ¹ý³ÌÖÐÈä³æµÄÍ·²¿µ½´ïÁË¾®µÄ¶¥²¿£¬ÄÇÃ´Èä³æ¾ÍÍê³ÉÈÎÎñÁË¡£³õÊ¼Ê±£¬Èä³æÊÇÅ¿ÔÚ¾®µ×µÄ£¨¼´¸ß¶ÈÎª0£©¡£
//  
//  ÊäÈë¸ñÊ½£º
//  ÊäÈëÔÚÒ»ÐÐÖÐË³Ðò¸ø³ö3¸öÕýÕûÊýN¡¢U¡¢D£¬ÆäÖÐD<U£¬N²»³¬¹ý100¡£
//  
//  Êä³ö¸ñÊ½£º
//  ÔÚÒ»ÐÐÖÐÊä³öÈä³æÅÀ³ö¾®µÄÊ±¼ä£¬ÒÔ·ÖÖÓÎªµ¥Î»¡£
// */
//int main() {
//	int N, U, D;
//	scanf("%d %d %d", &N, &U, &D);
//	int time = worm_out(N, U, D);
//	printf("%d\n", time);
//	return 0;
//}
// #include<stdio.h>
// int main()
// {
// 	int a1,a2,b1,b2,fenmu=0,fenzi=0;
// 	scanf("%d/%d,%d/%d",&a1,&b1,&a2,&b2);
// 	fenmu=b1*b2;
// 	fenzi=b1*a2+b2*a1;
// 	if(fenzi>fenmu){
// 		//TODO
// 		for(int i=fenzi;i>0;i--){
// 			//TODO
// 			printf("%d/%d",fenzi/i,fenmu/i);
// 			break;
// 		}
// 	}else if(fenzi<fenmu){
// 		//TODO
// 	}else if(fenzi==fenmu)
// 	{
		
// 	}
// }
//这段代码是一个简单的链表操作示例，
//使用 C 语言实现链表的创建、节点插入和打印链表等基本功能。在代码中添加了注解以帮助理解各部分功能
#include <stdio.h>
#include <stdlib.h>

// 创建链表
// 有头链表：链表第一个节点不存放数据
// 无头链表：链表的第一个节点存放数据
struct Node {
    int data;
    struct Node* next;
};

// 创建头节点
struct Node* CreateHead() {
    // 使用动态内存申请创建一个结构体指针变量 HeadNode，并分配结构体 Node 的大小
    struct Node* HeadNode = (struct Node*)malloc(sizeof(struct Node));
    // 初始化头节点的指针域为 NULL，表示链表为空
    HeadNode->next = NULL;
    // 返回头节点指针
    return HeadNode;
}

// 创建新节点
struct Node* CreateNode(int data) {
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = data;
    NewNode->next = NULL;
    return NewNode;
}

// 在头部插入新节点
void InsertNodeByHead(struct Node* HeadNode, int data) {
    struct Node* NewNode = CreateNode(data);
    NewNode->next = HeadNode->next;
    HeadNode->next = NewNode;
}

// 打印链表
void PrintList(struct Node* HeadNode) {
    struct Node* pMove = HeadNode->next;
    while (pMove != NULL) {
        printf("%d\t", pMove->data);
        pMove = pMove->next;
    }
    printf("\n");
}

// 显示菜单
void Menu() {
    printf("1.录入\n");
    printf("2.打印\n");
}

// 处理用户输入
void KeyDown(struct Node* list) {
    int choice = 0;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            // 录入操作
            break;
        case 2:
            PrintList(list);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

int main(int argc, char const *argv[]) {
    struct Node* list = CreateHead(); // 创建头节点
    for (int i = 0; i < 5; ++i) {
        InsertNodeByHead(list, i); // 在头部插入数据
    }
    while (1) {
        Menu(); // 显示菜单
        KeyDown(list); // 处理用户输入
    }
    return 0;
}