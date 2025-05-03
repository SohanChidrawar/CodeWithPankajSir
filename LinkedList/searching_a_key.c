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

int search(struct Node* START,int key)
{
    struct Node* ptr=START;
    while(ptr!=NULL)
    {
        if(ptr->data == key)
            return 1;
        ptr = ptr->next;
    }
    return 0;

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
    int key,ans;
    printf("Enter the key to search: ");
    scanf("%d",&key);
    ans = search(START,key);
    if(ans==1)
        printf("%d found in LL",key);
    else
        printf("%d not found in LL",key);

    return 0;
}
