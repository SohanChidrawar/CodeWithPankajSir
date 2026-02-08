class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        // wc if all the element need to remove
        int ans = n;
        int right = 0;


        for(int left=0;left<n;left++)
        {
            long long limit = (long long)nums[left] * k;
            while(right < n && nums[right] <= limit)
                right += 1;
            // right-left give window size and n-window size give removal of element
            ans = min(ans, n-(right - left));
        }

        return ans;
    }
};
