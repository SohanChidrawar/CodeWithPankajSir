#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* createnode(int key)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = key;
    newnode->next = NULL;
    return newnode;
    
}

void alternateNode(struct Node* START)
{
    struct Node* ptr = START;
    while(ptr!=NULL && ptr->next!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next->next;
    }
    if(ptr==NULL)
        return;
    if(ptr->next==NULL)
        printf("%d",ptr->data);
}

int main()
{
    //create a LL 1->2->3->4->5->NULL
    struct Node* START = createnode(1);
    START->next = createnode(2);
    START->next->next = createnode(3);
    START->next->next->next = createnode(4);
    START->next->next->next->next = createnode(5);
    // START->next->next->next->next->next = createnode(6);

    alternateNode(START);
    return 0;
}
