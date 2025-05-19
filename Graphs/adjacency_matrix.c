#include<stdio.h>
#define v 4

void add_edge(int mat[v][v],int i,int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void display(int mat[v][v])
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int mat[v][v] = {0};

    add_edge(mat,0,1);
    add_edge(mat,0,3);
    add_edge(mat,1,0);
    add_edge(mat,1,2);
    add_edge(mat,2,1);
    add_edge(mat,2,3);
    add_edge(mat,3,0);
    add_edge(mat,3,2);

    printf("Adjancency matrix: \n");
    display(mat);
    return 0;
}
