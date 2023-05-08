#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}a1, a2, a3, a4, a5, a6, a7, a8;;
 


bool isUnivalTree(struct TreeNode* root)
{
    if (root == NULL)
        return true;

    if ( root->left && root->val != root->left->val)
        return false;

    if ( root->right && root->val != root->right->val )
        return false;

    return isUnivalTree(root->left) && isUnivalTree(root->right);
}

void test1()
{
    a1.val = 1;
    a2.val = 1;
    a3.val = 1;
    a4.val = 1;
    a5.val = 1;
    a6.val = 1;

    struct TreeNode* root = &a1;
    a1.left = &a2;
    a1.right = &a3;
    a2.left = &a4;
    a2.right = &a5;
    a3.left = NULL;
    a3.right = &a6;
    a5.left = NULL;
    a5.right = NULL;
    a4.left = NULL;
    a4.right = NULL;
    a6.left = NULL;
    a6.right = NULL;

    if (isUnivalTree(root))
    {
        printf("yes\n");
    }
    else
        printf("NO!\n");
}

int main()
{
    test1();

    return 0;
}