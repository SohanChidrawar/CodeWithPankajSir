class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int n = a.size();
        int dfiff = INT_MAX;
        for(int i=0;i<n-m+1 ;i++)
        {
            int diff = a[m+i-1] - a[i];
            
            if(diff < dfiff)
                dfiff = diff;
        }
        
        return dfiff;
    }
};
