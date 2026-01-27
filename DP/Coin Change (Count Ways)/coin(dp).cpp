class Solution {
  public:

    int coinchange(vector<int>&coins, int n, int sum)
    {
        vector<vector<int>>dp(n+1,vector<int>(sum+1));
        
        // base condition
        // if number of element are zero
        for(int i=1;i<=sum;i++)
            dp[0][i] = 0;
        
        // if sum=0 and still coins are left then return 1;
        for(int i=0;i<=n;i++)
            dp[i][0] = 1;
            
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                // do not include the coins
                dp[i][j] += dp[i-1][j];
                
                // include the coin but previosuly check is there efficient
                // sum to add up the coin in sum
                if(j - coins[i-1] >= 0)
                    dp[i][j] += dp[i][j-coins[i-1]];
            }
        }
        return dp[n][sum];
    }
    
    int count(vector<int>& coins, int sum) {
        // code here.
        int n = coins.size();
        
        return coinchange(coins,n,sum);
    }
};
