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

void alternate_node(struct Node* START)
{
    struct Node* ptr=START;
    int count = 1;
    while(ptr!=NULL)
    {
        if(count%2==1)
            printf("%d->",ptr->data);
        count++;
        ptr = ptr->next;
    }
}

int main()
{
    //create a LL 1->2->3->4->5->6->NULL
    struct Node* START = createnode(1);
    START->next = createnode(2);
    START->next->next = createnode(3);
    START->next->next->next = createnode(4);
    // START->next->next->next->next = createnode(5);
    // START->next->next->next->next->next = createnode(6);

    alternate_node(START);

    return 0;
}
