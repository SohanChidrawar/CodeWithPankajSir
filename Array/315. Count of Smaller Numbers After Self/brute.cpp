class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;

        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i] > nums[j])
                    count++;
            }
            result.push_back(count);
        }

        return result;
    }
};
