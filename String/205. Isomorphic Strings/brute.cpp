class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        int m = s1.length();
        int n = s2.length();
        
        if(m!=n)
            return false;
        
        for(int i=0;i<n;i++)
        {
            char c1 = s1[i];
            char c2 = s2[i];
            
            for(int j=0;j<n;j++)
            {
                if(s1[j] == c1 && s2[j] != c2)
                    return false;
                
                if(s2[j] == c2 && s1[j] != c1)
                    return false;
            }
        }
        
        return true;
    }
};
