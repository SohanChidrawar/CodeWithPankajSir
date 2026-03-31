/*
The idea is to optimize the recursive solution by avoiding repeated calculations using memorization (top-down DP).

In the recursive approach, the same subproblems defined by the current index i (day number) and the state buy (whether we can buy or need to sell) are solved multiple times.

To handle this efficiently, we store the results of these subproblems in a 2D DP array dp[i][buy], where:

i represents the current day (0 to n-1), and
buy represents the action state (1 → can buy, 0 → can sell).
*/

class Solution {
  public:
    
    int cooldown(int index, int buy, vector<int> &arr,vector<vector<int>> &memo)
    {
        int n = arr.size();
        
        // base case
        if(index >= n)
            return 0;
        
        if(memo[index][buy] != -1)
            return memo[index][buy];
            
        if(buy)
        {
            // buy today
            int buyy = -arr[index] + cooldown(index+1,0,arr,memo);
            // skip today , don't buy
            int skip = cooldown(index+1,1,arr,memo);
            memo[index][buy] = max(buyy,skip);
        }
        else
        {
            // sell today --> cooldown(index+2)
            int sell = arr[index] + cooldown(index+2,1,arr,memo);
            // skip today do not sell
            int skip = cooldown(index+1,0,arr,memo);
            memo[index][buy] = max(sell,skip);
        }
        
        return memo[index][buy];
    }
  
    int maxProfit(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<vector<int>>memo(n,vector<int>(2,-1));
        return cooldown(0,1,arr,memo);
    }
};
