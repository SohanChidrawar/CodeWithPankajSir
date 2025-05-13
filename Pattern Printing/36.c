#include<stdio.h>

int main()
{
    int row,col,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    static int p=1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",p++);

            if(col<row)
                printf("*");
        }
        printf("\n");
    }
}

// 1
// 2*3
// 4*5*6
// 7*8*9*10
