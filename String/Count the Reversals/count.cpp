// TC : O(N)

class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int n = s.length();
        if(n%2==1)
            return -1;
            
        stack<char> st;
        int c1=0,c2=0;  // c1 for { and c2 for }
        
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            if(ch == '{')
            {
                st.push(ch);
                c1++;
            }
            else if(ch=='}' && !st.empty())
            {
                st.pop();
                c1--;
            }
            else
                c2++;
        }
        if(c1 & 1)
            c1 = (c1/2)+1;
        else
            c1 = c1/2;
            
        if(c2 & 1)
            c2 = (c2/2)+1;
        else
            c2 = c2/2;
            
        return c1+c2;
    }
};
