class Solution {
  public:
    
    int count(int index, int n, vector<int> &memo)
    {
        // base case
        if(index >= n)
            return 1;
        
        
        if(memo[index] != -1)
            return memo[index];
            
        // if 1's is taken
        int take = count(index+2,n,memo);
    
        // if 1 is not taken
        int nott = count(index+1,n,memo);
        
        return memo[index] = take + nott;
    }
  
    int countStrings(int n) {
        // code here
        // if(n==1)
        //     return 2;
        // if(n==2)
        //     return 3;
        
        vector<int> memo(n,-1);
        return count(0,n,memo);
    }
};
