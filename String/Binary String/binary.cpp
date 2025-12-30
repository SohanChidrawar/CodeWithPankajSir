// TC : O(N^2)  where N is length of string

class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int n = s.length();
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s[j]=='1')
                        count++;
                }
            }
        }
        return count;
