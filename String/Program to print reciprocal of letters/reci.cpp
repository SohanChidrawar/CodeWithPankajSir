class Solution {
  public:
    string reciprocalString(string S) {
        // Write Your code here
        int n = S.length();
        string res;
        
        for(char c : S)
        {
            if(c >= 'A' && c<='Z')
                res += 'Z' - (c-'A');
            else if(c>='a' && c<='z')
                res += 'z' - (c-'a');
            else
                res += c;
        }
        return res;
    }
};
