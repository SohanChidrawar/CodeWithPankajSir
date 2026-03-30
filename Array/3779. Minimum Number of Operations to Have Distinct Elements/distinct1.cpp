class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operation = 0;
        int start = 0;

        while(start < n)
        {
            // check if duplicate element exist in remaining subarray from
            // start to end
            unordered_set<int>seen;
            bool duplicate = false;
        
            for(int i=start;i<n;i++)
            {
                if(seen.count(nums[i]))
                {
                    // duplicate found
                    duplicate = true;
                    break;
                }
                seen.insert(nums[i]);
            }

            // no dupliate stop immediatley
            if(!duplicate)
                break;
            
            // removing first 3 element
            start += 3;
            operation++;
        }
        return operation;
    }
};
