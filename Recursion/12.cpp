#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of element in array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    auto it = lower_bound(arr.begin(),arr.end(),50);
    if(it==arr.end())
        cout<<"Element is not present and no higher element";
    else
        cout<<(*it)<<endl;
    

    return 0;
}
