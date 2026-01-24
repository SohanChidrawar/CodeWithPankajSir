class Solution {
  public:
  
    int kp(vector<int> &wt, vector<int> &val, int n, int W)
    {
        if(n==0 || W==0)
            return 0;
        
        if(wt[n-1]>W)
            return kp(wt,val,n-1,W);
        
        int include = val[n-1]+kp(wt,val,n-1,W-wt[n-1]);
        int not_include = kp(wt,val,n-1,W);
        
        return include>not_include?include:not_include;
        
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size();
        return  kp(wt,val,n,W);
    }
};
