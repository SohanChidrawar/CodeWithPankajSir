#include <iostream>
#include <string.h>
using namespace std;

void replace(char input[])
{
    int l = strlen(input);
    if( l==0)
        return;
    if(input[0]=='x')
    {
        for(int i=l;i>0;i--)
            input[i+2] = input[i];

        input[0] = 'a';
        input[1] = 'b';
        input[2] = 'c';
        
        replace(input+3);
    }
    else
        replace(input+1);
}

int main()
{
    char input[100];
    cout<<"Enter a string: ";
    cin>>input;
    replace(input);
    cout<<input;
}
