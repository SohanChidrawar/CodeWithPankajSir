/*
The above approach can be optimized using memoization. The idea is to create a 2d array memo[][] of order n*2, where element memo[i][0] stores the
maximum profit from day i to n-1 when no previous stock is pending and memo[i][1] stores maximum profit from day i to n-1 when there is previous stock 
remaining. For each recursive call, check if the sub-array is already computed, if so return the stored value else proceed as in above approach.
*/

class Solution {
public:

    int mprofit(vector<int>& prices, int index, int buy, vector<vector<int>> &memo)
    {
        int n = prices.size();

        // base case
        if(index == n)
            return 0;
        
        if(memo[index][buy] != -1)
            return memo[index][buy];
        
        int profit;

        if(buy == 0)
            profit = max(mprofit(prices,index+1,0,memo),
                         mprofit(prices,index+1,1,memo) - prices[index]);
        
        if(buy == 1)
            profit = max(mprofit(prices,index+1,1,memo),
                         prices[index] + mprofit(prices,index+1,0,memo));
                        
        return memo[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<int>>memo(n,vector<int>(2,-1));

        return mprofit(prices,0,0,memo);
    }
};
