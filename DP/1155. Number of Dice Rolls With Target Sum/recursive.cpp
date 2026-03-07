class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        // using recursion
        // base case
        if(n == 0 && target == 0)
            return 1;
        
        //invalid combination
        if(n==0 || target<=0)
            return 0;

        int ans = 0;
        for(int i=1;i<=k;i++)
            ans += numRollsToTarget(n-1,k,target-i);
        
        return ans;
    }

};
