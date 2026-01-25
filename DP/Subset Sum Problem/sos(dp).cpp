class Solution {
  public:
  
    int SOS(vector<int>& arr, int n, int sum)
    {
       vector<vector<int>>dp(n+1, vector<int>(sum+1));
       
       // if sum = 0 then return true
       for(int i=0;i<=n;i++)
        dp[i][0] = 1;
       
       // if numer of item are zero
       for(int i=1;i<=sum;i++)
        dp[0][sum] = 0;
        
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=sum;j++)
            {
                //majboori
                if(arr[i-1] > j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);
            }
       }
       return dp[n][sum];
    }
  
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        
        if(SOS(arr,n,sum))
            return true;
        else
            return false;
    }
};
