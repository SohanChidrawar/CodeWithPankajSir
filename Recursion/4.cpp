#include <iostream>
#include <string.h>
using namespace std;

void replace(char input[])
{
    int n = strlen(input);
    if(n==0)
        return;
        
    if(input[0] == 'x')    //first char is x so delete it
    {
        for(int i=0;i<n;i++)
            input[i] = input[i+1];
    
        replace(input);
    }                     // first char is not x so move to next char
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
