#include <stdio.h>

int strong(int n)
{
    int sum=0;
    while(n)
    {
        int f,i,rem;
        f=1,
        rem = n%10;
        for(i=1;i<=rem;i++)
            f=f*i;
        sum += f;
        n = n/10;
    }
    return sum;
}

int main()
{
    int ans,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ans = strong(i);
        if(i==ans)
            printf("%d is strong number\n",i);
    }

}
