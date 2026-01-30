class Solution {
  public:
    int isDivisibleBy10(string bin) {
        // code here
        
        int rem = 0;
        
        for(int i=0;i<bin.size();i++)
        {
            char digit = bin[i];
            int num = digit - '0';
            rem = (rem *2 + num)%10;
        }
        
        if(rem==0)
            return 1;
        else
            return 0;
    }
};
