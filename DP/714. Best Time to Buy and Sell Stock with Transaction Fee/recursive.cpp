/*
The idea is to recursively generate all possible buy and sell combinations and compute the maximum among them. To do so, create a counter buy, which is 0 if no stock has been purchased else it is 1. Start from the 0th index, and for each index i, there are two possibilities:

buy == 0: If no stock has been purchased, we can either skip the stock arr[i], or can purchase it by subtracting arr[i] from profit.
buy == 1: If a stock has been purchased, we can't buy more and need to sell it. We can either sell it in current rate by adding arr[i] to profit and subtracting k of transaction fee, or skip to the next stock.
The maximum of this is the result.
*/

class Solution {
  public:
    
    int mprofit(vector<int>& arr, int index, int buy, int k)
    {
        int n = arr.size();
        
        // base case
        if(index == n)
            return 0;
            
        int profit;
        
        if(buy == 0)
            profit = max(mprofit(arr,index+1,0,k), mprofit(arr,index+1,1,k)-arr[index]);
        
        if(buy == 1)
            profit = max(mprofit(arr,index+1,1,k), arr[index]-k+mprofit(arr,index+1,0,k));
            
        return profit;
    }
  
    int maxProfit(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        
        return mprofit(arr,0,0,k);
    }
};
