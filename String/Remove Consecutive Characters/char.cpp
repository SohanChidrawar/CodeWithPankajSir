class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string ans = "";
        int n = s.length();
        ans += s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i-1] == s[i])
                continue;
            else
                ans += s[i];
        }
        
        return ans;
    }
};
