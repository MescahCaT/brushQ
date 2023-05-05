#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode 
{
    int val;
    struct ListNode* next;
}a1,a2,a3,a4;

struct ListNode* detectCycle(struct ListNode* head)
{
    // 一个从链表头开始 ， 一个从相遇点开始，最终会在环的入口相遇
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        // 找到了相遇的结点
        if (fast == slow)
        {
            struct ListNode* meet = fast;
            while (1)
            {
                if (meet == head)
                {
                    return meet;
                }
                meet = meet->next;
                head = head->next;
            }
        }
    }
    return NULL;
}

void test1()
{

    struct ListNode* head = &a1;
    a1.val = 1;
    //a2.val = 2;
    //a3.val = 0;
    //a4.val = 4;
    a1.next = NULL;
    ////a2.next = &a1;
    //a2.next = &a3;
    //a3.next = &a4;
    //a4.next = &a2;

    struct ListNode* ret = detectCycle(head);
    if (ret)
        printf("%d\n", ret->val);
    else
        printf("链表中没有环\n");
}


int main()
{
	test1();

	return 0;
}
