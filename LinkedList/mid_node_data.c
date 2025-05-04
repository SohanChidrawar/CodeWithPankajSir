#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* START = NULL;

struct Node* createnode(int key)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = key;
    newnode->next = NULL;
    return newnode;    
}

void print()
{
    struct Node* ptr = START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

void mid_node()
{
    struct Node* ptr = START;
    int count = 0;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    count = count/2;
    ptr = START;
    for(int i=1;i<=count;i++)
        ptr = ptr->next;
    printf("\n%d",ptr->data);
}

int main()
{
    //create a LL 1->2->3->4->5->6->NULL
    START = createnode(1);
    START->next = createnode(2);
    START->next->next = createnode(3);
    START->next->next->next = createnode(4);
    START->next->next->next->next = createnode(5);
    // START->next->next->next->next->next = createnode(6);

    printf("Original LL: ");
    print();

    mid_node();

    return 0;
}
