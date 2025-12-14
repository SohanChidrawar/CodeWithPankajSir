#include<iostream>
#include<string.h>
using namespace std;

void subsequence(int index, string original, string tillnow)
{
    if(index == original.size())
    {
        cout<<tillnow<<endl;
        return ;
    }
    
    subsequence(index+1,original,tillnow+original[index]);
    subsequence(index+1,original,tillnow);
}

int main()
{
    string original;
    cout<<"Enter the original string: ";
    cin>>original;
    subsequence(0,original,"");
    
    return 0;
}
