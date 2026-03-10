class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        /*
        - For each index i, we want to know how far to the right we can extend before hitting an element smaller than arr[i].
        - That’s exactly the next smaller element problem.
        - If the next smaller element of arr[i] is at index j, then all subarrays starting at i and ending before j are valid.
        - Count = (j - i) (because subarrays [i..i], [i..i+1], …, [i..j-1] are valid).
        - If no smaller element exists, then j = n.
        */
        
        int n = arr.size();
        int count = 0;
        vector<int>nextsmallest(n,n);
        stack<int>st;
        
        // find next smallest element from index that you are working on
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i] < arr[st.top()])
            {
                nextsmallest[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            count += (nextsmallest[i] - i);
        }
        
        return count;
        
        
    }
};
