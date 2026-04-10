class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        if(n<3)
            return {};
        
        int prev = INT_MAX;
        int first = INT_MAX;
        int second = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            int x = arr[i];
            
            if(x<=first)
                first = x;
            else if(x <= second)
            {
                second = x;
                prev = first;
            }
            else
                return {prev,second,x};
        }
        
        return {};
    }
};
