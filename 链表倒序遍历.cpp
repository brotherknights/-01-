//#include<iostream>
//using namespace std;
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
//
//	cout << "请依次输入" << n << "个链表的值:";
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
////#显示
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
//void ReversePrint(Node*pHead) {
//	if (pHead==nullptr) {
//		return;
//	}
//	//先遍历到最后一个节点
//	ReversePrint(pHead->next);
//	//打印当前节点
//	printf("%d",pHead->val);
//}
//
//int main() {
//	int nums;
//	cout << "请输入链表的长度:";
//	cin >> nums;
//	Node* head = creatlist(nums);
//	display(head);
//	return 0;
//}
