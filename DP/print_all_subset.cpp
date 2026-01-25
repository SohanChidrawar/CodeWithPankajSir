#include <vector>
#include <iostream>
using namespace std;

void printsubset(int i, vector<int> &arr, int target, vector<int> &subset,
vector<vector<int>> &res)
{
    if(i==arr.size())
    {
        if(target == 0)
        {
            res.push_back(subset);
            return;
        }
        return;
    }
    
    // include the element in subset
    subset.push_back(arr[i]);
    printsubset(i+1,arr,target - arr[i],subset,res);
    
    // do not include the element
    subset.pop_back();
    printsubset(i+1,arr,target,subset,res);
}

vector<vector<int>> printSOS(vector<int> &arr, int target)
{
    vector<int>subset;
    vector<vector<int>>res;
    
    printsubset(0,arr,target,subset,res);
    return res;
}

int main()
{
    vector<int> arr = {5,2,3,10,6,8};
    int target = 10;
    
    vector<vector<int>>result = printSOS(arr,target);
    
    for(auto row : result)
    {
        cout<<"[";
        for(auto ele : row)
            cout<<ele;
        cout<<"]";
    }
    cout<<endl;
}
