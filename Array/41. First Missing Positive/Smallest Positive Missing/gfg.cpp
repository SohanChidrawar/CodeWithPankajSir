class Solution {
  public:
    
    bool exist(vector<int>& arr, int target)
    {
        int left = 0;
        int right = arr.size()-1;
        int mid = (left+right)/2;
        
        while(left<=right)
        {
            if(arr[mid]==target)
                return true;
            else if(arr[mid]>target)
                right = mid-1;
            else
                left = mid+1;
        }
        return false;
    }
  
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=1;i<=n;i++)
        {
            if(!exist(arr,i))
                return i;
        }
        return n+1;
    }
};
