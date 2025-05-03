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

int count(struct Node* START)
{
    struct Node* ptr = START;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

int main()
{
    //create a LL 1->2->3->4->5->6->NULL
    struct Node* START = createnode(1);
    START->next = createnode(2);
    START->next->next = createnode(3);
    START->next->next->next = createnode(4);
    START->next->next->next->next = createnode(5);
    START->next->next->next->next->next = createnode(6);
    
    printf("%d",count(START));
    return 0;
}
