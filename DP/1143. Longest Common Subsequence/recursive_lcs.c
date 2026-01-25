#include<string.h>

using namespace std;

class Solution {
  public:
    int max(int a, int b)
    {
        return a>b?a:b;
    }
    int lcs1(string &s1, string &s2, int m, int n)
    {
        if(m==0 || n==0)
            return 0;
        if(s1[m-1]==s2[n-1])
            return 1+lcs1(s1,s2,m-1,n-1);
        return max(lcs1(s1,s2,m,n-1),lcs1(s1,s2,m-1,n));
    }
    
    int lcs(string &s1, string &s2) {
        // code here
        return lcs1(s1,s2,s1.length(),s2.length());
    }
};
