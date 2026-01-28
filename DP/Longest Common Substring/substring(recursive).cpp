class Solution {
  public:
    
    int substring(string &s1, string &s2, int m, int n)
    {
        if(m==0 || n==0 || s1[m-1]!=s2[n-1])
            return 0;
        
        return 1 + substring(s1,s2,m-1,n-1);
    }
  
    int longCommSubstr(string& s1, string& s2) {
        // your code here
        int res = 0;
        
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                res = max(res,substring(s1,s2,i,j));
            }
        }
        return res;
    }
};
