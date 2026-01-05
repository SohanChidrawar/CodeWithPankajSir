class Solution {
  public:

    string modify(string& s) {
        // your code here
        int n = s.length();
        string res;
        
        if(isupper(s[0]))
        {
            for(int i=0;i<n;i++)
                res += toupper(s[i]);
        }
        else
        {
            for(int i=0;i<n;i++)
                res += tolower(s[i]);
        }        
        return res;
    }
};
