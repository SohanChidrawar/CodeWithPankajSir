
#include <iostream>
using namespace std;

bool validshuffle(string &s1, string &s2, string &s3)
{
    int n = s1.length();
    int m = s2.length();
    int p = s3.length();
    
    if((n+m)!=p)
        return false;
    
    int count[126]={0};
  
    for(int i=0;i<n;i++)
        count[s1[i]]+=1;
  
    for(int i=0;i<m;i++)
        count[s2[i]]+=1;
  
    for(int i=0;i<p;i++)
        count[s3[i]]-=1;
  
    for(int i=0;i<126;i++)
        if(count[i]!=0)
            return false;
    return true;
}

int main()
{
    string s1 = "BA";
    string s2 = "XY";
    string s3 = "XYABC";
    bool val = validshuffle(s1,s2,s3);
    cout<<val;
    return 0;
}
