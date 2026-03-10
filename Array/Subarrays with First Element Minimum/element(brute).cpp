class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count = n; // single element subarray is min among itself
        
        for(int i=0;i<n;i++)
        {            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] < arr[i])
                    break;           //stop if smaller found
                else
                    count++;
            }
        }
        
        return count;
    }
};
