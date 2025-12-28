// TC: O(N) SC: O(N)

class Solution {
  public:
    char firstRep(string s) {
        // code here.
        int n = s.length();

        int count[126]={0};
        
        for(int i=0;i<n;i++)
            count[s[i]]++;
            
        for(int i=0;i<n;i++)
        {    if(count[s[i]]>1)
                return s[i];
        }
        return '#';
    }
};
