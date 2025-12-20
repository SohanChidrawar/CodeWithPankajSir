class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>res;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            int j;
            for(j = i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                    break;
            }
            if(j==n)
                res.push_back(arr[i]);
        }
        return res;

// Time complexity: O(n^2)
