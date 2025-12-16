#include<iostream>
#include<vector>
using namespace std;

bool comparator(pair<int,int>x, pair<int,int>y)   //comparator function
{
    if(x.first != y.first)
    {
        if(x.first>y.first)
            return true;
        return false;
    }
    else
    {
        if(x.second <  y.second)
            return true;
        return false;
    }
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
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(comparator(v[i],v[j]))
                swap(v[i],v[j]);
        }
    }
    cout<<endl;
    //print the vector element
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
        
    return 0;
}
