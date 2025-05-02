#include<stdio.h>

void fibo(int num)
{
    int a=0;
    int b=1;
    int temp;
    printf("%d %d ",a,b);
    for(int i=2;i<=num;i++)
    {
        temp = a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fibo(n);
}
