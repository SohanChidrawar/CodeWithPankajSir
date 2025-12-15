#include <iostream>
#include<vector>
using namespace std;

void power(int index,int n, int arr[],vector<int>curr,vector<vector<int>>&ans)
{
    //base case
    if(index==n)
    {
        ans.push_back(curr);
        return;
    }
    
    //don't take index element
    power(index+1,n,arr,curr,ans);
    //take index element
    curr.push_back(arr[index]);
    power(index+1,n,arr,curr,ans);
}

int main()
{
    int n;
    cout<<"Enter number of element in array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter element in array: "
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    vector<int>curr;
    vector<vector<int>>ans;
    
    power(0,n,arr,curr,ans);

    for(auto vec:ans)
    {
        cout<<"[";
        for(auto ele:vec)
            cout<<ele<<" ";
        cout<<"]";
        cout<<endl;
    }
    
}
