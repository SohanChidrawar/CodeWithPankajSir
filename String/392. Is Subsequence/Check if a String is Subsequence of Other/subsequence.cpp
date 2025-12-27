// TC : O(N) or O(M)

class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int n = s1.length();
        int m = s2.length();
        int i=0;
        for(int j=0;j<m && i<n;j++)
        {
            if(s1[i] == s2[j])
                i++;
            else
                continue;
        }
        return i==n;
    }
};
