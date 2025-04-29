#include<stdio.h>

int main()
{
    int n,index,a;
    int A[] = {10,20,30,40,50,60,70};
    n = sizeof(A)/sizeof(A[0]);

    printf("Enter index number to enter element in array: ");
    scanf("%d",&index);

    for(int i=n;i>index+1;i--)
        A[i] = A[i-1];
    
    printf("\nEnter element to add at index: ");
    scanf("%d",&a);
    A[index] = a;

    printf("\nNew array: ");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}
