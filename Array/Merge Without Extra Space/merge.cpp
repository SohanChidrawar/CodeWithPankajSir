class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        // i pointing yo last element of array a and j pointing
        // to first element of array b and then comparison start
        int i = n-1;
        int j = 0;
        
        while(i>=0 && j<m)
        {
            if(a[i]>b[j])
                swap(a[i--],b[j++]);
            else
                break;
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
    }
};
