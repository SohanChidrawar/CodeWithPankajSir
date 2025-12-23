// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        int *pre = new int[n];
        int *post = new int[n];
        
        pre[0] = arr[0];
        post[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++)
            pre[i] = pre[i-1] * arr[i];
        
        for(int i=n-2;i>=0;i--)
            post[i] = post[i+1] * arr[i];
            
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            if(i==0)
                ans.push_back(post[i+1]);
            else if(i==n-1)
                ans.push_back(pre[i-1]);
            else
                ans.push_back(pre[i-1]*post[i+1]);
        }
        
        return ans;
    }
};
