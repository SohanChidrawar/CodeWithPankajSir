class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            int prexor = 0;
            
            for(int j=i;j<n;j++)
            {
                prexor = prexor ^ arr[j];
                
                if(prexor == k)
                    count++;
            }
        }
        
        return count;
    }
};
