class Solution {
  public:
    int facDigits(int N) {
        // code here
        if(N==0 || N==1)
            return 1;
        
        double sum = 0;
        for(int i=2;i<=N;i++)
            sum += log10(i);
        
        return (int)sum + 1;
    }
};
