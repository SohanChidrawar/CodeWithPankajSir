/*
We want to determine if the last character in a binary array must be a one-bit character (0) or could be part of a two-bit character (10 or 11).

We can greedily decode the array from left to right:

If we see 0:
the next bit could be a 1 or a 0:
01, 00 are not a valid character.
Thus, 0 must only be a one-bit character
→ move forward by 1
If we see 1:
It must be the start of a two-bit character 10 or 11
→ move forward by 2

After processing all characters, we check:

If i=n−1:

we landed exactly at the last bit → it's a one-bit character (true).
If i=n:

we skipped the last bit → it was part of a two-bit character (false).
*/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i=0;
        while(i<n-1)
        {
            if(bits[i] == 0)
                i += 1;
            else
                i += 2;
        }

        return i==n-1;
    }
};
