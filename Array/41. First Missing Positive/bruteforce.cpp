class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

         int j = 1;
         for(int i=0;i<n;i++)
         {
            for(int z=0;z<n;z++)
            {
                if(nums[z] == j)
                {
                    j++;
                }
                else
                    continue;
            }
         }
         return j;
