#include<iostream>
using namespace std;

void generate(string abtak, int open, int close)
{
    if(open==0 && close == 0)
    {
        cout<<abtak<<endl;
        return;
    }
    
    if(open>0)
        generate(abtak+'(',open-1,close);
    
    if(close>0 && open<close)
        generate(abtak+')',open,close-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    generate("",n,n);
    
    return 0;
}
