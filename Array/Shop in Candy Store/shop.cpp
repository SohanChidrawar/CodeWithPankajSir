class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int n = prices.size();
        int l=0, r=n-1;
        
        int mincost=0, maxcost=0;
        
        // Minimum cost: buy cheapest, skip k most expensive each time
        while(l<=r)
        {
            mincost += prices[l];
            l++;
            r-=k;      // take k expensive candies for free
        }
        
        // Maximum cost: buy most expensive, skip k cheapest each time
        l=0,r=n-1;
        while(l<=r)
        {
            maxcost += prices[r];
            r--;
            l+=k;     // take k cheap candies for free
        }
        
        return {mincost,maxcost};
    }
};
