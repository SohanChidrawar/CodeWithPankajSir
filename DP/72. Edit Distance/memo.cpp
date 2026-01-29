class Solution {
  public:
    // Function to compute the edit distance between two strings
    
    int fun(string &s1, string &s2, int i, int j,vector<vector<int>>&dp)
    {
        if(i<0) return j+1;
        if(j<0) return i+1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        if(s1[i]==s2[j])
            return fun(s1,s2,i-1,j-1,dp);
        
        // insert fun(i-1,j)  delete(i,j-1)   replace(i-1,j-1)
        dp[i][j] =  1 + min(fun(s1,s2,i-1,j,dp),min(fun(s1,s2,i,j-1,dp),fun(s1,s2,i-1,j-1,dp)));
        return dp[i][j];
    }
    
    int editDistance(string& s1, string& s2) {
        // code here
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(s1,s2,m-1,n-1,dp);
    }
};
