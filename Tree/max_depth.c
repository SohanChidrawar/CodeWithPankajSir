//Given the root of a binary tree, return its maximum depth.

//A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *createNode(int key)
{
    struct tree *newnode = (struct tree*)malloc(sizeof(struct tree));
    newnode->data = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int maxdepth(struct tree *root)
{
    if(root == NULL)
        return 0;
    
    int left = maxdepth(root->left);
    int right = maxdepth(root->right);

    int a = left>right ? left:right;

    return 1+a;
}

int main()
{
    struct tree *rootnode = createNode(10);
    struct tree *firstnode = createNode(20);
    struct tree *secondnode = createNode(30);
    struct tree *thirdnode = createNode(40);
    struct tree *fourthnode = createNode(50);

    rootnode->left = firstnode;
    rootnode->right = secondnode;
    firstnode->left = thirdnode;
    secondnode->left = fourthnode;

    int b = maxdepth(rootnode);
    printf("Maximum depth of tree is %d",b);
    return 0;

}
