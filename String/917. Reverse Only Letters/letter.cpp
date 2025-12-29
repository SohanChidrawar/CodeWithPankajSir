// TC:O(N) where N is length of string 

class Solution {
public:

    bool alphabet(char x)
    {
        return ((x>='A' && x<='Z') || (x>='a' && x<='z'));
    }

    string reverseOnlyLetters(string s) {
        int n = s.length();
        int i=0,j=n-1;

        while(i<j)
        {
            if(!alphabet(s[i]))
                i++;
            else if(!alphabet(s[j]))
                j--;
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
