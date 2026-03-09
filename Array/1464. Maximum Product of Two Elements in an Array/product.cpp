class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod = 0;
        int  n = nums.size();

        for(int i=0;i<n;i++)
        {
            int currprod = 0;
            for(int j=i+1;j<n;j++)
            {
                currprod = (nums[i]-1) * (nums[j]-1);
                maxprod = max(currprod,maxprod);
            }
        }

        return maxprod;
    }
};
