class Solution {

  public:
    int minSteps(int N) {
        // Your code goes here
        if(N==1)
            return 0;
        
        int x = minSteps(N-1);
        int y = INT_MAX;
        int z = INT_MAX;
        
        if(N%2==0)
            y = minSteps(N/2);
        
        if(N%3==0)
            z = minSteps(N/3);
        
        return 1+min(x,min(y,z));
    }
}
