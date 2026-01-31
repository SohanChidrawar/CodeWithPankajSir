class Solution {
  public:
    int isFactorial(int N) {
        // code here
        int fact = 1;
        
        for(int i=1;i<=N;i++)
        {
            if(fact<=N)
            {
                fact *= i;
                if(fact==N)
                    return 1;
            }
            else
            {
                fact = 0;
                break;
            }
        }
        return fact;
    }
};
