// TC : O(N)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();

        if(m!=n)
            return false;
        
        int arr[126] = {0};
        for(int i=0;i<m;i++)
        {
            arr[s[i]] += 1;
            arr[t[i]] -= 1;
        }

        for(int i=0;i<126;i++)
        {
            if(arr[i]!=0)
                return false;
        }
        return true;
    }
};
