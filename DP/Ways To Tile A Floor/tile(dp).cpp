class Solution {
  public:
    int numberOfWays(int n) {
        // code here
        if(n==0 || n==1)
            return 1;
        
        vector<int>dp(n+1);
        
        dp[0] = 1;  // There is one way to fill a 2×0 board.
        dp[1] = 1;  // There is only one way to fill a 2×1 board.
        
        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];

    }
};
