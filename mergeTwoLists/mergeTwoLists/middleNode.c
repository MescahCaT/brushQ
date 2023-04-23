#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���㵥�����ͷ��� head �������ҳ�������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣

 struct ListNode 
 {
    int val;
    struct ListNode* next;
}a1, a2, a3, a4, a5;

struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}


int main()
{
    struct ListNode* phead = NULL;
    a1.val = 1;
    a2.val = 2;
    a3.val = 3;
    a4.val = 4;
    a5.val = 5;
    phead = &a1;
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    a5.next = NULL;

    printf("%d\n", middleNode(phead)->val);

	return 0;
}