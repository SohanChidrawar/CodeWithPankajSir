#include<stdio.h>

int main()
{
    int A[] = {1,2,3,4,5};
    int n = sizeof(A)/sizeof(A[0]);

    printf("Old Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    
    n = n-1;
    printf("\nNew Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);

    return 0;
}
