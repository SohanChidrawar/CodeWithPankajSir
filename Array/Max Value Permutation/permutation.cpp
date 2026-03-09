class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        int MOD = 1e9 + 7;
        long long sum = 0;
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++)
            sum  = (sum + 1LL * arr[i] * i)%MOD;
        
        return int(sum);
    }
};
