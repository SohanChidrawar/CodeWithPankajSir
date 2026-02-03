#include<stdio.h>

void bubble_sort(int A[], int n)
{
    for(int pass=1;pass<=n-1;pass++)
    {
        int flag = 0;
        for(int i=0;i<=n-1-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                flag = 1;
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
        if(flag==0)
            break;
    }
}

int main()
{
    int A[] = {5,1,2,3,4};
    int n = sizeof(A)/sizeof(A[0]);

    bubble_sort(A,n);

    printf("Sorted Array:");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}
