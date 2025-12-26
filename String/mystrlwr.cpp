
#include <iostream>
#include<string.h>
using namespace std;

int mystrlen(const char* src)
{
    int count=0;
    while(*src!='\0')
    {
        count++;
        src++;
    }
    return count;
}

int conversion(int character)
{
    if(character >='A' && character <='Z')
        return character+32;
    return character;
}

void strlwr(char* src)
{
    int l = mystrlen(src);
    for(int i=0;i<l;i++)
    {
        src[i] = conversion(src[i]);
    }
}

int main()
{
    char str1[10] = "NAUgHTY";
    puts(str1);
    strlwr(str1);
    puts(str1);

    return 0;
}
