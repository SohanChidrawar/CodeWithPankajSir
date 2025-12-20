class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>s;
        
        for(int i=0;i<a.size();i++)
            s.insert(a[i]);
        for(int j=0;j<b.size();j++)
            s.insert(b[j]);
        
        vector<int> res;
        
        for(auto it:s)
            res.push_back(it);
        
        //sort(res.begin(),res.end());
        
        return res;
    }
};
