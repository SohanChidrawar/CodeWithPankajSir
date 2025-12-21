class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int global_sum = nums[0];
        int cum_sum = nums[0];

        for(int i=1;i<n;i++)
        {
            if(cum_sum>=0)
                cum_sum += nums[i];
            else
                cum_sum = 0 + nums[i];
            
            if(cum_sum > global_sum)
                global_sum = cum_sum;
        }
        return global_sum;
    }
};
