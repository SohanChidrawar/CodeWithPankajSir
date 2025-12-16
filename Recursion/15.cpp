#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
    string s = "Pankaj";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    string s1 = "Pankaj";
    reverse(s1.begin()+2,s1.end());
    cout<<s1;
    

    return 0;
}

//c++ mai string ka matlab address nahi hota hai
