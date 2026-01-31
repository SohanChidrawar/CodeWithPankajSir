
class Solution {
  public:
    long long noOfDigits(int N) {
        // code here
        int fibo[N+1];
        fibo[0]=0;
        fibo[1]=1;
        
        for(int i=2;i<=N;i++)
            fibo[i] = fibo[i-1]+fibo[i-2];
        
        int a = fibo[N];
        int count = 0;
        while(a>0)
        {
          count++;
          a = a/10;
        }
        
        return count;
    }
};
