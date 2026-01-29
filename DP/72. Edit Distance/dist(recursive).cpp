class Solution {
  public:
    // Function to compute the edit distance between two strings
    
    int fun(string &s1, string &s2, int i, int j)
    {
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(s1[i]==s2[j])
            return fun(s1,s2,i-1,j-1);
        
        // insert fun(i-1,j)  delete(i,j-1)   replace(i-1,j-1)
        return 1 + min(fun(s1,s2,i-1,j),min(fun(s1,s2,i,j-1),fun(s1,s2,i-1,j-1)));
    }
    
    int editDistance(string& s1, string& s2) {
        // code here
        int m = s1.size();
        int n = s2.size();
        return fun(s1,s2,m-1,n-1);
    }
};
