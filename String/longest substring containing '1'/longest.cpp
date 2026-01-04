int maxlength(string s) {
    // your code here
    int n = s.length();
    int maxlen = 0;
    int su = 0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            su++;
            if(su>maxlen)
                maxlen = su;
        }
        else
            su = 0;
    }
    return maxlen;
}
