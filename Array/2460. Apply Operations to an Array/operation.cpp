class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int index = 0;

        for(int i=1;i<n;i++)
        {
            if(nums[i-1] == nums[i])
            {
                nums[i-1] = nums[i-1]*2;
                nums[i] = 0;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[index++] = nums[i];
            }
        }

        while(index<n)
        {
            nums[index] = 0;
            index++;
        }
        
        return nums;
    }
};
