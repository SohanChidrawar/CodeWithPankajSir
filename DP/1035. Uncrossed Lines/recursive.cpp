class Solution {
public:

    int isSubsequence(vector<int>&nums,vector<int>&curr)
    {
        int i=0,j=0;
        while(i<nums.size() && j<curr.size())
        {
            if(nums[i]==curr[j])
                j++;
            i++;
        }
        return j == curr.size();
    }

    void generatesubsequence(vector<int>& nums1, vector<int>& nums2,int index,
    vector<int>& current, int &maxlen)
    {
        if(index == nums1.size())
        {
            // check if current subsequnec exist in nums2?
            if(!current.empty() && isSubsequence(nums2,current))
            {
                maxlen = max(maxlen, (int)current.size());
            }
            return;
        }

        // include the index number in curr
        current.push_back(nums1[index]);
        generatesubsequence(nums1,nums2,index+1,current,maxlen);

        //do not include current number
        current.pop_back();
        generatesubsequence(nums1,nums2,index+1,current,maxlen);
    }

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int maxlen = 0;
        vector<int> current;
        generatesubsequence(nums1,nums2,0,current,maxlen);
        return maxlen;
    }
};
