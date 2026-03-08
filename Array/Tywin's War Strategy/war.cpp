class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n =arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]%k == 0)
                arr[i] = 0;
            else
                arr[i] = k - (arr[i]%k);
        }
        
        sort(arr.begin(),arr.end());
        
        int troop = (n+1)/2;
        int ans = 0;
        for(int i=0;i<troop;i++)
            ans += arr[i];
        
        return ans;
    }
};
