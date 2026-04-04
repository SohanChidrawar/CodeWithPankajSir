/*
We directly generate the i'th Gray Code using the formula gray(i) = i XOR (i >> 1), we iterate from 0 to 2^n - 1, apply this formula for each value, 
convert the result into an n-bit binary string, store it, and finally print the sequence,.

Why does this formula work?

If we take a closer look at the formula,

When we do (i >> 1), all bits shift one position to the right, least significant bit is dropped and a 0 is inserted at the left.
When we do XOR of i with (i >> 1), all trailing flips cancel out in XOR
Only the first changing position survives
*/

class Solution {
  public:
    vector<string> graycode(int n) {
        // code here
        vector<string>result;
        
        int total = 1 << n;   // 2^n
        
        for(int i=0;i<total;i++)
        {
            int gray = i ^ (i>>1);   // generate gray code
            
            // Convert integer Gray code to binary string of length n
            string s;
            for(int bit=n-1;bit>=0;bit--)
            {
                // check if current bit is set (1) or not (0)
                s.push_back(((gray >> bit) & 1)?'1':'0');
            }
            result.push_back(s);
        }
        
        return result;
    }
};
