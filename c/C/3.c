////å¤´æ–‡ä»?





//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 20  //çº¿æ€§è¡¨å­˜å‚¨ç©ºé—´çš„åˆå§‹åˆ†é…é‡
//#define OK 1    //æˆåŠŸæ ‡è¯†
//#define ERROR 0 //å¤±è´¥æ ‡è¯†
//
//typedef int Status;	//Statusæ˜¯å‡½æ•°çš„ç±»åž‹ï¼Œå…¶å€¼æ˜¯å‡½æ•°ç»“æžœçŠ¶æ€ä»£ç ï¼Œå¦‚OKç­?
//typedef int ElemType;   //ElemTypeçš„ç±»åž‹æ ¹æ®å®žé™…æƒ…å†µè€Œå®šï¼Œè¿™é‡Œå‡å®šä¸ºint
////é¡ºåºè¡¨æ•°æ®ç»“æž?
//typedef struct
//{
//	ElemType *elem;
//	int length;
//}SqList;
//
//Status InitList(SqList* L){
//	//æž„é€ ä¸€ä¸ªç©ºçš„çº¿æ€§è¡¨L
//	L -> elem = (ElemType *)malloc(MAXSIZE*sizeof(ElemType));
//	if(!L -> elem){
//		return ERROR;
//	}
//	L -> length = 0;
//	return OK;
//}
//
///*
//  æ’å…¥æ“ä½œ
//  åˆå§‹æ¡ä»¶ï¼šé¡ºåºè¡¨Lå·²å­˜åœ?
//  æ“ä½œç»“æžœï¼šåœ¨Lä¸­çš„ç¬¬iä¸ªä½ç½®ä¹‹å‰æ’å…¥æ–°çš„æ•°æ®å…ƒç´ eï¼ŒLçš„é•¿åº¦åŠ 1
// */
//Status ListInsert(SqList *L, int i, ElemType e){
//	int k;
//	if (L->length == MAXSIZE){  //çº¿æ€§è¡¨å·²æ»¡
//		return ERROR;
//	}
//	if (i < 1 || i > L->length+1){ //å½“iä¸åœ¨èŒƒå›´å†…æ—¶
//		return ERROR;
//	}
//	if (i <= L->length){  //è‹¥æ’å…¥ä½ç½®ä¸åœ¨è¡¨å°?
//		for(k = L->length-1;k >= i-1;k--){
//			L->elem[k+1] = L->elem[k];
//		}
//	}
//	L->elem[i-1] = e;   //å°†æ–°å…ƒç´ æ’å…¥
//	L->length++;    //é•¿åº¦åŠ?
//	return OK;
//}
//
///*
//  åˆ é™¤æ“ä½œ
//  åˆå§‹æ¡ä»¶ï¼šé¡ºåºè¡¨Lå·²å­˜åœ?
//  æ“ä½œç»“æžœï¼šåˆ é™¤Lçš„ç¬¬iä¸ªæ•°æ®å…ƒç´ ï¼Œå¹¶ç”¨eè¿”å›žå…¶å€¼ï¼ŒLçš„é•¿åº¦å‡1
// */
//Status ListDelete(SqList *L, int i, ElemType *e){
//	int k;
//	if(L->length == 0){   //çº¿æ€§è¡¨ä¸ºç©º
//		return ERROR;
//	}
//	if(i < 1 || i > L->length){ //åˆ é™¤ä½ç½®ä¸æ­£ç¡?
//		return ERROR;
//	}
//	*e = L -> elem[i-1];
//	if(i < L->length){  //å¦‚æžœåˆ é™¤ä½ç½®ä¸åœ¨æœ€åŽä½ç½?
//		for(k = i;k < L->length;k++){
//			L->elem[k-1] = L->elem[k];
//		}
//	}
//	L->length--;    //é•¿åº¦å‡?
//	return OK;
//}
//
//
///*
//  èŽ·å–å…ƒç´ æ“ä½œ
//  åˆå§‹æ¡ä»¶ï¼šé¡ºåºè¡¨Lå·²å­˜åœ?
//  æ“ä½œç»“æžœï¼šç”¨eè¿”å›žLä¸­ç¬¬iä¸ªæ•°æ®å…ƒç´ çš„å€?
// */
//Status GetElem(SqList L, int i, ElemType *e){
//	if(L.length == 0 || i<1 || i>L.length){
//		return ERROR;
//	}
//	*e = L.elem[i-1];
//	return OK;
//}
//
///*æ‰“å°çº¿æ€§è¡¨ä¸­çš„æ‰€æœ‰å…ƒç´?/
//void OutPut(SqList L){
//	printf("å½“å‰é¡ºåºè¡¨çš„é•¿åº¦:%d\n", L.length);
//	for(int i = 0; i < L.length; i++){
//		printf("%d ",L.elem[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	SqList L;
//	printf("------æž„é€ ä¸€ä¸ªç©ºçš„çº¿æ€§è¡¨L------\n");
//	InitList(&L);
//	OutPut(L);  //æ‰“å°ç»“æžœ
//	printf("------æµ‹è¯•æ’å…¥10ä¸ªæ•°------\n");
//	for(int i = 1;i <= 10; i++){
//		ListInsert(&L,i,i);
//	}
//	OutPut(L);  //æ‰“å°ç»“æžœ
//	printf("------åœ¨ç¬¬ä¸‰ä½ä¹‹å‰æ’å…¥0------\n");
//	ListInsert(&L,3,0);
//	OutPut(L);  //æ‰“å°ç»“æžœ
//	printf("------åˆ é™¤ç¬?ä½çš„æ•°æ®------\n");
//	ElemType e;
//	ListDelete(&L,6,&e);
//	printf("åˆ é™¤çš„æ•°æ®ä¸ºï¼?d\n", e);
//	OutPut(L);  //æ‰“å°ç»“æžœ
//	printf("------èŽ·å–å…ƒç´ æ“ä½œ------\n");
//	GetElem(L,5,&e);
//	printf("å¾—åˆ°ç¬?ä¸ªå…ƒç´ ï¼š%d", e);
//}

//#include <stdio.h>
//int main() {
//	int x, y = 2, i;
//	scanf("%d", &x);
//	for (; y <= x ; y++) {
//		if (y % x == 0) {
//			i = 1;
//			break;
//		} else
//			i = 0;
//	}
//	if (i) {
//		printf("ä¸æ˜¯ç´ æ•°");
//	} else {
//		printf("æ˜¯ç´ æ•?);
//	}
//	return 0;
//}

//#include <stdio.h>
//int IsPrimeNUmber(int m) {
//	int i = 2;
//	for (; i < m; i++) {
//		if (m % i == 0) {
//			//TODO
//			return 1;
//			//printf("æ˜¯ç´ æ•?);
//		} else {
//			return 0;
//			//printf("ä¸æ˜¯ç´ æ•°");
//		}
//	}
//}
//
//int main() {
//	int m;
//	scanf("%d", &m);
//	if (IsPrimeNUmber(m)) {
//
//		printf("æ˜¯ç´ æ•?);
//	} else {
//		//return 0;
//		printf("ä¸æ˜¯ç´ æ•°");
//	}
//	return 0;
//}
////TODO

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 101; i <= 200; i++) {
//		// éåŽ†åŒºé—´ä¸?[2, i-1]ï¼Œä½†å®žé™…ä¸Šæ‰§è¡Œåˆ° i/2 å°±ä¼šé€€å‡?
//		for (j = 2; j < i; j++) {
//			// è¯´æ˜Žæ˜¯åˆæ•?
//			if (i % j == 0) {
//				break;
//			}
//			// å½“å› æ•°å¤§äºŽæœ€å¤§å› æ•?i / 2 æ—¶è¿˜æ²¡è·³å‡ºå¾ªçŽ¯ï¼Œåˆ™è¯æ˜Žè¯¥æ•°æ—¶ç´ æ•°
//			if (j > (i / 2)) {
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 101; i <= 200; i++) {
//		// éåŽ†åŒºé—´ä¸?[2, i-1]ï¼Œä½†å®žé™…ä¸Šæ‰§è¡Œåˆ° i/2 å°±ä¼šé€€å‡?
//		for (j = 2; j < i; j++) {
//			// è¯´æ˜Žæ˜¯åˆæ•?
//			if (i % j == 0) {
//				break;
//			}
//			// å½“å› æ•°å¤§äºŽæœ€å¤§å› æ•?i / 2 æ—¶è¿˜æ²¡è·³å‡ºå¾ªçŽ¯ï¼Œåˆ™è¯æ˜Žè¯¥æ•°æ—¶ç´ æ•°
//			if (j > (i / 2)) {
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int a, b, c;
//	printf("è¯·è¾“å…¥ä¸‰ä¸ªæ­£æ•´æ•°ï¼š\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if ((a >= 1 && a <= 100) && (b >= 1 && b <= 100) && (c >= 1 && c <= 100))
//		if (a + b >= c && b + c >= a && a + c >= b)
//			if (a == b || b == c || c == a)
//				printf("ç­‰è…°ä¸‰è§’å½?);
//			else if (a == b && b == c)
//				printf("ç­‰è¾¹ä¸‰è§’å½?);
//			else
//				printf("ä¸€èˆ¬ä¸‰è§’å½¢");
//		else
//			printf("éžä¸‰è§’å½¢");
//	else
//		printf("è¾¹çš„å–å€¼è¶…å‡ºå…è®¸èŒƒå›´ï¼");
//}

//#include <stdio.h>
//int main() {
//	int number, answer = 0;
//	scanf("%d", &number);
//	if (number <=0 || number > 30) {
//		return 0;
//	}
//	if (number >= 1 && number <= 10) {
//		answer = number * 50;
//	}
//	if (number >= 11 && number <= 20) {
//		answer = (number - 10) * 45 + 500;
//	}
//	if (number >= 21 && number <= 30) {
//		answer = (number - 20) * 40 + 950;
//	}
//	printf("%d", answer);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Link {
//	int  elem;
//	struct Link *next;
//} link;
//link *initLink();
////Á´±í²åÈëµÄº¯Êý£¬pÊÇÁ´±í£¬elemÊÇ²åÈëµÄ½áµãµÄÊý¾ÝÓò£¬addÊÇ²åÈëµÄÎ»ÖÃ
//link *insertElem(link *p, int elem, int add);
////É¾³ý½áµãµÄº¯Êý£¬p´ú±í²Ù×÷Á´±í£¬add´ú±íÉ¾³ý½ÚµãµÄÎ»ÖÃ
//link *delElem(link *p, int add);
//void display(link *p);
//int main() {
//	//³õÊ¼»¯Á´±í£¨1£¬2£¬3£¬4£©
//	printf("³õÊ¼»¯Á´±íÎª£º\n");
//	link *p = initLink();
//	display(p);
//
//	printf("ÔÚµÚ4µÄÎ»ÖÃ²åÈëÔªËØ5£º\n");
//	p = insertElem(p, 5, 4);
//	display(p);
//
//	printf("É¾³ýÔªËØ3:\n");
//	p = delElem(p, 3);
//	display(p);
//	return 0;
//}
//link *initLink() {
//	link *p = (link *)malloc(sizeof(link)); //´´½¨Ò»¸öÍ·½áµã
//	link *temp = p; //ÉùÃ÷Ò»¸öÖ¸ÕëÖ¸ÏòÍ·½áµã£¬ÓÃÓÚ±éÀúÁ´±í
//	//Éú³ÉÁ´±í
//	for (int i = 1; i < 5; i++) {
//		link *a = (link *)malloc(sizeof(link));
//		a->elem = i;
//		a->next = NULL;
//		temp->next = a;
//		temp = temp->next;
//	}
//	return p;
//}
//link *insertElem(link *p, int elem, int add) {
//	link *temp = p; //´´½¨ÁÙÊ±½áµãtemp
//	//Ê×ÏÈÕÒµ½Òª²åÈëÎ»ÖÃµÄÉÏÒ»¸ö½áµã
//	for (int i = 1; i < add; i++) {
//		if (temp == NULL) {
//			printf("²åÈëÎ»ÖÃÎÞÐ§\n");
//			return p;
//		}
//		temp = temp->next;
//	}
//	//´´½¨²åÈë½áµãc
//	link *c = (link *)malloc(sizeof(link));
//	c->elem = elem;
//	//ÏòÁ´±íÖÐ²åÈë½áµã
//	c->next = temp->next;
//	temp->next = c;
//	return  p;
//}
//link *delElem(link *p, int add) {
//	link *temp = p;
//	//±éÀúµ½±»É¾³ý½áµãµÄÉÏÒ»¸ö½áµã
//	for (int i = 1; i < add; i++) {
//		temp = temp->next;
//	}
//	link *del = temp->next; //µ¥¶ÀÉèÖÃÒ»¸öÖ¸ÕëÖ¸Ïò±»É¾³ý½áµã£¬ÒÔ·À¶ªÊ§
//	temp->next = temp->next->next; //É¾³ýÄ³¸ö½áµãµÄ·½·¨¾ÍÊÇ¸ü¸ÄÇ°Ò»¸ö½áµãµÄÖ¸ÕëÓò
//	free(del);//ÊÖ¶¯ÊÍ·Å¸Ã½áµã£¬·ÀÖ¹ÄÚ´æÐ¹Â©
//	return p;
//}
//void display(link *p) {
//	link *temp = p; //½«tempÖ¸ÕëÖØÐÂÖ¸ÏòÍ·½áµã
//	//Ö»ÒªtempÖ¸ÕëÖ¸ÏòµÄ½áµãµÄnext²»ÊÇNull£¬¾ÍÖ´ÐÐÊä³öÓï¾ä¡£
//	while (temp->next) {
//		temp = temp->next;
//		printf("%d", temp->elem);
//	}
//	printf("\n");
//}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

Node *createNode(int data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("ÄÚ´æ·ÖÅäÊ§°Ü\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

Node *insertNode(Node *head, int data, int position) {
	if (position < 0) {
		printf("²åÈëÎ»ÖÃÎÞÐ§\n");
		return head;
	}

	Node *newNode = createNode(data);

	if (position == 0 || head == NULL) {
		newNode->next = head;
		return newNode;
	}

	Node *current = head;
	Node *previous = NULL;
	int count = 0;

	while (current != NULL && count < position) {
		previous = current;
		current = current->next;
		count++;
	}

	if (count < position) {
		printf("²åÈëÎ»ÖÃÎÞÐ§\n");
		return head;
	}

	previous->next = newNode;
	newNode->next = current;
	return head;
}

Node *deleteNode(Node *head, int position) {
	if (head == NULL) {
		printf("Á´±íÎª¿Õ\n");
		return head;
	}

	if (position == 0) {
		Node *temp = head;
		head = head->next;
		free(temp);
		return head;
	}

	Node *current = head;
	Node *previous = NULL;
	int count = 0;

	while (current != NULL && count < position) {
		previous = current;
		current = current->next;
		count++;
	}

	if (count < position || current == NULL) {
		printf("É¾³ýÎ»ÖÃÎÞÐ§\n");
		return head;
	}

	previous->next = current->next;
	free(current);
	return head;
}

void display(Node *head) {
	if (head == NULL) {
		printf("Á´±íÎª¿Õ\n");
		return;
	}

	Node *current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

void freeList(Node *head) {
	Node *current = head;
	while (current != NULL) {
		Node *temp = current;
		current = current->next;
		free(temp);
	}
}

int main() {
	Node *head = NULL;

	printf("³õÊ¼»¯Á´±íÎª£º\n");
	for (int i = 1; i <= 4; i++) {
		head = insertNode(head, i, i - 1);
	}
	display(head);

	printf("ÔÚµÚ4µÄÎ»ÖÃ²åÈëÔªËØ5£º\n");
	head = insertNode(head, 5, 3);
	display(head);

	printf("É¾³ýÔªËØ3:\n");
	head = deleteNode(head, 2);
	display(head);

	// ÊÍ·ÅÁ´±íÄÚ´æ
	freeList(head);

	return 0;
}
