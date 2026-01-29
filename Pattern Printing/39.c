class Solution {
  public:

    void printTriangle(int n) {
        // code here
        for(int row=1;row<=n;row++)
        {
            for(int space=1;space<row;space++)
                cout<<" ";
            
            for(int star=1;star<=2*(n-row)+1;star++)
                cout<<"*";
            
            cout<<endl;
        }
    }
};
