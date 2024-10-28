//#include"head.h"
//typedef struct node {
//	int val;
//	struct node* next;
//}List;
//
//typedef struct node2 {
//	int count;
//	List* pHead;//头结点
//	List* pTail;//尾巴节点
//}Queue;
//
//void Init(Queue **queue) {
//	*queue = (Queue*)malloc(sizeof(Queue));
//	(*queue)->count = 0;
//	(*queue)->pHead = NULL;
//	(*queue)->pTail = NULL;
//}
//void Push(Queue*queue,int val) {
//	if (queue==NULL) {
//		return;
//	}
//
//	List *pTemp=(List*)malloc(sizeof(List));
//	pTemp->val = val;
//	pTemp->next = NULL;
//
//	//检测
//	if (queue->pHead==NULL) {//如果头是空
//		queue->pHead = pTemp;//头就是新来的这个节点
//	}
//	else {
//		queue->pTail->next = pTemp;//尾添加
//	}
//	queue->pTail = pTemp;
//	queue->count++;
//}
//
//void Pop(Queue* queue) {
//	if (queue == NULL) {
//		return;
//	}
//	if (queue->count == 0) {
//		return;
//	}
//	List* del = queue->pHead;
//	queue->pHead = queue->pHead->next;
//	printf("%d",del->val);
//	free(del);
//	del = NULL;
//	queue->count--;
//	if (queue->count == 0) {
//		queue->pTail = NULL;//如果已经是0了尾和头会指向同一个 把尾浮空；
//	}
//}
//
//int main() {
//	Queue** queue = NULL;
//	Init(queue);
//	Push(queue,5);
//	Push(queue,4);
//	Push(queue,3);
//
//}