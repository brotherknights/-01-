//#include"head.h"
//
////1.Reverse 翻转整体
////2.单词翻转
////找到第一个非空格 标记 
////找到下一个空格或者'\0' 标记
////反转单词 交换
//
//void Reverse(char* str,int begin,int end) {//实现翻转整体
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
//	Reverse(str,0,strlen(str)-1);//整体翻转
//	//单词翻转
//	int i = 0;//用来过滤空格的 实际单词的头
//	int j;// 空格的最后 尾
//	while (i<strlen(str)) {
//		//过滤空格
//		while (str[i]==' ') {
//			i++;
//		}
//		j = i;//从非空格处开始 找到下一个空格
//		while (str[j]!=' '&&str[j]!='\0') {
//			j++;
//		}
//		Reverse(str,i,j-1);
//
//		//翻转完一个单词之后重置
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