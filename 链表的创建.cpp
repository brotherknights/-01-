//#include"head.h"
////�����ڵ�ṹ
// struct ListNode {
//    int  val;//�洢����Ԫ��
//    struct ListNode* next;//ָ��ֱ�Ӻ��Ԫ�ص�ָ��
//};
////��������ĺ���
// ListNode* initLink() {
//     ListNode* p = (ListNode*)malloc(sizeof(ListNode));//����һ��ͷ���
//     ListNode* temp = p;//����һ��ָ��ָ��ͷ��㣬���ڱ�������
//    //��������
//    for (int i = 1; i < 5; i++) {
//        //�����ڵ㲢��ʼ��
//        ListNode* a = (ListNode*)malloc(sizeof(ListNode));
//        a->val = i;
//        a->next = NULL;
//        //�����½ڵ���ֱ��ǰ���ڵ���߼���ϵ
//        temp->next = a;
//        temp = temp->next;
//    }
//    return p;
//}
//
////pΪԭ����elem��ʾ������Ԫ�أ�add��ʾ��Ԫ��Ҫ�����λ��
// ListNode* insertElem(ListNode* p, int val, int add) {
//     ListNode* temp = p;//������ʱ���temp
//    //�����ҵ�Ҫ����λ�õ���һ�����
//    for (int i = 1; i < add; i++) {
//        temp = temp->next;
//        if (temp == NULL) {
//            printf("����λ����Ч\n");
//            return p;
//        }
//    }
//    //����������c
//    ListNode* c = (ListNode*)malloc(sizeof(ListNode));
//    c->val = val;
//    //�������в�����
//    c->next = temp->next;
//    temp->next = c;
//    return p;
//}