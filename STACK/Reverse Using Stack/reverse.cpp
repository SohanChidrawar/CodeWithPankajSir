class Solution {
  public:
    string reverse(const string& S) {
        // code here
        int len = S.length();
        char *a = new char[len+1];
        
        stack<int> s;
        
        for(int i=0;i<len;i++)
            s.push(S[i]);
        
        int i=0;
        while(!s.empty())
        {
            a[i++] = s.top();
            s.pop();
        }
        a[i] = '\0';
        
        return a;
    }
};
