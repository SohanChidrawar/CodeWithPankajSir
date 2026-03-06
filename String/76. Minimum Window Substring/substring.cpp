class Solution {
public:

    bool contain(string &res, string &t)
    {
        int hash[256] = {0};

        for(char ch: t)
            hash[ch]++;
        
        // for each char in substring decreament its key
        for(char ch:res)
        {
            if(hash[ch] > 0)
                hash[ch]--;
        }

        for(int i=0;i<256;i++)
        {
            if(hash[i]>0)
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.length();
        int min_len = INT_MAX;
        string res = "";

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string sub = s.substr(i,j-i+1);

                // check if substring contain all char of string p
                if(contain(sub,t))
                {
                    int n = sub.length();
                    if(n < min_len)
                    {
                        min_len = n;
                        res = sub;
                    }
                }
            }
        }
        return res;
    }
};
