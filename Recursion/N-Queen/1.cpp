#include<iostream>
using namespace std;

bool issafe(int row, int col, int n, int board[][20])
{
    int duprow = row;
    int dupcol = col;
    
    //case 2:
    while(row>=0 && col>=0)
    {
        if(board[row][col]==1)
            return false;
        row--;
        col--;
    }
    row = duprow;
    col = dupcol;
    //case 1:
    while(col>=0)
    {
        if(board[row][col]==1)
            return false;
        col--;
    }
    row = duprow;
    col = dupcol;
    //case 3:
    while(row<n && col>=0)
    {
        if(board[row][col]==1)
            return false;
        row++;
        col--;
    }
    return true;
}

void solve(int col, int n, int board[][20])
{
    //base case
    if(col==n)
    {
        //print the board
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
        
            cout<<endl;
        }
        cout<<endl;
        return ;
    }
    for(int row=0;row<n;row++)
    {
        if(issafe(row,col,n,board))
        {
            board[row][col] = 1;
            solve(col+1,n,board);
            board[row][col] = 0;    //backtrack
        }    
    }
    
}

int main()
{
    int board[20][20]={0};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    solve(0,n,board);
    
    return 0;
    
}
