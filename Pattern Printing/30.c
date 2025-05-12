#include<stdio.h>

int main()
{
    int row,col,star;
    for(row=1;row<=4;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(row==col)
                printf("%d",row);
            else
                printf("%d*",row);
        }
        printf("\n");
    }
}
