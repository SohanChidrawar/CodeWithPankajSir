// code is give error time limit exceed for large value of amount


class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        if(amount < 0)
            return -1;
        if(amount == 0)
            return 0;
        
        int min = INT_MAX;
        for(int coin : coins)
        {
            int res = coinChange(coins , amount-coin);
            if(res >=0 and res < min)
                min = res + 1;
        }
        //return coinchange(coins,n,amount);
        return (min == INT_MAX)? -1 : min;
    }
};
