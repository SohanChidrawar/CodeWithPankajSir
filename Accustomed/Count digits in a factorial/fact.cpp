/*
BUt this will not work for large value of n as per given constraint
*/


class Solution {
  public:
    int facDigits(int N) {
        // code here
        int fact = 1;
        int count = 0;
        
        for(int i=1;i<=N;i++)
            fact = fact*i;
            
        while(fact>0)
        {
            count++;
            fact = fact/10;
        }
        
        return count;
    }
};
