class Solution {
  public:
  
    void solve(int index,vector<int>& arr, int target, vector<vector<int>>& ans,
    vector<int>& curr)
    {
        if(target==0){
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
        
        //do not take an element
        //solve(index+1,arr,target,ans,curr);
    }
  
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> ans;
        vector<int>curr;
        sort(arr.begin(),arr.end());
        solve(0,arr,target,ans,curr);
        return ans;
    }
};
