/*
To minimize the number of coins required, we should always pick the largest possible denomination first and then move to smaller ones. 
This ensures that the total coins used are minimum.
*/

class Solution {
  public:
    int findMin(int n) {
        // code here
        int count = 0;
        vector<int>denomination = {1,2,5,10};
        int q = denomination.size();
        
        for(int i=q-1;i>=0;i--)
        {
            count += n/denomination[i];
            n = n%denomination[i];
        }
        
        return count;
    }
};
