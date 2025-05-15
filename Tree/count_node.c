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

int countNode(struct Node *root)
{
    if(root==NULL)
        return 0;

    return 1 + countNode(root->left) + countNode(root->right);
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

    int b = countNode(rootnode);
    printf("Number of node in tree is %d",b);
    return 0;

}
