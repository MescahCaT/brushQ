//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
////����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����С��x�Ľ������������֮ǰ���Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
//
//struct ListNode 
//{
//    int val;
//    struct ListNode* next;
//    //ListNode(int x) : val(x), next(NULL) {}
//}a1,a2,a3,a4,a5,a6,a7; 
//
//struct ListNode* partition(struct ListNode* pHead, int x)
//{
//    struct ListNode* lesser_head, * lesser_tail, * larger_head, * larger_tail;
//    lesser_head = lesser_tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    larger_head = larger_tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    struct ListNode* cur = pHead;
//    while (cur)
//    {
//        if (cur->val >= x)
//        {
//            //��ŵ�larger��
//            larger_tail->next = cur;
//            larger_tail = larger_tail->next;
//        }
//        else
//        {
//            lesser_tail->next = cur;
//            lesser_tail = lesser_tail->next;
//        }
//        cur = cur->next;
//    }
//
//    larger_tail->next = NULL;
//    lesser_tail->next = larger_head->next;
//    pHead = lesser_head->next;
//    free(lesser_head);
//    free(larger_head);
//    return pHead;
//}
//
//
//
//int main()
//{
//    struct ListNode* pHead = NULL;
//    //a1.val = 1;
//    //a2.val = 7;
//    //a3.val = 9;
//    //a4.val = 4;
//    //a5.val = 2;
//    //a6.val = 6;
//    //a7.val = 3;
//
//    pHead = &a1;
//    a1.val = 1;
//    a2.val = 2;
//    a3.val = 3;
//    a4.val = 4;
//    a5.val = 5;
//
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = &a4;
//    a4.next = &a5;
//    a5.next = NULL;
//
//    //a6.next = &a7;
//    //a7.next = NULL;
//
//    struct ListNode* ret = partition(pHead, 5);
//    while (ret != NULL)
//    {
//        printf("%d->", ret->val);
//        ret = ret->next;
//    }
//    printf("NULL\n");
//
//	return 0;
//}