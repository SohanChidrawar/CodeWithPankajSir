#include <stdio.h>

int fact(int n)
{
    int f,i;
    f=1;
    for(i=1;i<=n;i++)
        f = f*i;
    return f;
}

int main()
{
    int num,ans;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        ans = fact(i);
        printf("Factorial of number %d is %d\n",i,ans);
    }

}
