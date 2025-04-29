#include<stdio.h>

void main()
{
    int A[] = {1,2,3,4,5,6,7,9};
    int i,n;
    n = sizeof(A)/sizeof(A[0]);
    for(i=0;i<n;i++)
        printf("%d",A[i]);
}
