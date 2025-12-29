// TC:O(N) where N is length of string

class Solution {
public:

    bool vowel(char x)
    {
        return ((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||
        (x=='I')||(x=='O')||(x=='U'));
    }

    string reverseVowels(string s) {
        int n = s.length();
        int i=0,j=n-1;

        while(i<j)
        {
            if(!vowel(s[i]))
                i++;
            else if(!vowel(s[j]))
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
