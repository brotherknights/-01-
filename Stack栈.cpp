//
//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* pNext;
//}List;
//
//typedef struct node2 {
//	int count;
//	List* pTop;
//}Stack;
//
//void Init(Stack**pStack){
//	*pStack = (Stack*)malloc(sizeof(Stack));
//	(*pStack)->count = 0;
//	(*pStack)->pTop = NULL;
//}
//
//
//void Push(Stack* pStack, int num) {
//	if (pStack==NULL) {
//		printf("stack is not exist\n");
//		return;
//	}
//	List* pTemp = (List*)malloc(sizeof(List));
//	pTemp->val = num;
//	pTemp->pNext = pStack->pTop;
//	pStack->pTop = pTemp;
//	pStack->count++;
//}
//
//void Pop(Stack*pStack) {
//	if (pStack->count==0)return;
//	if (pStack==NULL)return;
//	List* pdel = pStack->pTop;
//	pStack->pTop = pStack->pTop->pNext;
//	free(pdel);
//	pdel = NULL;
//	pStack->count--;
//}
//
//void Clear(Stack*pStack) {
//	if (pStack==NULL) {
//		return;
//	}
//	while (pStack->count != 0) {
//		Pop(pStack);
//	}
//}
//
//void Destroy(Stack** pStack) {
//	Clear(*pStack);
//	free(*pStack);
//	*pStack = NULL;
//
//}
//int GetTop(Stack*pStack)
//{
//	if (pStack==NULL) {
//		exit(1);
//	}
//	if(pStack->count == 0) {
//		exit(1);
//		return pStack->pTop->val;
//	}
//}
//
//int GetCount(Stack* pStack) {
//	if (pStack==NULL) {
//		exit(1);
//	}
//	return pStack->count;
//}
//
//int Isempty(Stack*pStack) {
//	if (pStack == NULL) {
//		exit(1);
//	}return pStack->count == 0 ? 1 : 0;
//}
//
//int main(){
//	Stack* pStack = NULL;
//	Init(&pStack);
//	Push(pStack,1);
//	Push(pStack, 2);
//	Push(pStack, 3);
//	Push(pStack, 4);
//
//	printf("%d\n",GetTop(pStack));
//}