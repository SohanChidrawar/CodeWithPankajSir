#include<iostream>
#include<string.h>
using namespace std;

void subsequence(string original, string tillnow)
{
    if(original.size()==0)
    {
        cout<<tillnow<<endl;
        return;
    }
    
    subsequence(original.substr(1),tillnow+original[0]);
    subsequence(original.substr(1),tillnow);
}

int main()
{
    string original;
    cout<<"Enter the original string: ";
    cin>>original;
    subsequence(original,"");
    
    return 0;
}
