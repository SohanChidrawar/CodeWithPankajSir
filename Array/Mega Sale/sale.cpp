class Solution {
  public:

    int maxProfit(int m, vector<int> &arr) {
        // Your code goes here.
        int count = 0;
        int n = arr.size();
        int profit = 0;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                if(count<m)
                {   profit += abs(arr[i]);
                    count++;
                }
            }
        }
        return profit;
    }
};
