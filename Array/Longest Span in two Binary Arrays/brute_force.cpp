class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n = a1.size();
        int maxlen = 0;
        
        for(int i=0;i<n;i++)
        {
            int pre1 = 0, pre2 = 0;
            
            for(int j=i;j<n;j++)
            {
                pre1 += a1[j];
                pre2 += a2[j];
                
                if(pre1 == pre2)
                    maxlen = max(maxlen,j-i+1);
            }
        }
        
        return maxlen;
    }
};
