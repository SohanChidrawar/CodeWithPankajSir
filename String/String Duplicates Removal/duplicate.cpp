// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        int n = s.length();
        unordered_set<char>exist;
        string ans = "";
        
        for(char ch : s)
        {
            if(exist.find(ch) == exist.end())
            {
                exist.insert(ch);
                ans.push_back(ch);
            }
        }
        
        return ans;
    }
};
