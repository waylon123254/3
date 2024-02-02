//#include <stdio.h>



//
//int flag(int year)//åˆ¤æ–­æ˜¯å¦æ˜¯é—°å¹?
//{
//	int s=0;
//	if(year%4==0&&year%400!=0||year%100==0&&year%400==0)
//		s=1;
//	return s;
//}
//int date(int mon,int day)//è®¡ç®—æ—¶é—´å¤©æ•°
//{
//	int s=0;
//	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//	for(int i=0;i<mon-1;i++)
//		s=s+a[i];
//	s=s+day;
//	return s;
//}
//int main()
//{
//	int year,mon,day,sum,p;
//	printf("è¾“å…¥æ—¥æœŸï¼š\n");//é”®ç›˜è¾“å…¥æ—¥æœŸ
//	scanf("%d%d%d",&year,&mon,&day);
//	sum=date(mon,day);//è®¡ç®—å¤©æ•°
//	p=flag(year);
//	if(mon>=3&&p==1)//é—°å¹´è¦å¤šä¸€å¤?
//		sum++;
//	printf("%då¹?dæœ?dæ—¥æ˜¯è¿™ä¸€å¹´çš„ç¬?då¤©\n",year,mon,day,sum);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define MaxSize 10;
//typedef struct Table
//{
//	int *head;
//	int length;
//	int size;
//
//
//}table;
//
//table InitTable()
//{
//	table t;
//	t.head=(int*)malloc()
//}

//#include <stdio.h>
//int main()
//{
//	int year,month,day,sum=0;
//	int buf[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	printf("è¯·è¾“å…¥å¹´æœˆæ—¥ï¼?);
//	scanf("%d%d%d",&year,&month,&day);
//	if (year < 0 || month < 1 || month > 12 || day < 1) {
//		printf("è¾“å…¥çš„å¹´æœˆæ—¥ä¸ç¬¦åˆå¸¸è¯†ï¼");
//		return 0;
//	}
//	for(int i=0;i<month-1;i++){
//		//TODO
//		sum=sum+buf[i];
//	}
//	sum=sum+day;
//	if((month>2)&& ((year%4==0&&year%100==0)||(year%400==0))){
//		//TODO
//	sum=sum+1;
//	}
//	printf("%d",sum);
//}
// #include <stdio.h>
// int int main()
// {
// 	int n,y,f;
// 	scanf("%d",&n);
// 	if (/* condition */n>100||n<=0)
// 	{
// 		/* code */
// 	scanf("%d",&n);
// 	}
// 	if (/* condition */n==98||n<=50)
// 	{
// 		/* code */y=(98-n)/3;
// 		f=2*y+1;
// 		if (/* condition */(98-n)%3!=0)
// 		{
// 			/* code */
// 			printf("No\n");
// 		}else
// 		{
// 			printf("%D%D",y,f);
// 		}else{
// 			y=(196-n)/3;
// 			f=2
// 		}
// 	}
// 	/* code */
// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int N;
// 	scanf("%d",&N);
// 	if (/* condition */N<1||N>9
// 	)
// 	{
// 		/* code */scanf("%d",&N);
// 	}
// 	/* code */for(int i=1;i<=N;i++){
// 	for (int j = 1; j <=Nt; )
// 	{
// 		/* code */
// 		if (/* condition */i<=j)
// 		{
// 			/* code */printf("%d*%d=%-4d",i,j,i*j );
// 		}
// 	}
// 	}
// 	return 0;
// }

// #include <stdio.h>
// int int main()
// {
// 	int a,sum=0,temp=0,count++;
// scanf("%d",&a);
// for (int i = 0; i <= a; i++)
// {
// 	sum+=i;
// 	count++;
// }
// printf("%d\n",sum/temp );
// 	/* code */
// 	return 0;
// }

// #include<stdlib.h>
// #include<stdio.h>
// int Factor(List L)
// int main(int argc, char const *argv[])
// {
// 	int N,o;
// 	List L,p;
// 	scanf("%d",&N);
// 	L=NULL;
// 	for (int i = 0; i < N; i++)
// 	{
// 		/* code */
// 		P=(List)malloc(sizeof(struct Node));
// 		scanf("%d")
// 	}
// 	/* code */
// 	return 0;
// }
// #include<stdio.h>
// int main(){
// 	int arr[]={4,56,12,25,12,6};
// 	int size =sizeof(arr)/sizeof(arr[0]);
// 	for (int i = 0; i < size; ++i)
// 	{
// 		/* code */
// 		for(int j=1+i;j<size;j++){
// 			if (a[j]<a[i])
// 			{
// 				/* code */
// 				int temp =arr[j]
// 				arr[j]==arr[i];
// 				arr[i]==temp;
// 			}
// 		}
// 	}
// 	for(int num:arr){
// 		printf("%s\n", arr);
// 	}
// }
#include <stdio.h>
#define MAX_SIZE 100

// 定义顺序表结构体
typedef struct {
    int data[MAX_SIZE];
    int length;
} SeqList;

// 初始化顺序表
void init(SeqList *list) {
    list->length = 0;
}

// 添加元素到顺序表尾部
int append(SeqList *list, int value) {
    if (list->length >= MAX_SIZE) {
        printf("顺序表已满，无法添加元素\n");
        return -1;
    }
    list->data[list->length] = value;
    list->length++;
    return 0;
}

// 删除指定位置的元素
int removeAt(SeqList *list, int index) {
    if (index < 0 || index >= list->length) {
        printf("无效的索引位置\n");
        return -1;
    }
    for (int i = index; i < list->length - 1; i++) {
        list->data[i] = list->data[i+1];
    }
    list->length--;
    return 0;
}

// 修改指定位置的元素
int modify(SeqList *list, int index, int value) {
    if (index < 0 || index >= list->length) {
        printf("无效的索引位置\n");
        return -1;
    }
    list->data[index] = value;
    return 0;
}

// 打印顺序表中的元素
void print(SeqList *list) {
    printf("顺序表中的元素为: ");
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

// 存储顺序表到文件
int saveToFile(SeqList *list, char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("文件打开失败\n");
        return -1;
    }
    for (int i = 0; i < list->length; i++) {
        fprintf(file, "%d\n", list->data[i]);
    }
    fclose(file);
    return 0;
}

int main() {
    SeqList list;
    init(&list);

    append(&list, 10);
    append(&list, 20);
    append(&list, 30);
    append(&list, 40);

    print(&list);

    removeAt(&list, 2);
    print(&list);

    modify(&list, 1, 50);
    print(&list);

    saveToFile(&list, "seq_list.txt");

    return 0;
}