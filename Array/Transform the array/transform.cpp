class Solution {
  public:
    vector<int> valid(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        
        // shift valid number to left
        int index = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != 0)
                arr[index++] = arr[i];
        }
        while(index<n)
            arr[index++] = 0;
            
        // merging equal neighbour
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=0 && arr[i]==arr[i+1])
            {
                arr[i] *= 2;
                arr[i+1] = 0;
            }
        }
        
        // shift valid number to left
        index = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != 0)
                arr[index++] = arr[i];
        }
        
        // fill remaining zero in arr
        while(index < n)
            arr[index++] = 0;
        
        return arr;
    }
};
