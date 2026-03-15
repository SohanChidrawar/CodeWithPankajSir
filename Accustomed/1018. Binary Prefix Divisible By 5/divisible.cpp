class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int remainder = 0;
        vector<bool>res;

        for(int bit : nums)
        {
            remainder = (remainder * 2 + bit) % 5;
            if(remainder == 0)
            {
                res.push_back(true);
            }
            else
                res.push_back(false);
        }
        return res;
    }
};
