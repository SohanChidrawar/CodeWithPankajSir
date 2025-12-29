// TC : O(N)

class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        int n = s.length();
        int check[26] = {0};
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                check[s[i]-'a']++;
            else if(s[i]>='A' && s[i]<='Z')
                check[s[i]-'A']++;
        }
        for(int j=0;j<26;j++)
            if(check[j]==0)
                return false;
                
        return true;
        
    }
};
