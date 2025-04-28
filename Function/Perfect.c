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
    ans = Perfect(num);
    if(num==ans)
        printf("%d is perfect number",num);
    else
        printf("%d is not perfect number",num);
}
