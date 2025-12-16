#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool swapkaruyanahi(pair<int,int>x, pair<int,int>y)   //comparator function
{
    if(x>y)
        return true;
    return false;
}

int main()
{
    int n;
    cout<<"Enter number of element in array: ";
    cin>>n;
    // vector of pair of int
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    //sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(swapkaruyanahi(v[i],v[j]))
                swap(v[i],v[j]);
        }
    }
    cout<<endl;
    //print the vector element
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
        
    return 0;
}
