class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int *left = new int[n];
        int *right = new int[n];
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++)
            left[i] = left[i-1]+arr[i];
            
        for(int i=n-2;i>=0;i--)
            right[i] = right[i+1]+arr[i];
            
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i])
                return i;
        }
        return -1;
    }
};
