
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int *arr = new int[n];
    cout<<"Enter number of element in array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int *ptr = lower_bound(arr,arr+n,500);
    if(ptr==arr+n)
        cout<<"Element is not present and no higher element";
    else
        cout<<(*ptr)<<endl;
    

    return 0;
}
