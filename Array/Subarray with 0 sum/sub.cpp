// TC: O(N)

class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        
        int n = arr.size();
        unordered_set<int> seen;
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum==0 || seen.count(sum))
                return true;
            seen.insert(sum);
        }
        return false;
    }
};
