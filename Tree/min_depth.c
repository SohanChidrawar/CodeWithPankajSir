// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

// Note: A leaf is a node with no children.

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};

struct Node *createNode(int key)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int min_depth(struct Node *root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL)
        return 1 + min_depth(root->right);
    else if (root->right==NULL)
        return 1 + min_depth(root->left);

    int left = min_depth(root->left);
    int right = min_depth(root->right);

    int a = left>right ? right:left;

    return 1+a;
}

int main()
{
    struct Node *rootnode = createNode(10);
    struct Node *firstnode = createNode(20);
    struct Node *secondnode = createNode(30);
    struct Node *thirdnode = createNode(40);
    struct Node *fourthnode = createNode(50);
    struct Node *fifthnode = createNode(60);

    rootnode->left = firstnode;
    rootnode->right = secondnode;
    firstnode->left = thirdnode;
    secondnode->left = fourthnode;
    thirdnode->right = fifthnode;

    int b = min_depth(rootnode);
    printf("Minimum depth of tree is %d",b);
    return 0;

}
