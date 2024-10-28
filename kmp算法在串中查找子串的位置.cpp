//#include"head.h"
//
////1.先找出匹配串的next数组
////2.开始源串和匹配串的比较
//		//（1）相等 源串去下一个 
//		//（2）不相等 
//				//<1>如果匹配串在开始处 源串去下一个
//				//<2>如果匹配串不在开始处 匹配串跳去N[前一个]
//
//int* GetNext(const char*match) {
//    int* Next = (int*)malloc(sizeof(int)*strlen(match));
//    Next[0] = 0;
//    int i = 1;
//    int j = i - 1;
//
//    //计算
//    while (i<strlen(match)) {
//        //比较
//        if (match[i] == match[Next[i]]) {
//            Next[i]=Next[i]+1;
//
//            //计算下一个位置
//            i++;
//            j = i - 1;
//        }
//        else if(Next[j]==0) {
//            Next[i] = 0;
//            //计算下一个位置
//            i++;
//            j = i - 1;
//        }
//        else {
//            //重新定位与当前字符比较的位置
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
//    //获得next数组
//        int* Next = NULL;
//        Next = GetNext(match);
//
//    //匹配
//        int i = 0;
//        int j = 0;
//        while (i<strlen(src)&&j<strlen(match)) {
//            //等
//            if (src[i]==match[j]) {
//                i++;
//                j++;
//            }else{
//            //匹配串已经在起始位置
//                if (j == 0) {
//                    i++;
//                }
//                else {
//                    //匹配串跳转
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
