
#include <iostream>
#include <string.h>
using namespace std;

void replace(char input[])
{
    int l = strlen(input);
    if(l==0 || l==1)
        return ;
    else if(input[0] == input[1])
    {
        for(int i=0;i<l;i++)
            input[i] = input[i+1];
        replace(input);
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
