#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int row=1;row<=n;row++)
    {
        for(int num=1;num<=(n+1)-row;num++)
            printf("%d",row);
        printf("\n");
    }
}
