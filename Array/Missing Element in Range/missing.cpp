class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        vector<bool>present(high-low+1, false);
        
        for(int x: arr)
        {
            if(x>=low && x<=high)
                present[x-low] = true;
        }
        
        vector<int>ans;
        for(int i=0;i<present.size();i++)
        {
            if(!present[i])
                ans.push_back(low+i);
        }
        
        return ans;
    }
};
