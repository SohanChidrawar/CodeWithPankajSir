class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        int j = 0;
        int *a = new int[n];
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
                a[j++] = arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
                a[j++] = arr[i];
        }
        
        for(int i=0;i<n;i++)
            arr[i] = a[i];
    }
};
