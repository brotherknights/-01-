//#include"head.h"
////在同一个数组中 出现两个不同的数字只出现一次 其余数字都至少出现了两次
//
////1.异或
////2.找一个非零位
////3.分组 那个非零位 1 的一组 0的一组
////4.在分组中循环异或
//
//void finddifmath(int arr[],int nLength,int *an1,int*an2) {
//	
//	//1.循环异或
//	int res=0;
//	for (int i = 0; i < nLength;i++) {
//		
//		res^=arr[i] ;
//	}
//
//	//2.找到非零位 x和-x异或
//	res=res &(-res);
//
//	//3.分组 未与
//	*an1 = 0;
//	*an2 = 0;
//	for (int i = 0; i < nLength;i++) {
//		if ((arr[i]&res)!=0) {//非零
//			*an1 = *an1^arr[i];//异或
//		}
//		else {//零
//			*an2 = *an2^arr[i];
//		}
//
//	}
//	
//
//}
//int main() {
//	int arr[] = {10,5,6,2,3,4,10,5,6,2,3,4,8,9};
//	int an3=0;
//	int an4=0;
//	finddifmath(arr,sizeof(arr)/sizeof(arr[0]),&an3,&an4);
//	printf("%d,%d",an3,an4);
//
//}