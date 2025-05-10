#include<stdio.h>

int main()
{
    int row,space,star,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(space=1;space<(n+1)-row;space++)
            printf(" ");
        
        for(star=1;star<=2*row-1;star++)
            printf("*");
        printf("\n");
    }

    for(row=1;row<=n;row++)
    {
        for(space=1;space<=row;space++)
            printf(" ");
        
        for(star=1;star<=(2*n-1)-2*row;star++)
            printf("*");
        printf("\n");
    }
}
