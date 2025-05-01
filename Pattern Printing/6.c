#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int row=1;row<=n;row++)
    {
        for(int num=1;num<=row;num++)
            printf("%d",row);
        printf("\n");
    }
}
