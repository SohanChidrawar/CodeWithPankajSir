#include <stdio.h>

int armstrong(int n)
{
    int sum,last;
    sum = 0;
    while(n!=0)
    {
        last = n%10;
        n = n/10;
        sum += last*last*last;
    }
    return sum;
}

int main()
{
    int num,ans,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ans = armstrong(i);
        if(i==ans)
            printf("%d is armstrong number\n",i);
    }

}
