//#include"head.h"
////��ͬһ�������� ����������ͬ������ֻ����һ�� �������ֶ����ٳ���������
//
////1.���
////2.��һ������λ
////3.���� �Ǹ�����λ 1 ��һ�� 0��һ��
////4.�ڷ�����ѭ�����
//
//void finddifmath(int arr[],int nLength,int *an1,int*an2) {
//	
//	//1.ѭ�����
//	int res=0;
//	for (int i = 0; i < nLength;i++) {
//		
//		res^=arr[i] ;
//	}
//
//	//2.�ҵ�����λ x��-x���
//	res=res &(-res);
//
//	//3.���� δ��
//	*an1 = 0;
//	*an2 = 0;
//	for (int i = 0; i < nLength;i++) {
//		if ((arr[i]&res)!=0) {//����
//			*an1 = *an1^arr[i];//���
//		}
//		else {//��
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