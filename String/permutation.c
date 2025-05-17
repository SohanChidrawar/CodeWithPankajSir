#include<stdio.h>
#include<string.h>

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *str, int left, int right)
{
    if(left==right)
    {
        printf("%s \n",str);
        return;
    }

    for(int i=left;i<=right;i++)
    {
        swap(&str[left],&str[i]);
        permutation(str,left+1,right);
        swap(&str[left],&str[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    int len = strlen(str);

    permutation(str,0,len-1);
    return 0;
}
