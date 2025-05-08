#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int data;
    struct Stack *next;
};

struct Stack *head = NULL;

struct Stack *createNode(int key)
{
    struct Stack *newnode = (struct Stack *)malloc(sizeof(struct Stack));
    newnode->data = key;
    newnode->next = NULL;
    return newnode;
}

struct Stack *push(struct Stack **head, int key)
{
    struct Stack *temp = (struct Stack *)malloc(sizeof(struct Stack));
    temp->data = key;
    temp->next = *head;
    *head = temp;
    return *head;
}

void print(struct Stack *head)
{
    struct Stack *temp = head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void pop(struct Stack **head)
{
    struct Stack *temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main()
{
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    printf("Original LL: ");
    print(head);
    push(&head,50);
    push(&head,60);
    push(&head,70);
    printf("LL after push: ");
    print(head);
    pop(&head);
    pop(&head);
    printf("LL after pop: ");
    print(head);

    return 0;
}
