

class Solution {
  public:
    string arrangeString(string str, int x, int y) {
        // code here.
        int p = str.length();
        int m = 0;  //to count number of 0
        int n = 0;  // to count number of 1
        string res = "";
        for(int i=0;i<p;i++)
        {
            if(str[i]=='0')
                m++;
            else
                n++;
        }
        
        while(m>0 || n>0)
        {
            for(int i=0;i<x && m>0;i++)
            {
                res += "0";
                m--;
            }
            
            for(int j=0;j<y && n>0;j++)
            {
                res += "1";
                n--;
            }
        }
        
        return res;
    }
};
