class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int left,right;
        int maxlen = 1;
        int start = 0;

        for(int i=1;i<n;i++)
        {
            //even length palindrome
            left = i-1;
            right = i;

            while(left>=0 && right <n && s[left]==s[right])
            {
                if(right-left+1 > maxlen)
                {
                    start = left;
                    maxlen = right-left+1;
                }
                left--;
                right++;
            }

            //odd length palindrome
            left = i-1;
            right = i+1;
            while(left>=0 && right< n && s[left] == s[right])
            {
                if(right-left+1 > maxlen)
                {
                    start = left;
                    maxlen = right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxlen);
    }
};
