#include<stdio.h>

int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",reverse(n));
}
