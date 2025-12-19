class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int k = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[i],arr[k]);
                k++;
            }
        }
        for(int j=k;j<n;j++)
            arr[j]=0;
    }
};
