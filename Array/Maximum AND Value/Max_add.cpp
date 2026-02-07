/*
- The maximum bitwise AND will almost always come from the largest numbers in the array.
- Why? Because AND can only “keep” bits that are set in both numbers. Larger numbers tend to have more high bits set.
- So instead of checking all O(n^2) pairs, we can:
- Sort the array in descending order.
- Only check pairs among the top few elements (say top 32).
- Reason: An integer has at most 32 bits, so only the top 32 numbers can contribute to the maximum AND.

*/

class Solution {
  public:
    int findMaxAnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        // sort in descending order
        sort(arr.begin(),arr.end(),greater<int>());
        int maxi = 0;
        int limit = min(n,32);
        
        for(int i=0;i<limit;i++)
        {
            for(int j=i+1;j<limit;j++)
            {
                int add = arr[i] & arr[j];
                if(add>maxi)
                    maxi = add;
            }
        }
        return maxi;
    }
};
