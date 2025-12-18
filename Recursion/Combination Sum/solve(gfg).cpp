class Solution {
  public:
  
    void solve(int index, vector<int>& arr, int target,vector<vector<int>>& ans,
    vector<int>& curr)
    {
        if(index==arr.size())
        {
            if(target==0)
                ans.push_back(curr);
            return;
        }
        
        if(arr[index]<=target)
        {
            //take an element
            curr.push_back(arr[index]);
            solve(index,arr,target-arr[index],ans,curr);
            curr.pop_back();        // backtracking
        }
        //not to take element
        solve(index+1,arr,target,ans,curr);
    }
  
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>curr;
        
        solve(0,arr,target,ans,curr);
        return ans;
    }
};
