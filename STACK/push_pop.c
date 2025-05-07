#include <stdio.h>
#include <stdlib.h>
#define SIZE 10;

struct STACK
{
    int array[10];
    int top;
};

void PUSH(struct STACK *ps, int key)
{
    if(ps->top == 9)
        return;
    ps->top = ps->top + 1;
    ps->array[ps->top] = key;
    printf("PUSH: ");
    printf("%d\n",ps->array[ps->top]);
}

void POP(struct STACK *ps)
{
    if(ps->top < 0)
        return;
    int temp = ps->array[ps->top];
    ps->top = ps->top - 1;
    printf("POP:");
    printf("%d\n",temp);
}

void print(struct STACK *ps)
{
    if(ps->top < 0)
        printf("Stack is empty");
    for(int i = ps->top;i>=0;i--)
    {
        printf("%d ",ps->array[i]);
    }
}

int main()
{
    struct STACK s1;
    s1.top = -1;
    PUSH(&s1,10);
    PUSH(&s1,20);
    PUSH(&s1,30);
    POP(&s1);
    PUSH(&s1,40);
    PUSH(&s1,50);
    POP(&s1);
    POP(&s1);
    PUSH(&s1,60);
    //printf("\n");
    printf("Element present in stack:");
    print(&s1);
    return 0;
}
