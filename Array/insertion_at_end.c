#include <stdio.h>

void main()
{
    int n,a;
    int A[] = {2,5,9,8,70};
    n = sizeof(A)/ sizeof (A[0]);
    printf("Enter element to insert at end: ");
    scanf("%d",&a);
    A[n]=a;
    n += 1;

    for(int i=0;i<n;i++)
        printf("%d ",A[i]);

}
