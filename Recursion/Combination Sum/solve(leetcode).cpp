class Solution {
public:

    void solve(int index, vector<int>& arr, int target, vector<vector<int>>& ans,
    vector<int>& curr)
    {
        if(index==arr.size())
        {
            if(target==0)
                ans.push_back(curr);
                return;
        }
        //for every element ==> pick or don't pick
        if(arr[index]<=target)
        {
            //pick the element
            curr.push_back(arr[index]);
            solve(index,arr,target-arr[index],ans,curr);
            curr.pop_back();
            //target += arr[index];
        }
        //don't pick an element
        solve(index+1,arr,target,ans,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;

        solve(0,candidates,target,ans,curr);
        return ans;
    }
};
