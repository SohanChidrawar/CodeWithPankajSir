#include <stdio.h>

int searchelement(int arr[], int *n, int key)
{
    for(int i=0;i<*n;i++)
    {
        if(arr[i] == key)
            return 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10,3,50,2,98,11,15,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the element to search: ");
    scanf("%d",&key);
    int ans = searchelement(arr,&n,key);

    if(ans==1)
        printf("%d is present in array",key);
    else
        printf("%d is not present in array",key);
    
    return 0;

}
