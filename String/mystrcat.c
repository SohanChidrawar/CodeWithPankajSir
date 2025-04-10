#include <stdio.h>

void mystrcat(char*dest, char* source)
{
    while(*dest!='\0')
        dest++;
    while(*source != '\0')
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

int main() {
    char arr[10] = "sohan";
    char arr1[10] = "chidrawar";
    mystrcat(arr,arr1);
    printf("%s",arr);
    return 0;

}
