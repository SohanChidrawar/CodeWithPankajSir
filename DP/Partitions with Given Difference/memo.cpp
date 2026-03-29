/*
The idea is to use memoization to avoid recomputing states while searching for all subsets whose sum equals target . In recursion, the same (index, 
currentSum) state is often recalculated multiple times, so we store results in a DP table. For each element, we either include it or exclude it while 
tracking the running sum. If the sum reaches the target, it counts as a valid subset. By storing previously computed subproblems, we prevent repeated work 
and efficiently count all subsets contributing to the required target, giving the number of partitions with the given difference.
*/

class Solution {
  public:
    
    int countsubset(int i, int currsum, int target, vector<int> &arr,
    vector<vector<int>> &dp)
    {
        int n = arr.size();
        
        // base case
        if(i==n)
            return (currsum == target)?1:0;
        
        if(dp[i][currsum]!=-1)
            return dp[i][currsum];
        
        //exclude element to add in subset
        int exclude = countsubset(i+1,currsum,target,arr,dp);
    
        // include an element to add in subset
        int include = 0;
        if(currsum + arr[i] <= target)
            include = countsubset(i+1,currsum+arr[i],target,arr,dp);
        
        return dp[i][currsum] = exclude+include;
    }
  
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int sum = 0;
        
        for(auto ele : arr)
            sum += ele;
        
        if((sum+diff)%2 != 0 || sum < diff)
            return 0;
        
        int target = (sum+diff)/2;
        
        vector<vector<int>>dp(arr.size()+1, vector<int>(target+1,-1));
        return countsubset(0,0,target,arr,dp);
    }
};
