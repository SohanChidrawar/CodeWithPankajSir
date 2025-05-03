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
};

void print(struct Node* START)
{
    struct Node* ptr = START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int main()
{
    //creating LL: 10->20->30->NULL
    struct Node* START;
    START = createnode(10);
    START->next = createnode(20);
    START->next->next = createnode(30);
    print(START);
}


