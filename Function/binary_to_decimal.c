#include<stdio.h>

int binary_to_decimal(int n)
{
    int digit = 0;
    int base = 1;

    while(n)
    {
        int a = n%10;
        n = n/10;

        digit += a*base;
        base = base*2;
    }
    return digit;
}

int main()
{
    int n ;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    printf("%d",binary_to_decimal(n));
    return 0;
}
