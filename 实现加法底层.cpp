//#include"head.h"
//
//int Myadd(int a,int b) {
//	int res1=0;
//	int res2=0;
//	res1 = a ^ b;
//	res2 = a & b;
//	while (1) {
//		res1 ^= res2;
//		res2 &= res1;
//		res2 =res2<< 1;
//		if (res2==0) {
//			return res1;
//			break;
//		}
//	}
//}
//
//
//int main() {
//	int res=Myadd(3,4);
//	printf("%d", res);
//	return 0;
//}
