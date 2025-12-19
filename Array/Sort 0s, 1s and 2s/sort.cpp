class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                c0++;
            if(arr[i]==1)
                c1++;
            if(arr[i]==2)
                c2++;
        }
        
        int k=0;
        for(int i=0;i<c0;i++)
            arr[k++] = 0;
        for(int j=0;j<c1;j++)
            arr[k++] = 1;
        for(int l=0;l<c2;l++)
            arr[k++] = 2;
    }
};
