class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l=0, r=0;
        int result = INT_MAX;
        int sum = 0;

        for(int r=0;r<n;r++)
        {
            sum += nums[r];

            while(sum >= target)
            {
                result = min(result,r-l+1);
                sum -= nums[l++];
            }
        }

        if(result == INT_MAX)
            return 0;
        return result;
    }
};
