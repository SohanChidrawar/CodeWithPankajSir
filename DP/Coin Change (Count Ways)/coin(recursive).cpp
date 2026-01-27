class Solution {
  public:
  
    int coinchange(vector<int>& coins, int n, int sum)
    {
        if(sum == 0)
            return 1;
        if(sum<0 || n==0)
            return 0;
        
        return coinchange(coins,n,sum-coins[n-1]) + 
              coinchange(coins,n-1,sum)
        
    }

    int count(vector<int>& coins, int sum) {
        // code here.
        int n = coins.size();
        
        return coinchange(coins,n,sum);
    }
};
