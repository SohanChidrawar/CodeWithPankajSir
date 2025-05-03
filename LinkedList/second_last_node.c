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

void lastNode(struct Node* START)
{
    struct Node* ptr = START;
    if(START == NULL || START->next == NULL)  //LL is empty or contain just 1 node
        return;
    while(ptr->next->next!=NULL)
        ptr=ptr->next;
    printf("%d",ptr->data);
}

int main()
{
    //create a LL 10->20->30->40->50->60->NULL
    struct Node* START = createnode(10);
    START->next = createnode(20);
    START->next->next = createnode(30);
    START->next->next->next = createnode(40);
    START->next->next->next->next = createnode(50);
    START->next->next->next->next->next = createnode(60);

    lastNode(START);

    return 0;
}
