#include <iostream>
#include <string.h>
using namespace std;

void replace(char input[])
{
    int n = strlen(input);
    if(n==0)
        return;
    
    if(input[0]=='x')
    {
        for(int i=0;i<n;i++)
            input[i] = input[i+1];
        replace(input);
    }
    else
        replace(input+1);
}

int main()
{
    char input[100];
    cout<<"Enter a string ";
    cin>>input;
    replace(input);
    cout<<input;
}
