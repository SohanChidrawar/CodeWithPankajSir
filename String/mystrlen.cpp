#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int mystrlen(const char* dest)
{
    int count=0;
    while(*dest!='\0')
    {
        count++;
        dest++;
    }
    return count;
}

int main()
{
    char str1[] = "Naughty";
    int l = strlen(str1);
    int m = mystrlen(str1);
    int n = mystrlen(str1+2);
    cout<<"Length of str1 is: "<<l<<endl;
    cout<<"Length of string is: "<<m<<endl;
    cout<<"Length of string is: "<<n<<endl;
    return 0;
}
