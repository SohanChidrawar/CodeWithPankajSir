#include<stdio.h>

int main()
{
    int row,col,m,n;
    printf("Enter the length and breadth:");
    scanf("%d %d",&m,&n);
    // m = length and n = breadth

    for(row=1;row<=m;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==m || col==1 || col==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
