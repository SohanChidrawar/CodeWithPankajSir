string isGoodString(string s) {
    // code here.
    int n = s.length();
    if(n==1)
        return "YES";
        
    for(int i=0;i<n-1;i++)
    {
        int x = s[i]-'a';
        int y = s[i+1]-'a';
        int diff = abs(x-y);
        int dist = min(diff,26-diff);
        
        if(dist != 1)
            return "NO";
    }
    return "YES";
}
