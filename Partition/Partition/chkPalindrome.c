#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
}a1,a2,a3,a4,a5;

struct ListNode* FindMiddle(struct ListNode* phead)
{
    struct ListNode* fast = phead;
    struct ListNode* slow = phead;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

struct ListNode* ReverseList(struct ListNode* plist)
{
    struct ListNode* cur = NULL;
    struct ListNode* tail = plist;
    while (tail != NULL)
    {
        struct ListNode* next = tail->next;
        tail->next = cur;
        cur = tail;
        tail = next;
    }
    return cur;

}

bool chkPalindrome(struct ListNode* phead)
{
    // write code here
    // 找到中间结点
    struct ListNode* middle = FindMiddle(phead);
    // 旋转
    struct ListNode* reverse_latter_half = ReverseList(middle);

    // 比对
    while (reverse_latter_half && phead != middle)
    {
        if (reverse_latter_half->val != phead->val)
        {
            return false;
        }
        reverse_latter_half = reverse_latter_half->next;
        phead = phead->next;
    }
    return true;
}

int main()
{
    struct ListNode* phead = NULL;
    a1.val = 1;
    a2.val = 2;
    a3.val = 3;
    a4.val = 2;
    a5.val = 1;

    phead = &a1;
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    a5.next = NULL;

    if (chkPalindrome)
        printf("It is a palindromic number!\n");
    else
        printf("It is not a palindromic number!\n");


    //struct ListNode* cur = phead;
    //while (cur != NULL)
    //{
    //    printf("%d->", cur->val);
    //    cur = cur->next;
    //}
    //printf("NULL\n");



    return 0;
}