class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int n = a.size();
        
        int i=0;
        int j = m-1;
        int ans = INT_MAX;
        
        while(j<n)
        {
            int diff = a[j]-a[i];
            ans = min(ans,diff);
            i++;
            j++;
        }
        
        return ans;
    }
};
