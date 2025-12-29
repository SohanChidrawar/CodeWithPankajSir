// TC : O(N)

class Solution {
  public:

    int LastIndex(string s, char p) {
        // complete the function here
        int n = s.length();
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==p)
                count = i;
        }
        if(count)
            return count;
        else
            return -1;
    }
};
