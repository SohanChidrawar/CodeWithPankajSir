class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long maxval = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long currval = 0;
                long sum = nums[i] - nums[j];

                for(int k=j+1;k<n;k++)
                {
                    currval = sum*nums[k];

                    if(currval>maxval)
                        maxval = currval;
                }
            }
        }
        return maxval;
    }
};
