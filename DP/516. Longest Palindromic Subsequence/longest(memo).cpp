class Solution {
  public:
  
    int longest(string &s, int low, int high,vector<vector<int>>&dp)
    {
        if(low > high)
            return 0;
        
        if(low == high)
            return 1;
        
        if(dp[low][high]!=-1)
            return dp[low][high];
        
        if(s[low] == s[high])
        {
            dp[low][high] = 2 + longest(s,low+1,high-1,dp);
            return dp[low][high];
        }
        
        dp[low][high] = max(longest(s,low+1,high,dp),longest(s,low,high-1,dp));
        
        return dp[low][high];
    }
  
    int longestPalinSubseq(string &s) {
        // code here
        int n = s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        return longest(s,0,n-1,dp);
    }
};
