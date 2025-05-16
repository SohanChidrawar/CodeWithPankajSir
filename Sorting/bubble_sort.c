#include<stdio.h>

void bubble_sort(int A[], int n)
{
    for(int pass=1;pass<=n-1;pass++)
    {
        for(int i=0;i<=n-1-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {4,7,1,0,9,8,3};
    int n = sizeof(A)/sizeof(A[0]);

    bubble_sort(A,n);

    printf("Sorted Array:");
    for(int i=0;i<=n;i++)
        printf("%d ",A[i]);
}
