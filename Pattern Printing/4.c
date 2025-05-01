#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);

    for(int i=1;i<=row;i++)
    {
        for(int space=1;space<=(row+1)-i;space++)
            printf(" ");
        
        for(int star=1;star<=i;star++)
            printf("*");
        printf("\n");
    }
}
