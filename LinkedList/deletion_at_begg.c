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
    struct Node* ptr;
    ptr = START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

void delete_at_begg()
{
    struct Node* ptr = START;
    if(START == NULL)
        return ;
    START = START->next;
    free(ptr);
}

int main()
{
    //create a LL 1->2->3->4->5->6->NULL
    START = createnode(1);
    START->next = createnode(2);
    START->next->next = createnode(3);
    START->next->next->next = createnode(4);
    START->next->next->next->next = createnode(5);
    START->next->next->next->next->next = createnode(6);

    printf("Original List: ");
    print();

    delete_at_begg();
    printf("\nUpdated List: ");
    print();

    return 0;
}
