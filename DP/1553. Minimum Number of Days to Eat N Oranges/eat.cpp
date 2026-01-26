class Solution {
public:

    int eatorange(int n, int dp[])
    {
        if(n<=1)
            return n;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int x = eatorange(n-1,dp);
        int y = INT_MAX;
        int z = INT_MAX;

        if(n%2==0)
            y = eatorange(n-n/2,dp);
        if(n%3==0)
            z = eatorange(n-2*(n/3) , dp);
        
        int ans = 1 + min(x,min(y,z));
        dp[n] = ans;
        return dp[n];
    }

    int minDays(int n) {
        unordered_map<int,int>dp;

        //memset(dp, -1, sizeof(dp));
        int ans = eatorange(n,dp);
        return ans;
    }
};
