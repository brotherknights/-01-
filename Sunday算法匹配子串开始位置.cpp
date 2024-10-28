//#include"head.h"
//
////next数组计算
//
////map<int,int> Caculate(const char* match) {
////	map<int, int>*Next = (map<int, int>*)malloc(256);
////	for (int i = 0; i < 256;i++) {
////		Next->insert();//赋初值-1；
////	}
////	//遍历
////}
//
////匹配
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
//	int temp;//标记头的指针
//	while (i<=strlen(src)&&j<=strlen(match)) {
//		if (src[i]==match[j]) {
//			//相等
//			temp = i;
//			i++;
//			j++;
//		}
//		else {
//			//不相等
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