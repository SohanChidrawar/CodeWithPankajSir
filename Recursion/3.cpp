#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    if(size==0 || size==1)
        return ;
        
    int temp;
    temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
    
    reverse(arr+1, size-2);
}

int main()
{
    int arr[] = {10,5,4,9,1};
    reverse(arr,5);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}
