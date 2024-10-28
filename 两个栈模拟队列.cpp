//#include"head.h"
//#include<stack>
//
//void Push(stack<int>&s1,stack<int>&s2,int Num){
//while (!s2.empty()) {
//	s1.push(s2.top());
//	s2.pop();
//}
////新元素入栈
//s1.push(Num);
//}
//
//void Pop(stack<int>& s1, stack<int>& s2) {
//	if (s1.empty()&&s2.empty()) {
//		return;
//	}
//	//栈1非空 
//	while (!s1.empty()) {
//		s2.push(s1.top());
//		s1.pop();
//	}
//	//栈2弹出
//	cout << s2.top() << endl;
//	s2.pop();
//}
//
//
//int main() {
//
//}