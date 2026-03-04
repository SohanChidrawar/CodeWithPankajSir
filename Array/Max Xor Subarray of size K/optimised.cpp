class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
       
        int n = arr.size();
        int currxor = 0;
        
        for(int i=0;i<k;i++)
            currxor ^= arr[i];
        
        int maxxor = currxor;
        
        //slide window and update xor
        for(int i=k;i<n;i++)
        {
            //add new element
            currxor ^= arr[i];
            
            //remove leftmost element
            currxor ^= arr[i-k];
            
            maxxor = max(maxxor,currxor);
            
        }
        
        return maxxor;
    }
};
