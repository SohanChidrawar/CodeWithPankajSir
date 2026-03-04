class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int count = 0;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            int currxor = 0;
            
            for(int j=i;j<n;j++)
            {
                currxor ^= arr[j];
                if(currxor == k)
                    count++;
            }
        }
        return count;

    }
};
