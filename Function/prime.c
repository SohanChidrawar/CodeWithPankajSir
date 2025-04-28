#include <stdio.h>

int Prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int ans,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    ans = Prime(num);
    if(ans==1)
        printf("%d is prime number",num);
    else
        printf("%d is not prime number",num);
}
