#include<stdio.h>

int count_digit(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n = n/10;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("%d",count_digit(num));
}
