// return all subsequence and print all subsequence
#include <iostream>
using namespace std;

int subseq(string str, string output[])
{
    int l = str.size();
    //base case
    if(l==0)
    {
        output[0] = "";
        return 1;
    }
    //apply recursion
    int smallsize = subseq(str.substr(1),output);
    for(int i=0;i<smallsize;i++)
        output[i+smallsize] = str[0]+output[i];
    return 2*smallsize; 
}

int main()
{
    string input;
    cout<<"Enter the string for subsequence: ";
    cin>>input;
    string *output = new string[100];
    int count;
    count = subseq(input,output);
    for(int i=0;i<count;i++)
        cout<<output[i]<<endl;
    
    return 0;
}
