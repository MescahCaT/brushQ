//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
// struct ListNode
//{
//    int val;
//    struct ListNode* next;
//}n1,n2,n3,n4,n5,n6,n7;
//
//
//
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* ret = NULL;
//    struct ListNode* cur = head;
//    struct ListNode* tmp = head;   // 保存
//    int flag = 1;
//    while (cur != NULL)
//    {
//        if (cur->val != val)                 // cur->val不等于val时，将其放入ret中
//        {
//            if (flag)
//            {
//                flag = 0;
//                ret = cur;
//                tmp = cur;
//            }
//            else
//            {
//                // 
//                tmp->next = cur;
//                tmp = cur;
//            }
//        }
//        else
//        {
//            if (cur->next == NULL)
//            {
//                tmp->next = NULL;
//            }
//        }
//
//        cur = cur->next;
//    }
//
//    return ret;
//
//}
//
//int main()
//{
//    n1.val = 7;
//    n2.val = 7;
//    n3.val = 7;
//    n4.val = 7;
//    //n5.val = 4;
//    //n6.val = 5;
//    //n7.val = 6;
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = NULL;
//    ////n5.next = &n6;
//    ////n6.next = &n7;
//    //n7.next = NULL;
//
//    struct ListNode* p = removeElements(&n1, 7);
//    while (p != NULL)
//    {
//        printf("%d->", p->val);
//        p = p->next;
//    }
//    printf("NULL\n");
//
//
//	return 0;
//}