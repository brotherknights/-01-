//#include"head.h"
//
//struct Node {
//	int val;
//	Node* next;
//};
//
////#����
//Node* creatlist(int n) {
//	Node* Head = new Node;    //ͷ�ڵ� ���洢����
//	Head->next = NULL;
//	Node* pre = Head;  //ָ����һ���ڵ�Ĺ���ֵ
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
//		//ͷ��
//		Take->next=NewHead;
//
//		//���±�Ƕ���
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
//	cout << "������ı�������Ϊ��";
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
//	cout << "����������ĳ���:";
//	cin >> nums;
//	Node* head = creatlist(nums);
//	rollback(head);
//	display(head);
//
//	return 0;
//}