class Solution {
  public:
    int singleDigit(int n) {
        // code here
        int sum = 0;
        
        while(n>0 || sum>9)
        {
            //if n become 0, reset it sum
            // and start next itear
            if(n==0)
            {
                n = sum;
                sum = 0;
            }
            
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
};
