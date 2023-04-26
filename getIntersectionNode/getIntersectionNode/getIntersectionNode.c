#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode 
{
    int val;
    struct ListNode* next;
}a1,a2,b1,b2,b3,c1,c2,c3;

struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{

    struct ListNode* curA = headA;
    struct ListNode* curB = headB;
    while (curA != NULL || curB != NULL)
    {
        if (curA == curB)
            return curA;
        if (curA == NULL && curB != NULL)
        {
            curA = headB;
            curB = curB->next;
            continue;
        }
        if (curB == NULL && curA != NULL)
        {
            curB = headA;
            curA = curA->next;
            continue;
        }
        curA = curA->next;
        curB = curB->next;
    }
    return NULL;
}

void test1()
{
    struct ListNode* pheadA = NULL;
    struct ListNode* pheadB = NULL;

    c1.val = 8;
    c2.val = 4;
    c3.val = 5;
    c1.next = &c2;
    c2.next = &c3;
    c3.next = NULL;

    a1.val = 4;
    a2.val = 1;
    a1.next = &a2;
    a2.next = &c1;

    b1.val = 5;
    b2.val = 6;
    b3.val = 1;
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &c1;

    pheadA = &a1;
    pheadB = &b1;

    struct ListNode* ret = getIntersectionNode(pheadA, pheadB);
    if (ret != NULL)
        printf("Intersected at '%d'\n", ret->val);
    else
        printf("No intersection!");
    return;
}

void test2()
{
    struct ListNode* pheadA = NULL;
    struct ListNode* pheadB = NULL;

    c1.val = 3;
    c1.next = NULL;

    b1.val = 2;
    b1.next = &c1;

    pheadA = &c1;
    pheadB = &b1;

    struct ListNode* ret = getIntersectionNode(pheadA, pheadB);
    if (ret != NULL)
        printf("Intersected at '%d'\n", ret->val);
    else
        printf("No intersection!");


    return;
}

int main()
{
    //test1();
    test2();

	return 0;
}
