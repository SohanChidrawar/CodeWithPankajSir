class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n<2) return {-1};
        
        int first = INT_MAX;
        int second = INT_MAX;
        
        for(int x:arr)
        {
            if(x<first)
            {
                second = first;
                first = x;
            }
            else if(x>first && x<second)
            {
                second = x;
            }
        }
        if(second == INT_MAX)
            return {-1};
        return {first,second};
        
    }
};
