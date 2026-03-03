/*
The idea is to find the longest subarray with at most two distinct integers by trying every possible starting index. For each starting point, 
we expand the subarray to the right while tracking the frequency of elements using a map. If the number of distinct elements exceeds two, we stop
expanding. During this process, we update the maximum length of valid subarrays encountered.
*/

class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        
      int n = arr.size();
      int best = 0;
       
      for(int i=0;i<n;i++)
      {
          unordered_map<int,int>freq;
          int distinct = 0;
           
          for(int j=i;j<n;j++)
          {
              int val = arr[j];
              if(freq[val] == 0)
                    distinct++;
                freq[val]++;
                
                if(distinct>2)
                    break;
                
                best = max(best,j-i+1);
          }
      }
      return best;
    

    }
};
