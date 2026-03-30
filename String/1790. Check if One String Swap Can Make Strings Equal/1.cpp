/*
- If the strings are already equal → return true.
- Otherwise, find the indices where s1[i] != s2[i].
- If there are exactly two mismatches, check if swapping those two characters in one string makes them equal.
- If there are more than two mismatches → return false.

*/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if(m!=n)
            return false;

        if(s1 == s2)
            return true;
        
        vector<int>diff;
        for(int i=0;i<m;i++)
        {
            if(s1[i]!=s2[i])
                diff.push_back(i);
        }

        if(diff.size()==2)
        {
            int i=diff[0], j=diff[1];
            return (s1[i]==s2[j]  &&  s1[j]==s2[i]);
        }

        return false;
    }
};
