//#include"head.h"
//
////1.���ҳ�ƥ�䴮��next����
////2.��ʼԴ����ƥ�䴮�ıȽ�
//		//��1����� Դ��ȥ��һ�� 
//		//��2������� 
//				//<1>���ƥ�䴮�ڿ�ʼ�� Դ��ȥ��һ��
//				//<2>���ƥ�䴮���ڿ�ʼ�� ƥ�䴮��ȥN[ǰһ��]
//
//int* GetNext(const char*match) {
//    int* Next = (int*)malloc(sizeof(int)*strlen(match));
//    Next[0] = 0;
//    int i = 1;
//    int j = i - 1;
//
//    //����
//    while (i<strlen(match)) {
//        //�Ƚ�
//        if (match[i] == match[Next[i]]) {
//            Next[i]=Next[i]+1;
//
//            //������һ��λ��
//            i++;
//            j = i - 1;
//        }
//        else if(Next[j]==0) {
//            Next[i] = 0;
//            //������һ��λ��
//            i++;
//            j = i - 1;
//        }
//        else {
//            //���¶�λ�뵱ǰ�ַ��Ƚϵ�λ��
//            j = Next[j] - 1;
//        }
//    }
//    return Next;
//}
//
//int KMP(const char*src,const char*match) {
//    if (src==NULL||match==NULL) {
//        return -1;
//       
//    } 
//    //���next����
//        int* Next = NULL;
//        Next = GetNext(match);
//
//    //ƥ��
//        int i = 0;
//        int j = 0;
//        while (i<strlen(src)&&j<strlen(match)) {
//            //��
//            if (src[i]==match[j]) {
//                i++;
//                j++;
//            }else{
//            //ƥ�䴮�Ѿ�����ʼλ��
//                if (j == 0) {
//                    i++;
//                }
//                else {
//                    //ƥ�䴮��ת
//                    j = Next[j - 1];
//                }
//            }
//        }if (j==strlen(match)) {
//            return i - j;
//        }
//        else {
//            return -1;
//        }
//
//}
//
//int main(){
//    string s = "ABcbcbetrerqweda";
//    string z = "betrerqw";
//}
//
//
