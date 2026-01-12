class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int total = n*(n+1)/2;
        int sum = 0;
        int repeat = 0;

        for(int x:nums)
        {
            if(s.find(x) == s.end())
            {
                sum += x;
                s.insert(x);
            }
            else
                repeat = x;
        }
        int missing = total - sum;
        return {repeat,missing};

    }
};
