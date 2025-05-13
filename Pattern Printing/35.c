#include<stdio.h>

int main()
{
    int row,col,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==1 || col==row || row==n)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}
