//Back-end complete function Template for C++
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int row=1;row<=n;row++)
        {
            for(int star=1;star<=row;star++)
                cout<<"*"<<" ";
            cout<<endl;
        }
        
        for(int row=1;row<n;row++)
        {
            for(int star=1;star<=n-row;star++)
                cout<<"*"<<" ";
            cout<<endl;
        }
    }
};
