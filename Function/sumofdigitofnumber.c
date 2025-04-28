#include <stdio.h>

int sumofdigit(int n)
{
    int sum,last;
    sum = 0;
    while(n!=0)
    {
        last = n%10;
        n = n/10;
        sum += last;
    }
    return sum;
}

int main()
{
    int num,ans;
    printf("Enter the number: ");
    scanf("%d",&num);
    ans = sumofdigit(num);
    printf("Sum of digit of number %d is %d",num,ans);
}
