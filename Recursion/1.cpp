#include <iostream>
using namespace std;

int findsum(int arr[], int size)
{
    if(size==0)
        return 0;
        
    return arr[0]+findsum(arr+1,size-1);
}

int main()
{
    int a[] = {5,10,15,20,25};
    cout<<"Sum of element using recursion is: "<<findsum(a,5);
    
    return 0;
}
