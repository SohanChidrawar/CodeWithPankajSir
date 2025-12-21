class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        vector<int> res;
        
        for(auto vec: mat)
        {
            for(int val: vec)
                res.push_back(val);
        }
        
        sort(res.begin(),res.end());
        return res;
    }
};
