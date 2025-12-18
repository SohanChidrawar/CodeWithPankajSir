class Solution {
public:

    void solve(int index,vector<int>& array,int target,vector<vector<int>>& ans,
    vector<int>& curr)
    {
        // if(index == array.size())
        // {
        //     if(target==0)
        //         ans.push_back(curr);
        //     return;
        // }

        if(target==0)
        {
            ans.push_back(curr);
            return;
        }

        for(int i=index;i<array.size();i++)
        {
            if(i>index && array[i]==array[i-1])
                continue;
            if(array[i]>target)
                break;
            
            // take an element
            curr.push_back(array[i]);
            solve(i+1,array,target-array[i],ans,curr);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>>ans;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target,ans,curr);
        return ans;
    }
};
