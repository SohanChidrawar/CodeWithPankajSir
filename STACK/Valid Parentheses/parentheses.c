#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isValid(char *s)
{
    int len = strlen(s);
    char *stack = (char *)malloc(len);
    int top = -1;

    for(int i=0;i<len;i++)
    {
        char c = s[i];

        //push into stack
        if(c =='(' || c == '[' || c == '{')
        {
            top += 1;
            stack[top] = c;
        }
        else
        {
            if(top == -1)
            {
                free(stack);
                return false;
            }
            
            char c1 = stack[top];
            top -= 1;
            if((c == ')' && c1 != '(') ||
                (c == ']' && c1 != '[') ||
                (c == '}' && c1 != '{'))
                {    
                    free(stack);
                    return false;
                }          
        }
    }
    bool result = (top==-1);
    free(stack);
    return result;
}
