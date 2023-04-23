//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
// struct ListNode 
// {
//    int val;
//    struct ListNode* next;   
//}a1,a2,a3,b1,b2,b3;
//
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//        return list1;
//    struct ListNode* ret = NULL;
//    int flag = 1;
//    struct ListNode* tail = NULL;
//    while (list1 != NULL && list2 != NULL)
//    {
//        if (list1->val >= list2->val)
//        {
//            if (flag)
//            {
//                ret = list2;
//                flag = 0;
//                list2 = list2->next;
//                tail = ret;
//                continue;
//            }
//            tail->next = list2;
//            tail = list2;
//            list2 = list2->next;
//        }
//        else
//        {
//            if (flag)
//            {
//                ret = list1;
//                flag = 0;
//                list1 = list1->next;
//                tail = ret;
//                continue;
//            }
//            tail->next = list1;
//            tail = list1;
//            list1 = list1->next;
//        }
//    }
//    if (list1 == NULL)
//    {
//        tail->next = list2;
//    }
//    else if (list2 == NULL)
//    {
//        tail->next = list1;
//    }
//
//    return ret;
//}
//
//int main()
//{
//    //[1, 2, 4]
//    //[1, 3, 4]
//
//    a1.val = 1;
//    a2.val = 2;
//    a3.val = 4;
//
//    b1.val = 1;
//    b2.val = 3;
//    b3.val = 4;
//    struct ListNode* p1 = &a1;
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = NULL;
//    struct ListNode* p2 = &b1;
//    b1.next = &b2;
//    b2.next = &b3;
//    b3.next = NULL;
//
//    struct ListNode* ret = mergeTwoLists(p1, p2);
//    while (ret != NULL)
//    {
//        printf("%d->", ret->val);
//        ret = ret->next;
//    }
//    printf("NULL\n");
//
//	return 0;
//}