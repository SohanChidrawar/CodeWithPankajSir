#include<stdio.h>

int main()
{
    int row,col,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
            printf("%d",row);
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
            printf("%d",row);
        printf("\n");
    }
}

// Enter number of rows:5
// 1
// 22
// 333
// 4444
// 55555
// 4444
// 333
// 22
// 1
