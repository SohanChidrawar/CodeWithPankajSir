class Solution {
public:

    int helper(vector<int>& nums1, vector<int>& nums2,int i, int j, vector<vector<int>>&dp)
    {
        if(i==-1 || j==-1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];

        // checking the equality if there are infront of each other
        if(nums1[i] == nums2[j])
            return 1 + helper(nums1,nums2,i-1,j-1,dp);
        
        dp[i][j] = max(helper(nums1,nums2,i-1,j,dp),helper(nums1,nums2,i,j-1,dp));
        return dp[i][j];
    }

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return helper(nums1,nums2,m-1,n-1,dp);
    }
};
