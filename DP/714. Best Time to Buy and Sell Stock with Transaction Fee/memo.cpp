class Solution {
public:

    int mprofit(vector<int>& prices, int index, int buy, int fee, vector<vector<int>>& memo)
    {
        int n = prices.size();
        int profit;
        // base case
        if(index == n)
            return 0;
        
        if(memo[index][buy] != -1)
            return memo[index][buy];
        
        if(buy == 0)
            profit = max(mprofit(prices,index+1,0,fee,memo),
                         mprofit(prices,index+1,1,fee,memo) - prices[index]);
                        
        if(buy == 1)
            profit = max(mprofit(prices,index+1,1,fee,memo),
                         prices[index] - fee + mprofit(prices,index+1,0,fee,memo));
        
        return memo[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();

        vector<vector<int>>memo(n,vector<int>(2,-1));

        return mprofit(prices,0,0,fee,memo);
    }
};
