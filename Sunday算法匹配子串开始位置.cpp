//#include"head.h"
//
////next�������
//
////map<int,int> Caculate(const char* match) {
////	map<int, int>*Next = (map<int, int>*)malloc(256);
////	for (int i = 0; i < 256;i++) {
////		Next->insert();//����ֵ-1��
////	}
////	//����
////}
//
////ƥ��
//int Sunday(const char* src,const char* match) {
//	if (src==NULL||match==NULL) {
//		return -1;
//	}
//	int *Next= (int*)malloc(sizeof(int)*256);
//	memset(Next,-1,sizeof(int)*256);
//
//	int i = 0;
//	for (i; i < strlen(match); i++) {
//		Next[match[i]]=i;
//	}
//	int j = 0;
//	int temp;//���ͷ��ָ��
//	while (i<=strlen(src)&&j<=strlen(match)) {
//		if (src[i]==match[j]) {
//			//���
//			temp = i;
//			i++;
//			j++;
//		}
//		else {
//			//�����
//			i = temp + strlen(match) -Next[src[temp+strlen(match)]];
//			j = 0;
//		}
//	}
//		
//}
//
//
//int main(){
//
//}