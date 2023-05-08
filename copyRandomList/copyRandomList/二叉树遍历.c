//#define _CRT_SECURE_NO_WARNINGS 1
//// https://leetcode.cn/problems/binary-tree-preorder-traversal/submissions/
//
//#include<stdio.h>
//#include<stdlib.h>
//
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//}a1,a2,a3,a4,a5,a6,a7,a8;
//
//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PreOrderPush(struct TreeNode* root, int* array, int* pi)
//{
//    if (root == NULL)
//        return;
//
//    array[(*pi)++] = root->val;
//    PreOrderPush(root->left, array, pi);
//    PreOrderPush(root->right, array, pi);
//
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    if (root == NULL)
//        return NULL;
//
//    // ด๓ะก
//    *returnSize = TreeSize(root);
//    int* ret = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//
//    PreOrderPush(root, ret, &i);
//
//    return ret;
//}
//
//void test1()
//{
//    a1.val = 1;
//    a2.val = 2;
//    a3.val = 3;
//
//    struct TreeNode* root = &a1;
//    a1.left = NULL;
//    a1.right = &a2;
//    a2.left = NULL;
//    a2.right = &a3;
//    a3.left = NULL;
//    a3.right = NULL;
//
//    int returnSize = 0;
//    int* ret = preorderTraversal(&a1,&returnSize);
//
//
//}
//
//int main()
//{
//    test1();
//
//    return 0;
//}