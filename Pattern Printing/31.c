#include<stdio.h>

int main()
{
    int row,col,space,n;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {

        for(space=1;space<row;space++)
            printf(" ");
        
        printf("%d",row);

        for(space=row;space<=2*n-row-2;space++)
            printf(" ");

        if(row!=n)
            printf("%d",row);
            
        printf("\n");
    }
}
