#include<iostream>
#include<vector>
using namespace std;

void generate(string abtak, int open, int close,vector<string>&v)
{
    if(open==0 && close == 0)
    {
        v.push_back(abtak);
        return;
    }
    
    if(open>0)
        generate(abtak+'(',open-1,close,v);
    
    if(close>0 && open<close)
        generate(abtak+')',open,close-1,v);
}

int main()
{
    int n;
    vector<string>v;
    cout<<"Enter a number: ";
    cin>>n;
    generate("",n,n,v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    
    return 0;
}
