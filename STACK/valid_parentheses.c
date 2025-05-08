#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct Stack
{
    char array[SIZE];
    int top;
};
void push(struct Stack *s1, char c)
{
    if(s1->top == SIZE -1)
        return;
    s1->top += 1;
    s1->array[s1->top] = c;
}
void pop(struct Stack *s1)
{
    if(s1->top == -1)
        return;
    char temp = s1->array[s1->top];
    s1->top -= 1; 
}
int balanced(char *exp)
{
    struct Stack s;
    s.top = -1;

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(&s,exp[i]);
        else
            if(s.top == -1)
                return 1;
            pop(&s);
    }
    return s.top;

}

int main()
{
    char exp[SIZE];
    printf("Enter the expression:");
    scanf("%s",&exp);

    int a = balanced(exp);
    if(a == -1)
        printf("Balanced");
    else
        printf("unbalanced");

}
