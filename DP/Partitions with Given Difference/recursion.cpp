/*
Key Points
We can observe that:
sum(S1) - sum(S2) = diff
sum(S1) + sum(S2) = totalSum

Adding both equations, we get:
2 × sum(S1) = diff + totalSum

So,
sum(S1) = (diff + totalSum) / 2 = target

Thus, the problem reduces to counting the number of subsets whose sum is equal to target, where (diff + totalSum) must be even, otherwise, no valid subset exists.

The idea is to use recursion to explore all possible subsets whose sum equals to target . For each element in the array, we have two choices - either 
include it in the current subset sum or exclude it. During recursion, we keep track of the current sum and compare it with the target at the end. If the 
current sum equals the target, it means we’ve found one valid subset. By exploring all combinations through these choices, we count all subsets whose sum 
equals the required target, it gives the number of partitions with the given difference.
*/

class Solution {
  public:
    
    int countsubset(int i, int currsum, int target, vector<int> &arr)
    {
        int n = arr.size();
        
        // base case
        if(i==n)
            return (currsum == target)?1:0;
        
        //exclude element to add in subset
        int exclude = countsubset(i+1,currsum,target,arr);
    
        // include an element to add in subset
        int include = 0;
        if(currsum + arr[i] <= target)
            include = countsubset(i+1,currsum+arr[i],target,arr);
        
        return exclude+include;
    }
  
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int sum = 0;
        
        for(auto ele : arr)
            sum += ele;
        
        if((sum+diff)%2 != 0 || sum < diff)
            return 0;
        
        int target = (sum+diff)/2;
        return countsubset(0,0,target,arr);
    }
};
