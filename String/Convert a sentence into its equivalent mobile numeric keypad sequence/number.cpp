// TC : O(N)  where N is length of string

string printSequence(string S) {
    // code here.
    int n = S.length();
    
    string out[26] = {"2","22","222","3","33","333","4","44","444","5","55","555",
    "6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    string ans = "";
    
    for(int i=0;i<n;i++)
    {
        if(S[i] == ' ')
            ans = ans+"0";
        else
        {
            int index = S[i]-'A';
            ans = ans+out[index];
        }
    }
    return ans;
}
