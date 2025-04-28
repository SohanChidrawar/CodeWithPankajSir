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
    int num,ans;
    printf("Enter the number: ");
    scanf("%d",&num);
    ans = armstrong(num);
    if(num==ans)
        printf("%d is armstrong number",num);
    else
        printf("%d is not armstrong number",num);
}
