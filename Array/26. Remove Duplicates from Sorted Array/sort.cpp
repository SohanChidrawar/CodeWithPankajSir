class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
            return nums.size();
        
        int index = 1;
        for(int i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1])
                nums[index++] = nums[i];
        }

        nums.resize(index);          //removes the duplicates from the end of the vector.

        return nums.size();
    }
};
