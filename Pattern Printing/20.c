#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    char j='A';
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=(n+1)-row;space++)
            printf(" ");

        for(int col=1;col<=row;col++)
        {
            printf("%c ",j);
            j++;
        }
        printf("\n");
    }
}
