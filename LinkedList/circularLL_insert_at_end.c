#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(int key)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;
    return newNode;
}

void insert_at_end(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;

    if(head==NULL)
    {
        head = node;
        node->next = head;
        return;
    }

    struct Node *temp = head;
    while(temp->next!=head)
        temp = temp->next;
    
    temp->next = node;
    node->next = head;
        
}

void print()
{
    if(head==NULL)
        return;

    struct Node *temp = head;
    do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    } while (temp!=head);
    
    printf("\n");
}

int main()
{
    struct Node *first = createNode(10);
    struct Node *second = createNode(20);
    struct Node *third = createNode(30);
    struct Node *fourth = createNode(40);
    struct Node *fifth = createNode(50);
    head=first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = first;

    print();
    int num;
    printf("Enter the number to inserted:");
    scanf("%d",&num);
    insert_at_end(num);
    print();

    return 0;

}
