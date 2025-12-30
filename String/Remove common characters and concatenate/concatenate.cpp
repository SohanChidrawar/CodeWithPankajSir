// TC : O(N*M) where N and M is length of string 1 and string 2

class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        //  code here
        int n = s1.length();
        int m = s2.length();
        string ans = "";
        for(int i=0;i<n;i++)
        {
            bool flag = true;
            char ch = s1[i];
            for(int j=0;j<m;j++)
            {
                if(ch==s2[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans = ans + ch;
        }
        for(int j=0;j<m;j++)
        {
            bool flag1 = true;
            char ch1 = s2[j];
            for(int i=0;i<n;i++)
            {
                if(ch1==s1[i])
                {
                    flag1 = false;
                    break;
                }
            }
            if(flag1)
                ans = ans + ch1;
        }
        int p = ans.length();
        if(p>=1)
            return ans;
        else
            return "-1";
    }
};
