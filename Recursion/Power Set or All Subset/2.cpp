#include<iostream>
#include<vector>
using namespace std;

void power(int index, int n, int arr[], vector<int>curr)
{
    if(index==n)
    {
        cout<<"[";
        for(auto ele:curr)
            cout<<ele<<" ";
        cout<<"]";
        cout<<endl;
        return;
    }
    
    //don't take an element
    power(index+1,n,arr,curr);
    //take an element to add
    curr.push_back(arr[index]);
    power(index+1,n,arr,curr);
}

int main()
{
    int n;
    cout<<"Enter number of element in array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    vector<int>curr;
    power(0,n,arr,curr);
    
    return 0;
}
