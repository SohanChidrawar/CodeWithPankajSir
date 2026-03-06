class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max_one = 0, curr_one = 0;

        for(int val : nums)
        {
            if(val == 1)
            {
                curr_one += 1;
                max_one = max(max_one,curr_one);
            }
            else
                curr_one = 0;
        }

        return max_one;
    }
};
