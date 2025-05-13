#include<stdio.h>

int main()
{
    int row,col,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
         for(col=1;col<=2*row-1;col++)
            printf("%d",col);
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=2*row-1;col++)
            printf("%d",col);
        printf("\n");
    }
}

// Enter number of rows:4
// 1
// 123
// 12345
// 1234567
// 12345
// 123
// 1
