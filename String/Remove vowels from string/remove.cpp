// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        int n = s.length();
        string res;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                continue;
            else
                res.push_back(s[i]);
        }
        
        return res;
    }
};
