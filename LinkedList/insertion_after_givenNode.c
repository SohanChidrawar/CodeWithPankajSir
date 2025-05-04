#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* START = NULL;

struct Node *createNode(int key)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;
    return newNode;
};

void print()
{
    struct Node* ptr = START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insert_after_node(int key, struct Node** ptr)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = (*ptr)->next;
    (*ptr)->next = temp;
}

int main()
{
    //creating LL: 5->10->1->20->8
    START = createNode(5);
    START->next = createNode(10);
    START->next->next = createNode(1);
    START->next->next->next = createNode(20);
    START->next->next->next->next = createNode(8);

    int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("Original list:\n");
    print();

    struct Node* ptr = START;
    for(int i=1;i<=2;i++)
    {
        ptr = ptr->next;
    }

    insert_after_node(key,&ptr);

    printf("Updated list:\n");
    print();

    return 0;
}
