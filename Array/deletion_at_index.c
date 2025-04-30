#include<stdio.h>
#define SIZE 10

void deletionatend(int arr[], int *n, int index)
{
    if(index<0 || index >*n)
    {
        printf("Invalid index\n");
        return;
    }

    for(int i=index;i<*n-1;i++)
        arr[i] = arr[i+1];
    
    (*n)--;
}

int main()
{
    int index;
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    printf("Enter the index to delete an element: ");
    scanf("%d",&index);

    printf("\nOld Array: ");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);

    deletionatend(arr,&n,index);

    printf("\nNew Array: ");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);

    return 0;
}
