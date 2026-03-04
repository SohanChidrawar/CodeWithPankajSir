class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {

        int n = arr.size();
        int maxxor = 0;
        
        for(int i=0;i<=n-k;i++)
        {
            int currxor = 0;
            
            for(int j=0;j<k;j++)
            {
                currxor ^= arr[i+j];
            }
            
            maxxor = max(maxxor,currxor);
        }
        
        return maxxor;
        

    }
};
