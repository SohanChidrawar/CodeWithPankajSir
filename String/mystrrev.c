#include <stdio.h>
#include <string.h>

void mystrrev(char* str)
{
    int length = strlen(str);
    int start = 0;
    int end = length-1;
    char temp;
    while(start<end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char arr[20] = "Sohan Chidrawar";
    mystrrev(arr);
    printf("%s",arr);
    return 0;
}
