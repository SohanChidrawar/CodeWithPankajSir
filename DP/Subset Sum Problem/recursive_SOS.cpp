class Solution {
  public:
  
    int SOS(vector<int>& arr, int n, int sum)
    {
        // base condition
        if(sum==0)
            return 1;
        if(n==0 && sum!=0)
            return 0;
            
        // majboori
        if(arr[n-1]>sum)
            return SOS(arr,n-1,sum);
        else
            return SOS(arr,n-1,sum) || SOS(arr,n-1,sum-arr[n-1]);
    }
  
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        
        if(SOS(arr,n,sum))
            return true;
        else
            return false;
    }
};
