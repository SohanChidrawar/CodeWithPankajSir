/*
Two strings are considered close if:
- They have the same set of characters.
- Because you cannot introduce new characters with the allowed operations.
- The frequency distribution of characters can be rearranged to match.
- Operation 1 (swap) lets you reorder characters freely.
- Operation 2 (transform) lets you swap the identities of characters, so as long as the multiset of frequencies matches, you can transform one into the other.

Conditions
So word1 and word2 are close if:
- They have the same length.
- They use the same set of unique characters.
- The sorted list of character frequencies in word1 equals the sorted list of character frequencies in word2.

*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        if(m!=n)
            return false;
        
        vector<int> freq1(26,0), freq2(26,0);
        for(char ch : word1)
            freq1[ch - 'a']++;
        
        for(char ch : word2)
            freq2[ch - 'a']++;
        
        // check for same set of character
        for(int i=0;i<26;i++)
        {
            if((freq1[i] == 0 && freq2[i] != 0) || (freq1[i]!=0 && freq2[i] == 0))
                return false;
        }

        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1 == freq2;

    }
};
