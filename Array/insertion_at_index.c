#include <stdio.h>
#define SIZE 10 

void insertatend(int arr[],int *n,int index,int element)
{
    if(index<0 || index>*n)
    {
        printf("Invalid index");
        return;
    }

    for(int i=*n;i>index;i--)
        arr[i] = arr[i-1];
    
    arr[index] = element;
    (*n)++;    
}

int main()
{
    int n,index,element;
    int arr[SIZE] = {10,20,30,40,50,60};
    n = 6;

    printf("Enter index number to enter element in array: ");
    scanf("%d",&index);
    printf("\nEnter element to add at index: ");
    scanf("%d",&element);

    insertatend(arr,&n,index,element);

    printf("\nNew array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;

}
