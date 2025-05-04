#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//struct Node* START = NULL;

struct Node *createNode(int key)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;
    return newNode;
};

void print(struct Node* START)
{
    struct Node* ptr = START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insert_at_begg(int key, struct Node** START)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp!=NULL)
    {
        temp->data  = key;
        temp->next = *START;
        *START = temp;
    }
}

int main()
{
    //creating LL: 5->10->1->20->8
    struct Node *START;
    START = createNode(5);
    START->next = createNode(10);
    START->next->next = createNode(1);
    START->next->next->next = createNode(20);
    START->next->next->next->next = createNode(8);
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("Original list:\n");
    print(START);

    insert_at_begg(key,&START);

    printf("Updated list:\n");
    print(START);

    return 0;
}
