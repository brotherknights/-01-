//#include"head.h"
////声明节点结构
// struct ListNode {
//    int  val;//存储整形元素
//    struct ListNode* next;//指向直接后继元素的指针
//};
////创建链表的函数
// ListNode* initLink() {
//     ListNode* p = (ListNode*)malloc(sizeof(ListNode));//创建一个头结点
//     ListNode* temp = p;//声明一个指针指向头结点，用于遍历链表
//    //生成链表
//    for (int i = 1; i < 5; i++) {
//        //创建节点并初始化
//        ListNode* a = (ListNode*)malloc(sizeof(ListNode));
//        a->val = i;
//        a->next = NULL;
//        //建立新节点与直接前驱节点的逻辑关系
//        temp->next = a;
//        temp = temp->next;
//    }
//    return p;
//}
//
////p为原链表，elem表示新数据元素，add表示新元素要插入的位置
// ListNode* insertElem(ListNode* p, int val, int add) {
//     ListNode* temp = p;//创建临时结点temp
//    //首先找到要插入位置的上一个结点
//    for (int i = 1; i < add; i++) {
//        temp = temp->next;
//        if (temp == NULL) {
//            printf("插入位置无效\n");
//            return p;
//        }
//    }
//    //创建插入结点c
//    ListNode* c = (ListNode*)malloc(sizeof(ListNode));
//    c->val = val;
//    //向链表中插入结点
//    c->next = temp->next;
//    temp->next = c;
//    return p;
//}