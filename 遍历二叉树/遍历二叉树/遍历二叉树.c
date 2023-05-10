#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

typedef struct TreeNode
{
    char val;
    struct TreeNode* left;
    struct TreeNode* right;
}TNode;

void TreeBuild(TNode** pRoot, char** Pc)
{
    if (*(*Pc) == '#')
    {
        ++*Pc;
        return;
    }
    else
    {
        // ¿ª±Ù
        TNode* newnode = (TNode*)malloc(sizeof(TNode));
        newnode->left = NULL;
        newnode->right = NULL;
        *pRoot = newnode;

        newnode->val = **Pc;
        (*Pc)++;
        TreeBuild(&((*pRoot)->left), Pc);
        TreeBuild(&((*pRoot)->right), Pc);
    }
}

void inderpush(TNode* root)
{
    if (root == NULL)
    {
        printf("# ");
        return;
    }

    inderpush(root->left);
    printf("%c ", root->val);
    inderpush(root->right);
}

int main()
{
    char s[100];
    char* ps = s;
    scanf("%s", s);
    TNode* root = NULL;
    TreeBuild(&root, &ps);

    inderpush(root);

    return 0;
}

//  "abc##de#g##f###"