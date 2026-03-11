class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        int res = 0;
        
        for(int i=0;i<n;i++)
        {
            int curr = arr[i];
            
            for(int j=i;j<n;j++)
            {
                curr = min(curr,arr[j]);
                
                res += curr;
            }
        }
        
        return res;
    }
};
