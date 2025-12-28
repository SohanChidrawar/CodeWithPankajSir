// TC : O(N ^ 2)

class Solution {
  public:
    char firstRep(string s) {
        // code here.
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(s[i]==s[j])
                    return s[i];
        }
        return '#';
