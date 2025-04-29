#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int A[n];
    printf("Enter %d element\n ",n);
    for(int i=0;i<n;i++)
        scanf("%d\n",&A[i]);

    //traverse the array
    printf("Traversing the array: ");
    for(int i=0;i<n;i++)
        printf("%d",A[i]);

    return 0;
}
