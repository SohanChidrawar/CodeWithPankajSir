
class Solution {
  public:
    string convert(string& s) {
        // code here
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            // if it is first character or previous char is space
            if(i==0 || s[i-1]==' ')
            {
                if(isalpha(s[i]))
                    s[i] = toupper(s[i]);
            }
        }
        
        return s;
    }
};
