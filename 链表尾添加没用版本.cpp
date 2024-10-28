//#include"head.h"
//
//struct ListNode {
//	int val;//值
//	ListNode* next;//下一个
//};
//ListNode* createList() {
//	ListNode* pHead=nullptr;
//	ListNode* pTemp = (ListNode*)malloc(sizeof(ListNode));
//	if (pHead==nullptr) {
//		pHead=pTemp ;
//	}
//	return pHead;
//}
//void endadd(ListNode* p, int add) {
//
//	while (p->next!=nullptr)
//	{
//		p = p->next;//遍历到下一个
//		ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//		p->next->val = add;
//	}
//
//}
//
//int main() {
//	
//	ListNode* p = createList();
//	
//	for (int i = 0; i < 7;i++) {
//		endadd(p, i);
//	}
//	
//	while (p->next!=nullptr) {
//		cout <<p->val << endl;
//	}
//
//}