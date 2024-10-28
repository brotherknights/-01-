#include"head.h"

struct ListNode {
	int val;
	ListNode* next;
};

ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
	ListNode* pNewHead;
	ListNode* pTail;
	//确定表头
	if (pHead1->val> pHead2->val) {
		pNewHead = pHead2;
		pTail = pHead2;
		pHead2 = pHead2->next;
	}
	else {
		pNewHead = pHead1;
		pTail = pHead1;
		pHead1 = pHead1->next;

	}
	//比较合并
	while (pHead1!=NULL&&pHead2!=NULL) {
		if (pHead2->val<pHead1->val) {
			pTail->next = pHead2;
			pTail = pHead2;
			pHead2 = pHead2->next;
		}else{
			pTail->next = pHead1;
			pTail = pHead1;
			pHead1 = pHead1->next;
		}
	}
	pTail->next = pHead1 ? pHead1 : pHead2;
	return pNewHead;
}