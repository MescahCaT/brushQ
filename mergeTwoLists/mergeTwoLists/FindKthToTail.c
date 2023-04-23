//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////输入一个链表，输出该链表中倒数第k个结点
//
//struct ListNode {
//    int val;
//    struct ListNode* next; 
//}a1,a2,a3,a4,a5;
//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//    // write code here
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//    for (int i = 0; i < k; i++)
//    {
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//    while (fast != NULL)
//    {
//        fast = fast->next;
//        slow = slow->next;
//        k--;
//    }
//
//    return slow;
//}
//
//int main()
//{
//    struct ListNode* phead = NULL;
//    a1.val = 1;
//    a2.val = 2;
//    a3.val = 3;
//    a4.val = 4;
//    a5.val = 5;
//    phead = &a1;
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = &a4;
//    a4.next = &a5;
//    a5.next = NULL;
//
//    printf("%d\n", FindKthToTail(phead, 1)->val);
//
//	return 0;
//}