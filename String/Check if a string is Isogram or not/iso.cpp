// TC : O(N) where N is length of string

class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        int n = s.length();
        int count[26] = {0};
        
        for(int i=0;i<n;i++)
        {
            if(count[s[i] - 'a'] == 0)
                count[s[i] - 'a']++;
            else
                return false;
        }
        return true;
        
    }
};
