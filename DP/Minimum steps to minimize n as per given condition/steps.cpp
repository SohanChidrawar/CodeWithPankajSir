class Solution {

  public:
    
    int fun(int n, int dp[])
    {
        if(n==1)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
        int x = fun(n-1,dp);
        int y = INT_MAX;
        int z = INT_MAX;
        
        if(n%2==0)
            y = fun(n/2,dp);
        if(n%3==0)
            z = fun(n/3,dp);
        
        int ans = 1 + min(x,min(y,z));
        dp[n] = ans;
        return dp[n];
    }
    
    
    int minSteps(int N)
    {
        int dp[N+1];
        memset(dp, -1,sizeof(dp));
        
        int ans = fun(N,dp);
        return ans;
    }
};
