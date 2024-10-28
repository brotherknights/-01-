//#include"head.h"
//
//struct Node {
//	int val;
//	Node* next;
//};
//
////#创建
//Node* creatlist(int n) {
//	Node* Head = new Node;    //头节点 不存储数据
//	Head->next = NULL;
//	Node* pre = Head;  //指向下一个节点的过渡值
//
//	for (int i = 0; i < n; i++) {
//		Node* temp = new Node;
//		 temp->val=i;
//
//		pre->next = temp;
//		pre = temp;
//		temp->next = NULL;
//	}
//	return Head;
//}
//
//Node* rollback(Node*pHead) {
//	if (pHead==nullptr||pHead->next==nullptr) {
//		return pHead;
//	}
//	Node* NewHead = nullptr;
//	Node* Take = pHead;
//	Node* Break = pHead->next;
//
//	while (Break!=nullptr) {
//
//		//头插
//		Take->next=NewHead;
//
//		//更新标记对象
//		NewHead = Take;
//		Take=Break;
//		Break = Break->next;
//		return NewHead;
//	}
//	
//
//}
//
//void display(Node* head) {
//	Node* temp = head->next;
//	int e;
//	cout << "该链表的遍历依次为：";
//	while (temp != NULL) {
//		e = temp->val;
//		cout << e << " ";
//		temp = temp->next;
//	}
//	cout << "\n";
//}
//
//int main() {
//	int nums;
//	cout << "请输入链表的长度:";
//	cin >> nums;
//	Node* head = creatlist(nums);
//	rollback(head);
//	display(head);
//
//	return 0;
//}