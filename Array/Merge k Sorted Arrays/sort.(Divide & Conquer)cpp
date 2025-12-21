class Solution {
  public:
    
    vector<int>concat(vector<int>& a, vector<int>& b)
    {
        int n = a.size();
        int m = b.size();
        
        int i = 0;
        int j = 0;
        vector<int>res;
        res.reserve(n+m);
        
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
                res.push_back(a[i++]);
            else 
                res.push_back(b[j++]);
        }
        
        while(i<n)
            res.push_back(a[i++]);
        while(j<m)
            res.push_back(b[j++]);
            
        return res;
    }
    
    vector<int>merge(vector<vector<int>>& mat, int low, int high)
    {
        if(low==high)
            return mat[low];
        
        int mid = (low+high)/2;
        
        vector<int> left = merge(mat,low,mid);
        vector<int> right = merge(mat,mid+1,high);
        
        return concat(left,right);
    }
    
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        int k = mat.size();
        if(k==0)
            return {};
        
        return merge(mat,0,k-1);
    }
};
