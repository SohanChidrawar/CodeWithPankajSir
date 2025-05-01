#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    char j = 'A';
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
            printf("%c",j);
        j = j+1;
        printf("\n");
    }
}
