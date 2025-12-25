// TC: O(log n)

class Solution {
  public:
    
    int firstocc(vector<int>& arr, int n, int k)
    {
        int low=0,high=n-1;
        int ans=-1;
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]==k)
            {
                ans= mid;
                high = mid-1;
            }
            else if(k<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        return ans;
    }
    
    int lastocc(vector<int>& arr, int n, int k)
    {
        int low=0,high=n-1;
        int ans=-1;
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]==k)
            {
                ans= mid;
                low = mid+1;;
            }
            else if(k<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        return ans;
    }
  
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int a = firstocc(arr,n,target);
        int b = lastocc(arr,n,target);
        if(a==-1 && b==-1)
            return 0;
        else
            return b-a+1;
    }
};
