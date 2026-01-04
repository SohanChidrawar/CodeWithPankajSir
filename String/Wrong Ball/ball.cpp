int countWrongPlacedBalls(string s) {
    // code here.
    int n = s.length();
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R' && i%2!=0)
            count++;
        else if(s[i]=='B' && i%2==0)
            count++;
        else
            continue;
    }
    return count;
}
