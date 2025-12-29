// TC : O(N)

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int map[26] = {0};
        int n = s.length();
        char x = 'a';
        int count = 0;
        
        for(int i=0;i<n;i++)
            map[s[i] - 'a']++;
            
        for(int i=0;i<26;i++)
        {
            if(map[i] > count)
            {
                count = map[i];
                x = 'a' + i;
            }
            // char is same frequency
            else if(map[i] == count && count>0)
            {
                // tie pick lexicographically smaller
                char y = 'a'+i;
                if(y<x)
                    x = y;
            }
        }
        return x;
    }
};
