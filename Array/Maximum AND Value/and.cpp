class Solution {
  public:
    int findMaxAnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxi = 0;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int add = arr[i] & arr[j];
                if(add>maxi)
                    maxi = add;
            }
        }
        return maxi
    }
};
