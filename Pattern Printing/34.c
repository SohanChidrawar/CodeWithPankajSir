#include<stdio.h>

int main()
{
    int row,col,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=row;col<=row*row;col+=row)
            printf("%d ",col);
        printf("\n");
    }
}

// Enter number of rows:5
// 1 
// 2 4
// 3 6 9
// 4 8 12 16
// 5 10 15 20 25
