class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;

        for(int i=0;i<n;i++)
        {
            int curr = 0;

            for(int j=i;j<n;j++)
            {
                curr += nums[j];

                if(curr >= target)
                {
                    result = min(result,j-i+1);
                    break;
                }
            }
        }

        if(result == INT_MAX)
            return 0;
        return result;
    }
};
