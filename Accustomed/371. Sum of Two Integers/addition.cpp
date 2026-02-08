class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0)
        {
            // calculate the carry
            int carry = a & b;
            // calculate sum without carry
            a = a ^ b;
            // shift the carry left by one position
            b = carry << 1;
        }
        return a;
    }
};
