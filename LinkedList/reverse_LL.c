#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* START = NULL;

struct Node* createNode(int key)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;
    return newNode;
}

int print(struct Node* head)
{
    struct Node* ptr = head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int reverse_LL()
{
    struct Node* prev, *curr, *nex;
    
    if(START == NULL || START->next == NULL)
        return 0;
    prev = NULL;
    curr = START;
    while(curr!=NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    printf("Reverse LL: ");
    return print(prev);
}

int main()
{
    // create a LL: 5->7->0->9->14->4;
    START = createNode(5); 
    START->next = createNode(7);
    START->next->next = createNode(0);
    START->next->next->next = createNode(9);
    START->next->next->next->next = createNode(14);
    START->next->next->next->next->next = createNode(4);

    printf("Original LL: ");
    print(START);

    reverse_LL();

    return 0;
}
