//#include<iostream>
//using namespace std;
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
//
//	cout << "����������" << n << "�������ֵ:";
//	for (int i = 0; i < n; i++) {
//		Node* temp = new Node;
//		cin >> temp->val;
//
//		pre->next = temp;
//		pre = temp;
//		temp->next = NULL;
//	}
//	return Head;
//}
//
////#��ʾ
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
//void ReversePrint(Node*pHead) {
//	if (pHead==nullptr) {
//		return;
//	}
//	//�ȱ��������һ���ڵ�
//	ReversePrint(pHead->next);
//	//��ӡ��ǰ�ڵ�
//	printf("%d",pHead->val);
//}
//
//int main() {
//	int nums;
//	cout << "����������ĳ���:";
//	cin >> nums;
//	Node* head = creatlist(nums);
//	display(head);
//	return 0;
//}
