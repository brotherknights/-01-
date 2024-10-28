//#include"head.h"
//#include<queue>
//
//int Yoserve(int n,int k) {
//	queue<int>q;
//	int count = 0;
//	for (int i = 0; i < count;i++) {//Ñ­»··ÅÈë
//		q.push(i);
//	}
//
//	while (q.size() > 1) {
//		int temp = q.front();
//		q.pop();
//		count++;
//
//		if (count==k) {
//			count = 0;
//		}
//		else {
//			q.push(temp);
//		}
//	}
//	return q.front();
//}