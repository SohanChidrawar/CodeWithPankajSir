class Solution {
public:
    static bool cmp(const string &first, const string &second)
    {
        if(first+second > second+first)
            return true;
        else
            return false;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int x: nums)
            arr.push_back(to_string(x));
        
        sort(arr.begin(), arr.end(), cmp);
        string ans = "";

        for(auto &it:arr)
            ans += it;
        
        if(ans[0] == '0')
            return "0";
        
        return ans;
    }
};
