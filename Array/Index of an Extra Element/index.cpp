class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int m = a.size();
        int n = b.size();
        int i=0,j=0;
        
        while(i<m && j<n)
        {
            if(a[i] == b[j])
            {
                i++;
                j++;
            }
            else if(a[i]!=b[j])
                return i;
        }
        
    }
};
