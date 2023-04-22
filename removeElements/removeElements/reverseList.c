#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


struct ListNode
{
    int val;
    struct ListNode* next;    
}n1;


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = NULL;
    struct ListNode* prev = head;
    while (prev != NULL)
    {
        struct ListNode* tmp = prev;
        prev = prev->next;
        tmp->next = cur;
        cur = tmp;
    }
    head = cur;


    return cur;
}

int main()
{
    struct ListNode* p = &n1;
    n1.val = 1;
    n1.next = NULL;

    reverseList(p);
    while (p != NULL)
    {
        printf("%d->", p->val);
        p = p->next;
    }
    printf("NULL\n");
        
	return 0;
}