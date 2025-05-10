bool find132pattern(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            for(int k=j+1;k<numsSize;k++)
            {
                if(nums[i]<nums[k] && nums[k]<nums[j])
                    return 1;
            }
        }
    }
    return 0;
}


//Time complexity is high. All test cases on leetcode don not run successfully
