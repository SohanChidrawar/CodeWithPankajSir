class Solution {
public:
    const int MOD = 1e9 + 7;

    int counttarget(int n, int k, int target, vector<vector<int>>& memo)
    {
        //base condition
        if(n==0 && target == 0)
            return 1;
        
        //invalid case
        if(n == 0 || target <=0)
            return 0;
        
        if(memo[n][target]!=-1)
            return memo[n][target];
        
        int ans = 0;
        for(int i=1;i<=k;i++)
            ans = (ans + counttarget(n-1,k,target-i,memo))%MOD;
        
        return memo[n][target] = ans;
    }

    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<int>>memo(n+1,vector<int>(target+1,-1));

        return counttarget(n,k,target,memo);
    }
};
