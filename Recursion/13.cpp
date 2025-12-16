#include<vector>
#include <iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int>s = {1,2,34,5,67,10,150};
    // auto it = lower_bound(s.begin(),s.end(),50);
    // if(it==s.end())
    //     cout<<"Element is not present and no higher element";
    // else
    //     cout<<(*it)<<endl;
    auto it = s.lower_bound(100);
    if(it==s.end())
        cout<<"Element is not present and no higher element";
    else
        cout<<(*it)<<endl;
    

    return 0;
}

// jab lower bound kisse set par lagta hai usske tc:O(N) ho jate hai
