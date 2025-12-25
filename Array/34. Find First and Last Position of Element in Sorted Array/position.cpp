class Solution {
public:

    int firstocc(vector<int>& arr, int n, int k)
    {
        int low=0,high=n-1;
        int ans = -1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]==k)
            {
                ans = mid;
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
        int ans = -1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]==k)
            {
                ans = mid;
                low = mid+1;
            }
            else if(k<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;

        ans.push_back(firstocc(nums,n,target));
        ans.push_back(lastocc(nums,n,target));
        return ans;
    }
};
