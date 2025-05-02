#include <stdio.h>

int Perfect(int n)
{
    int sum,i;
    sum = 0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum += i;
    }
    return sum;
}

int main()
{
    int ans,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        ans = Perfect(i);
        if(i==ans)
            printf("%d is perfect number\n",i);
    }
}
