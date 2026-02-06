class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums)
    {
        // int n = nums.size();
        // vector<int>result(n,0);

        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i] == 0)
        //         result[i] = 0;
        //     else if(nums[i]>0)
        //     {
        //         int newindex = (i+nums[i])%n;
        //         result[i] = nums[newindex];
        //     }
        //     else
        //     {
        //         int newindex = (i - abs(nums[i]) + n) % n;
        //         result[i] = nums[newindex];
        //     }
        // }
        // return result;

        int n = nums.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++)
        {
            int steps = nums[i];
            int index = i;

            if(steps == 0)
                result[i] = nums[i];
            else if(steps > 0)
            {
                while(steps-- >0)
                {
                    index++;
                    if(index == n)
                        index = 0;
                }
                result[i] = nums[index];
            }
            else
            {
                while(steps++ < 0)
                {
                    index--;
                    if(index == -1)
                        index = n-1;
                }
                result[i] = nums[index];
            }
        }
        return result;
    }
};
