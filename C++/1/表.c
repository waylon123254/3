// //在结构体定义中，将Student结构体改为struct Student，以避免编译错误。
// //在InitList函数中，使用malloc函数为L->stu动态分配内存，大小为sizeof(struct Student) * LIST_INIT_SIZE。
// //在DeleteList函数中，判断L->stu是否为空指针后，使用free函数释放内存。
// //在FindAll函数中，使用循环遍历顺序表中的元素，并打印每个学生的信息。
// //在main函数中，创建struct SqList类型的结构体实例L，并调用InitList函数初始化L。然后添加了3个示例学生的数据，最后调用FindAll函数打印所有学生的信息。
// //在最后调用DeleteList函数删除顺序表，释放内存。
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define LIST_INIT_SIZE 100
// struct Student
// {
// int age;
// int height;
// double weight;
// };

// typedef struct SqList {
// struct Student *stu;//每个数组元素的数据类型
// int length;//学生总数
// int ListSize;//顺序表长度
// } SqList;

// //链表初始化
// int InitList(SqList **L) {
// //1.申请空间
// *L = (SqList *)malloc(sizeof(SqList));
// SqList *s = *L;
// s->stu = (struct Student *)malloc(sizeof(struct Student) * LIST_INIT_SIZE);
// //判断是否申请成功
// if (!s->stu)
// exit(-1);
// //申请成功，进行初始化
// s->length = 0;
// s->ListSize = LIST_INIT_SIZE;
// return 0;
// }

// //销毁顺序表
// int DeleteList(SqList **L) {
// //1.判断是否存在顺序表
// //2.如果存在，则要恢复表的初始值
// //3.释放内存，恢复初始值
// SqList *s = *L;
// if (s->stu != NULL)
// free(s->stu);
// s->length = 0;
// s->ListSize = 0;
// free(*L);
// return 1;
// }

// //遍历顺序表
// void FindAll(SqList *L) {
// 	for (int i = 0; i < L->length; ++i) {
// 	printf("age=%5d, height=%5d, weight=%5lf\n", L->stu[i].age, L->stu[i].height, L->stu[i].weight);
// 	}
// }

// int fondOneList(SqList *L, Student *stu){
// 	int i = 0;
// 	while (i<L->length){
// 		if ((L->stu[i].age == stu->age) && (L->stu[i].weight == stu->weight))
// 			return i;
// 				i++;
// 	}
// 		return -1;
// }
	//打印函数
void displayValue(Student *stu){
	if (!stu) return;
	printf("age=%5d,height=%5d,weight=%5d",stu->age,stu->height,stu->weight)
}
//插入元素
void insertList(SqList *L,Student *s){
	
}
// int main() {
// 	// struct SqList L;
// 	// InitList(&L);
	
// 	// char input[10]; // 存储用户输入的指令
	
// 	// while (1) {
// 	// 	printf("请输入指令：\n");
// 	// 	scanf("%s", input); // 读取用户输入的指令
		
// 	// 	if (strcmp(input, "add") == 0) { // 添加学生信息
// 	// 		if (L.length >= L.ListSize) { // 检查顺序表是否已满
// 	// 			printf("顺序表已满，无法添加学生信息！\n");
// 	// 			continue;
// 	// 		}
			
// 	// 		struct Student newStudent;
// 	// 		printf("请输入年龄：");
// 	// 		scanf("%d", &newStudent.age);
// 	// 		printf("请输入身高：");
// 	// 		scanf("%d", &newStudent.height);
// 	// 		printf("请输入体重：");
// 	// 		scanf("%lf", &newStudent.weight);
			
// 	// 		L.stu[L.length] = newStudent;
// 	// 		L.length++;
			
// 	// 		printf("学生信息添加成功！\n");
// 	// 	}
// 	// 	else if (strcmp(input, "print") == 0) { // 打印所有学生信息
// 	// 		printf("所有学生信息：\n");
// 	// 		FindAll(&L);
// 	// 	}
// 	// 	else if (strcmp(input, "delete") == 0) { // 删除顺序表
// 	// 		DeleteList(&L);
// 	// 		printf("顺序表删除成功！\n");
// 	// 		break; // 结束循环
// 	// 	}
// 	// 	else {
// 	// 		printf("无效指令！\n");
// 	// 	}
// 	// }
	
// 	// return 0;

// 	SqList *L;
// 	//Student stu[LIST_INIT_SIZE]={{10,180,98},{12,190,78}};
// 	Student stu;
// 	InitList(&L);
// 	for (int i = 0; i < L.ListSize; i++)
// 	{
// 		printf("信息\n");
// 		sacnf("%d%d%f",&L.stu[i].weight,&L.stu[i].height,&L.stu[i].age)
// 		/* code */
// 		L.length++;

// 	}
// 	FindAll(&L);
// 	printf("查找到的信息\n");
// 	Student s={10,180,45};
// 	FindOneList(&L);
// 	DeleteList(&L);
// 	return 0;

// }

//在结构体定义中，将Student结构体改为struct Student，以避免编译错误。
//在InitList函数中，使用malloc函数为L->stu动态分配内存，大小为sizeof(struct Student) * LIST_INIT_SIZE。
//在DeleteList函数中，判断L->stu是否为空指针后，使用free函数释放内存。
//在FindAll函数中，使用循环遍历顺序表中的元素，并打印每个学生的信息。
//在main函数中，创建struct SqList类型的结构体实例L，并调用InitList函数初始化L。然后添加了3个示例学生的数据，最后调用FindAll函数打印所有学生的信息。
//在最后调用DeleteList函数删除顺序表，释放内存。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIST_INIT_SIZE 100

struct Student
{
    int age;
    int height;
    double weight;
};

typedef struct SqList {
    struct Student *stu;
    int length;//学生总数
    int ListSize;//顺序表长度
} SqList;

//链表初始化
int InitList(SqList **L) {
    //1.申请空间
    *L = (SqList *)malloc(sizeof(SqList));
    SqList *s = *L;
    s->stu = (struct Student *)malloc(sizeof(struct Student) * LIST_INIT_SIZE);
    //判断是否申请成功
    if (!s->stu)
        exit(-1);
    //申请成功，进行初始化
    s->length = 0;
    s->ListSize = LIST_INIT_SIZE;
    return 0;
}

//销毁顺序表
int DeleteList(SqList **L) {
    //1.判断是否存在顺序表
    //2.如果存在，则要恢复表的初始值
    //3.释放内存，恢复初始值
    SqList *s = *L;
    if (s->stu != NULL) {
        free(s->stu);
        s->stu = NULL;
    }
    s->length = 0;
    s->ListSize = 0;
    free(*L);
    *L = NULL;
    return 1;
}

//遍历顺序表
void FindAll(SqList *L) {
    for (int i = 0; i < L->length; ++i) {
        printf("age=%d, height=%d, weight=%.2lf\n", L->stu[i].age, L->stu[i].height, L->stu[i].weight);
    }
}

int fondOneList(SqList *L, Student *stu){
    int i = 0;
    while (i<L->length){
        if ((L->stu[i].age == stu->age) && (L->stu[i].weight == stu->weight))
            return i;
        i++;
    }
    return -1;
}


int main() {
    SqList *L;
    InitList(&L);

    // 添加示例学生信息
    struct Student stu1 = {18, 170, 60.5};
    struct Student stu2 = {20, 180, 70.0};
    struct Student stu3 = {22, 175, 65.5};

    // 将学生信息添加到顺序表中
    L->stu[0] = stu1;
    L->stu[1] = stu2;
    L->stu[2] = stu3;
    L->length = 3;

    printf("所有学生信息：\n");
    FindAll(L);

    printf("查找到的信息：\n");
    struct Student searchStu = {20, 180, 70.0};
    int index = fondOneList(L, &searchStu);
    if (index != -1) {
        printf("age=%d, height=%d, weight=%.2lf\n", L->stu[index].age, L->stu[index].height, L->stu[index].weight);
    } else {
        printf("未找到学生信息！\n");
    }

    DeleteList(&L);

    return 0;
}