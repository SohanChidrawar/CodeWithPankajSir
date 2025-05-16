#include<stdio.h>

void swap(int A[],int j, int i);

void selection_sort(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minimum_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j] < A[minimum_idx])
            {
                minimum_idx = j;
            }
        }
        if(i!=minimum_idx)                             // 10,20,30,40
            swap(A,minimum_idx,i);
    }
}

void swap(int A[], int j, int i)
{
    int temp = A[j];
    A[j] = A[i] ;
    A[i] = temp;
}

int main()
{
    int A[] = {1,2,3,4};
    int n = sizeof(A)/sizeof(A[0]);

    selection_sort(A,n);
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);

    return 0;
}
