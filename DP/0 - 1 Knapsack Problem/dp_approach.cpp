class Solution {
  public:
  
    int KS(vector<int>&wt, vector<int>&val, int n, int W)
    {
        vector<vector<int>>dp(n+1, vector<int>(W+1));
        
        // base case
        for(int i=0;i<=W;i++)
            dp[0][i] = 0;
        for(int i=0;i<=n;i++)
            dp[i][0] = 0;
            
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                // majboori
                if(wt[i-1]>j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
        return dp[n][W];
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size();
        return KS(wt,val,n,W);
    }
};
