class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {   
            for(int j =i+1;j<n;j++)
            {
                int num = nums[i] ^ nums[j];
                if(num>sum)
                    sum = num;
            }
        }
        return sum;
    }
};
