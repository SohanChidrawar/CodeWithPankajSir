#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of element to enter: ";
    cin>>n;
    cout<<"Enter element in array: ";
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}
