#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);

    for(int i=1;i<=row;i++)
    {
        for(int star=1;star<=(row+1)-i;star++)
            printf("*");
        printf("\n");
    }
}
