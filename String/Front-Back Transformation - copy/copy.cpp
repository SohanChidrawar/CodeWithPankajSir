string convert(string s) {
    // code here.
    string res;
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))
        {
            char s1 = 'Z' - (s[i]-'A');
            res = res + s1 ;
        }
        else
        {
            char c = 'z' - (s[i]-'a');
            res = res + c ;
        }
        
    }
    return res;
}
