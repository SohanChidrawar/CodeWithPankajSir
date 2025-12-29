
class Solution {
  public:
    
    bool alphabet(char x)
    {
        return ((x>='A' && x<='Z') || (x>='a' && x<='z'));
    }
    
    string reverse(string s) {
        // code here.
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
