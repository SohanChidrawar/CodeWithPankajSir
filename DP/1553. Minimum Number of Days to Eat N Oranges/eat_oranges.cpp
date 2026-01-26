class Solution {
public:

    int eatoranges(int n, unordered_map<int,int>&dp)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        
        if(dp.find(n) != dp.end())
            return dp[n];

        int x = n%2 + eatoranges(n/2,dp);
        int y = n%3 + eatoranges(n/3,dp);

        int ans = 1 + min(x,y);
        dp[n] = ans;
        return dp[n];
    }

    int minDays(int n) {
        
        unordered_map<int,int>dp;
        int result =  eatoranges(n,dp);
        return result;
    }
};
