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
    int num,ans;
    printf("Enter the number: ");
    scanf("%d",&num);
    ans = strong(num);
    if(num==ans)
        printf("%d is strong number",num);
    else
        printf("%d is not strong number",num);
}
