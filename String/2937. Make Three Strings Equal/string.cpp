class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int m = s1.length();
        int n = s2.length();
        int o = s3.length();
        int L = 0;             // length of common prefix

        while(L<m && L<n && L<o && s1[L] == s2[L] && s2[L] == s3[L])
        {
            L++;
        }

        // no common prefix available
        if(L==0)
            return -1;

        // remove extra character beyound prefix
        return (m-L) + (n-L) + (o-L);
    }
};
