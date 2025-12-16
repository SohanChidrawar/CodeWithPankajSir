#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
        
    int min = *(min_element(v.begin(),v.end()));
    cout<<"Minimum element is: "<<min<<endl;
    
    int max = *(max_element(v.begin(),v.end()));
    cout<<"Maximum element is: "<<max<<endl;
    
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;   
}

// min element: it also return an address 
