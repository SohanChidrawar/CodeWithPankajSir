class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int count = 0;
        
        unordered_map<int,int>mp;
        int prexor = 0;
        
        for(int val : arr)
        {
            prexor = prexor ^ val;
            
            // If prefXOR ^ k exist in mp then there is a subarray 
      	    // ending at i with XOR equal to k
            count = count + mp[prexor ^ k];
            
            if(prexor == k)
                count++;
            // Add xor of subarray in the map
            mp[prexor]++;
        }
        
        return count;
    }
};
