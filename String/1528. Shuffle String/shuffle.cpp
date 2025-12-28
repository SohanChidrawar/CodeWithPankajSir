// TC : O(N)

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string t(n,0);

        for(int i=0;i<n;i++)
        {
            t[indices[i]] = s[i];
        }
        return t;
    }
};
