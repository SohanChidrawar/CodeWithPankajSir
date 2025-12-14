#include <iostream>
using namespace std;

bool Issorted(int arr[], int n)
{
    if(n==0 || n==1)
        return true;
    if(arr[0]>arr[1])
        return false;
        
    return Issorted(arr+1,n-1);
}

int main()
{
    int a[] = {10,25,78};
    if(Issorted(a,3))
        cout<<"Array is Sorted "<<endl;
    else
        cout<<"Array is not sorted "<<endl;
        
    return 0;
}
