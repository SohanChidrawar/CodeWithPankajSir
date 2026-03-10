class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int>result(n,-1);
        stack<int>st;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top() >= arr[i])
                st.pop();
            
            // If stack is not empty, top is NSE
            if(!st.empty())
                result[i] = st.top();
            
            // Push curr element
            st.push(arr[i]);
        }
        
        return result;
    }
};
