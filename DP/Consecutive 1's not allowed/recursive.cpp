/*
The idea is to explore two possible choices at each step of building the binary string. At each index, we have two choices: either place a 0 or place a 1.

If we choose 0, we can proceed to the next index.
If we choose 1, we must ensure that the next index does not contain a 1, so we skip the next index.
*/

class Solution {
  public:
    
    int count(int index, int n)
    {
        // base case
        if(index >= n)
            return 1;
        
        // if 1's is taken
        int take = count(index+2,n);
    
        // if 1 is not taken
        int nott = count(index+1,n);
        
        return take + nott;
    }
  
    int countStrings(int n) {
        // code here
        // if(n==1)
        //     return 2;
        // if(n==2)
        //     return 3;
        
        return count(0,n);
    }
};
