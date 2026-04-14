class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int n = s.length();
        string res;
        
        for(int i=0;i<n;i++)
        {
            if(s[i] != ' ')
                res.push_back(s[i]);
        }
        
        return res;
    }
};
