//#include"head.h"
//
////1.Reverse ��ת����
////2.���ʷ�ת
////�ҵ���һ���ǿո� ��� 
////�ҵ���һ���ո����'\0' ���
////��ת���� ����
//
//void Reverse(char* str,int begin,int end) {//ʵ�ַ�ת����
//	while (begin<end) {
//		str[begin] = str[begin] ^ str[end];
//		str[end] = str[begin] ^ str[end];
//		str[begin] = str[begin] ^ str[end];
//		begin++;
//		end--;
//	}
//	
//
//}
//void ReverseString(char* str){
//	if (str==NULL) {
//		return;
//	}
//	Reverse(str,0,strlen(str)-1);//���巭ת
//	//���ʷ�ת
//	int i = 0;//�������˿ո�� ʵ�ʵ��ʵ�ͷ
//	int j;// �ո����� β
//	while (i<strlen(str)) {
//		//���˿ո�
//		while (str[i]==' ') {
//			i++;
//		}
//		j = i;//�ӷǿո񴦿�ʼ �ҵ���һ���ո�
//		while (str[j]!=' '&&str[j]!='\0') {
//			j++;
//		}
//		Reverse(str,i,j-1);
//
//		//��ת��һ������֮������
//		i = j;
//	}
//}
//
//int main() {
//	char str[] = "Here to you";
//	ReverseString(str);
//	printf("%s",str);
//
//}