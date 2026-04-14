class Solution {
  public:
    bool check(string s) {
        // code here.
        int n = s.length();
        
        for(int i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
                return false;
        }
        
        return true;
    }
};
