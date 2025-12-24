class Solution {
  public:
    
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<bool>visited(n+1,false);
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0 && arr[i]<=n)
                visited[arr[i]-1] = true;
        }
        
        for(int i=1;i<=n;i++)
            if(visited[i-1]==false)
                return i;
                
        return n+1;
    }
};
