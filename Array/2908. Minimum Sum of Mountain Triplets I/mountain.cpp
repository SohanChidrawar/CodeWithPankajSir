class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int mincount = INT_MAX;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i] < nums[j])
                {
                    int currcount = 0;
                    for(int k=j+1;k<n;k++)
                    {
                        if(nums[k]<nums[j])
                        {
                            currcount = nums[i]+nums[j]+nums[k];
                            if(currcount < mincount)
                                mincount = currcount;
                        }
                    }
                }
            }
        }
        if(mincount == INT_MAX)
            return -1;
        return mincount;
    }
};
