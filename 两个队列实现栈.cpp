//#include"head.h"
//#include<queue>
//
//void push(queue<int>&l1, queue<int>&l2, int num) {
//	if (!l1.empty()) {//直接push进一个非空的队列
//		l1.push(num);
//	}
//	else {
//		l2.push(num);
//	}
//}
//
//void pop(queue<int>&l1, queue<int>&l2) {
//	if (l1.empty()&& l2.empty()) {
//		return;
//	}
//	if (!l1.empty()) {//非空队列除尾以外 插入另外一个队 队尾弹出
//		while (l1.size()>1) {
//			l2.push(l1.front());
//			l1.pop();
//		}
//		cout << l1.front() << endl;
//		l1.pop();
//	}
//	else {
//		while (l2.size() > 1) {
//			l1.push(l2.front());
//			l2.pop();
//		}
//		cout << l2.front() << endl;
//		l2.pop();
//		
//	}
//}
//
//int main() {
//	queue<int>l1;
//	queue<int>l2;
//	push(l1,l2,10);
//	push(l1, l2, 12);
//	push(l1, l2, 14);
//	pop(l1, l2);
//	pop(l1, l2);
//	pop(l1, l2);
//
//
//
//}