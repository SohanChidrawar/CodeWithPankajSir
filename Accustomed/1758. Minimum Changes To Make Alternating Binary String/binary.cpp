class Solution {
public:
    int minOperations(string s) {
        // count how many char mathch the pattern starting from 0;
        int c = 0;
        // j represet expected bit(0 or 1) for alternating pattern
        int j=0;
        int n;

        for(n=0;n < s.size();n++)
        {
            if(s[n] - '0' == j)
                c++;
            j ^= 1;
        }

        return min(c,n-c);

    }
};
