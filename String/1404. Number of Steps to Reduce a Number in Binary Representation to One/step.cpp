class Solution {
public:
    int numSteps(string s) {
        if(s == "1")
            return 0;
        
        int step = 0, carry = 0;
        int n = s.length();

        for(int i = n-1;i>0;i--)
        {
            int bit = (s[i] - '0') + carry;

            if(bit%2 == 0)
            {
                step += 1;
            }
            else
            {
                step += 2;
                carry = 1;
            }
        }

        return step + carry;
    }
};
