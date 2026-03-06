// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        
        int n = s.size();
        unordered_set<char>res;
        string ans = "";
        
        for(char ch : s)
        {
            if(res.find(ch) == res.end())
            {
                ans.push_back(ch);
                res.insert(ch);
            }
        }
        return ans;
        
    }
};
