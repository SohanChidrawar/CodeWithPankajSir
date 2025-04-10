#include <stdio.h>

void mystrcpy(char* dest, char* source)
{
    while(*source != '\0')
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}
int main() {
    // Write C code here
    char arr[10] ;
    mystrcpy(arr,"Sohan");
    printf("%s",arr);
    
    return 0;
}
