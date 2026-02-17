class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        
        int n = arr.size();
        int count = 0, ans = 0;
        
        vector<vector<int>>res;
        
        for(int i=0;i<n;i++)
        {
            res.push_back({arr[i][0],0});
            res.push_back({arr[i][1],1});
        }
        
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size();i++)
        {
            if(res[i][1]==0)
                count++;
            else
                count--;
            ans = max(ans,count);
        }
        return ans;
    }
};
