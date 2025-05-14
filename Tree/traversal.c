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
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(struct Node *ptr)
{
    if(ptr==NULL)
        return;
    printf("%d ",ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
}

void inorder(struct Node *ptr)
{
    if(ptr==NULL)
        return;
    inorder(ptr->left);
    printf("%d ",ptr->data);
    inorder(ptr->right);
}

void postorder(struct Node* ptr)
{
    if(ptr==NULL)
        return;
    
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d ",ptr->data);
}

int main()
{
    struct Node *rootnode = createNode(10);
    struct Node *root1 = createNode(20);
    struct Node *root2 = createNode(30);
    struct Node *root3 = createNode(40);
    struct Node *root4 = createNode(50);
    struct Node *root5 = createNode(60);
    struct Node *root6 = createNode(70);
    struct Node *root7 = createNode(80);
    struct Node *root8 = createNode(90);
    struct Node *root9 = createNode(100);
    struct Node *root10 = createNode(110);

    rootnode->left = root1;
    rootnode->right = root2;
    root1->left = root3;
    root1->right = root4;
    root2->left = root5;
    root2->right = root6;
    root3->left = root7;
    root4->left = root8;
    root5->left = root9;
    root6->right = root10;

    printf("Preorder Traversal: ");
    preorder(rootnode);
    printf("\nInorder traversal: ");
    inorder(rootnode);
    printf("\nPostprder Traversal:");
    postorder(rootnode);

    return 0;
}
