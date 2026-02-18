class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x = n >> 1;
        unsigned int y = n ^ x;

        return (y & (y+1)) == 0;
    }
};
