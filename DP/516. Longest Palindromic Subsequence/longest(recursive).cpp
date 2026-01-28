class Solution {
  public:
  
    int longest(string &s, int low, int high)
    {
        if(low > high)
            return 0;
        
        if(low == high)
            return 1;
        
        if(s[low] == s[high])
            return 2 + longest(s,low+1,high-1);
        
        return max(longest(s,low+1,high),longest(s,low,high-1));
    }
  
    int longestPalinSubseq(string &s) {
        // code here
        int n = s.size();
        
        return longest(s,0,n-1);
    }
};
