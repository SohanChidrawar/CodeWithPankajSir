class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int res = 0;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            int count = 0;
            
            for(int j=i;j<n;j++)
            {
                if(arr[j]>k)
                    count++;
                else
                    count--;
            
                if(count>0)
                    res = max(res,j-i+1);
            }
        }
        
        return res
        

    }
};
