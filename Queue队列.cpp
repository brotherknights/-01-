//#include"head.h"
//typedef struct node {
//	int val;
//	struct node* next;
//}List;
//
//typedef struct node2 {
//	int count;
//	List* pHead;//ͷ���
//	List* pTail;//β�ͽڵ�
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
//	//���
//	if (queue->pHead==NULL) {//���ͷ�ǿ�
//		queue->pHead = pTemp;//ͷ��������������ڵ�
//	}
//	else {
//		queue->pTail->next = pTemp;//β���
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
//		queue->pTail = NULL;//����Ѿ���0��β��ͷ��ָ��ͬһ�� ��β���գ�
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