#include<stdio.h>

int main()
{
    int n;
    int static a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int row=1;row<=n;row++)
    {
        for(int num=1;num<=(n+1)-row;num++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}
