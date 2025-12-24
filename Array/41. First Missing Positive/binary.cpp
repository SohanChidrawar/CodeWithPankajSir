class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=1;i<=n;i++)
        {
            if(!binary_search(nums.begin(),nums.end(),i))
                return i;
        }
        return n+1;
    }
};
