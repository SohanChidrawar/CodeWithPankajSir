// backtracking concept is used

class Solution {
public:

    void printsubset(int i, vector<int>& nums, vector<int>subset, vector<vector<int>>&res)
    {
        if(i==nums.size())
        {
            res.push_back(subset);
            return;
        }

        // include the element in subset
        subset.push_back(nums[i]);
        printsubset(i+1,nums,subset,res);

        // do not include the element
        subset.pop_back();
        printsubset(i+1,nums,subset, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<int>subset;
        vector<vector<int>>res;

        printsubset(0,nums,subset,res);
        return res;
        
    }
};
