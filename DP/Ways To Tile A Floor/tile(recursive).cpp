class Solution {
  public:
    int numberOfWays(int n) {
        // code here
        
        // base case
        if(n<0)
            return 0;
        if(n==0)
            return 1;
        
        int count = 0;
        // if tile placed vertically
        count = numberOfWays(n-1);
        
        // if two tile placed horizontally
        count += numberOfWays(n-2);
        
        return count;
    }
};
