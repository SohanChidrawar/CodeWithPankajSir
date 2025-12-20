class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        set<int> s;
        
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        
        for(int j=0;j<m;j++)
            s.insert(b[j]);
            
        vector<int> ans;
        
        for(auto it:s)
            ans.push_back(it);
        return ans;
    }
};
