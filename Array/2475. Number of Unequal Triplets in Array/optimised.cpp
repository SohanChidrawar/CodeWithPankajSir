class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        /*
        Instead of brute‑forcing all (i,j,k), we can:
        1) Fix the middle index j.
        2) Count how many distinct values exist before j and after j.
        3) Multiply those counts to get the number of valid triplets with j as the middle.
        4) Sum across all j.
        */

        int n = nums.size();
        int count = 0;

        // fix j index and iterate wrt it
        for(int j=1;j<n-1;j++)
        {
            vector<int>left,right;

            //collect distinct through left of j
            for(int i=0;i<j;i++)
            {
                if(nums[i]!=nums[j])
                    left.push_back(nums[i]);
            }

            //collect distinct through right of j
            for(int k=j+1;k<n;k++)
            {
                if(nums[k]!=nums[j])
                    right.push_back(nums[k]);
            }

            for(int val:left)
            {
                for(int rval:right)
                    if(val!=rval)
                        count++;
            }
        }
        return count;
    }
};
