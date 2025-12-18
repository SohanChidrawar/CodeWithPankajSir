// User function Template for C++

class Solution {
  public:
  
    void solve(int index, vector<int>& arr, int target, vector<vector<int>>& ans,
    vector<int>& curr)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        
        for(int i=index;i<arr.size();i++)
        {
            if(i>index && arr[i]==arr[i-1])
                continue;
            if(arr[i]>target)
                break;
            curr.push_back(arr[i]);
            solve(i+1,arr,target-arr[i],ans,curr);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        vector<vector<int>>ans;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        
        solve(0,candidates,target,ans,curr);
        return ans;
    }
};
