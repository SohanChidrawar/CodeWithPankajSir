class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int m = arr1.size();
        int n = arr2.size();
        
        int i = 0, j = n-1;
        vector<int>res(2);
        int diff = INT_MAX;
        
        while(i<m && j>=0)
        {
            int sum = arr1[i] + arr2[j];
            int curr_diff = abs(sum - x);
            
            if(curr_diff < diff)
            {
                diff = curr_diff;
                res[0] = arr1[i];
                res[1] = arr2[j];
            }
            
            if(sum>x)
                j--;
            else
                i++;
        }
        
        return res;
    }
};
