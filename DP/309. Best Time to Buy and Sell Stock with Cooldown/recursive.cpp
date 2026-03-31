/*
The idea is to use recursion to explore all possible actions on each day — whether to buy, sell, or skip.

At any given day, we track whether we currently hold a stock using a variable buy:

buy == 0 → we don’t own a stock (we can buy).
buy == 1 → we already own a stock (we can sell).
For each day i, there are two possible actions:

If  we can buy (buy == 0):  We can either buy the stock (subtract its price from profit) or skip to the next day.
If  we can sell (buy == 1): We can either sell the stock (add its price to profit and subtract the transaction fee k) or skip to the next day.
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
