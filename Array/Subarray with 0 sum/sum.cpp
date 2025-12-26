// TC: O(N^2)

class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        vector<int> nums(n,0);
        nums[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
            nums[i] = nums[i-1]+arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                return true;
            
        }
        
        // check if any two prefix sum is equal
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(nums[i]==nums[j])
                    return true;
        }
        return false;
        
