/*
Key Observations
- Each operation chops off the first three elements.
- After each chop, you need to check if the remaining array has duplicates.
- If duplicates exist → continue.
- If no duplicates → stop.
- If the array becomes empty → stop.

Step‑by‑Step Approach
- Initialize ops = 0.
- While array is not empty:
- Check if the array has duplicates.
- If no duplicates → break.
- Otherwise, remove first three elements (or all if fewer than 3).
- Increment ops.
- Return ops.

*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operation = 0;

        while(!nums.empty())
        {
            // check if it contain the duplicate element
            unordered_set<int>seen(nums.begin(),nums.end());
            if(seen.size() == nums.size())
            {
                // means no duplicate element
                break;
            }

            if(nums.size()<=3)
                nums.clear();
            else
                nums.erase(nums.begin(),nums.begin()+3);
            
            operation++;
        }
        return operation;
    }
};
