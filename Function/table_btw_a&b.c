#include <stdio.h>

void table(int m, int n)
{
    int i,j;
    for(j=m;j<=n;j++)
        for(i=1;i<=10;i++)
            printf("%d * %d = %d\n",j,i,j*i);
}

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    table(a,b);
}
