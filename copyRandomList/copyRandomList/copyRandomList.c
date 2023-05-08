//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node 
//{
//    int val;
//    struct Node* next;
//    struct Node* random;    
//}a1,a2,a3,a4,a5,a6,a7,a8;
//
//
//struct Node* BuyNewNode(int n)
//{
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->val = n;
//    newnode->next = NULL;
//    newnode->random = NULL;
//    return newnode;
//}
//
//void SLNodepush_next(struct Node** pphead, int x)
//{
//    // 创建新结点
//    struct Node* newnode = BuyNewNode(x);
//
//    if (*pphead == NULL)
//    {
//        *pphead = newnode;
//    }
//    else
//    {
//        // 找尾
//        struct Node* tail = *pphead;
//        while (tail->next != NULL)
//        {
//            tail = tail->next;
//        }
//        tail->next = newnode;
//    }
//}
//
//void SLNodepush_random(struct Node* copy, struct Node* copyhead, struct Node* x,struct Node* phead)
//{
//    if (x == NULL)
//    {
//        return;
//    }
//
//    while (phead != x)
//    {
//        phead = phead->next;
//        copyhead = copyhead->next;
//    }
//    copy->random = copyhead;
//
//}
//
//struct Node* copyRandomList(struct Node* head)
//{
//    struct Node* cur = head;
//
//    struct Node* phead = NULL;
//    // next
//    while (cur)
//    {
//        SLNodepush_next(&phead, cur->val);
//        cur = cur->next;
//    }
//
//    // random
//    cur = head;
//    struct Node* tail = phead;
//    while (tail)
//    {
//         SLNodepush_random(tail,phead, cur->random, head);
//         cur = cur->next;
//         tail = tail->next;
//    }
//
//    return phead;
//}
//
//void test1()
//{
//    a1.val = 7;
//    a2.val = 13;
//    a3.val = 11;
//    a4.val = 10;
//    a5.val = 1;
//
//    struct Node* phead = &a1;
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = &a4;
//    a4.next = &a5;
//    a5.next = NULL;
//
//    // [[7,null],[13,0],[11,4],[10,2],[1,0]]
//    a1.random = NULL;
//    a2.random = &a1;
//    a3.random = &a5;
//    a4.random = &a3;
//    a5.random = &a1;
//
//    struct Node* CopyNode = copyRandomList(phead);
//
//
//}
//
//int  main()
//{
//    test1();
//
//
//    return;
//}