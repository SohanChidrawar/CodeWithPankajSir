#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* START=NULL;
struct Node* head=NULL;

struct Node* createnode(int key)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = key;
    newnode->next = NULL;
    return newnode;
    
}

void print(struct Node* begin)
{
    struct Node* ptr = begin;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void merge_LL()
{
    struct Node* last, *first;
    struct Node* a = START;
    struct Node* b = head;
    if(a->data < b->data)
    {
        last = first = a;
        a = a->next;
    }
    else
    {
        last = first = b;
        b = b->next;
    }

    while(a!=NULL && b!=NULL)
    {
        if(a->data < b->data)
        {
            last->next = a;
            last = a;
            a = a->next;
        }
        else
        {
            last->next = b;
            last = b;
            b = b->next;
        }
    }
    if(a!=NULL)
        last->next = a;
    else
        last->next = b;
    printf("MergedLL: ");
    return print(first);
}

int main()
{
    //create a LL with START 1->2->3->4->5->6->NULL
    START = createnode(1);
    START->next = createnode(3);
    START->next->next = createnode(5);
    START->next->next->next = createnode(7);
    START->next->next->next->next = createnode(9);
    START->next->next->next->next->next = createnode(11);
    printf("1st LL: ");
    print(START);

    //create a LL with head
    head = createnode(2);
    head->next = createnode(4);
    head->next->next = createnode(6);
    head->next->next->next = createnode(8);
    head->next->next->next->next = createnode(10);
    printf("2nd LL: ");
    print(head);

    merge_LL();

    return 0;
}
