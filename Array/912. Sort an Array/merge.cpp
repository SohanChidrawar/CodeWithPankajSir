class Solution {
public:

    void merge(vector<int>& nums, int left, int mid, int right)
    {
        int n1 = mid-left+1;
        int n2 = right-mid;

        vector<int>arr1(n1),arr2(n2);

        // copy data to temp array
        for(int i=0;i<n1;i++)
        {
            arr1[i] = nums[left+i];
        }
        for(int j=0;j<n2;j++)
        {
            arr2[j] = nums[mid+1+j];
        }

        int i=0,j=0,k=left;

        while(i<n1 && j<n2)
        {
            if(arr1[i]<arr2[j])
                nums[k++] = arr1[i++];
            else
                nums[k++] = arr2[j++];
        }

        while(i < n1)
            nums[k++] = arr1[i++];
        while(j<n2)
            nums[k++] = arr2[j++]; 
    }

    void mergesort(vector<int>& nums, int left, int right)
    {
        if(left<right)
        {
            int mid = left + (right-left)/2;
            mergesort(nums,left,mid);
            mergesort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        mergesort(nums,0,n-1);
        return nums;
    }
};
