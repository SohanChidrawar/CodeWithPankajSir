#include<iostream>
using namespace std;

bool issafe(int row,int col, int n, int board[][20])
{
    int duprow = row;
    int dupcol = col;
    
    //case 1:
    while(row>=0)
    {
        if(board[row][col]==1)
            return false;
        row--;
    }
    
    row = duprow;
    col = dupcol;
    
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
    //case 3:
    while(row >=0  && col < n)
    {
        if(board[row][col]==1)
            return false;
        row--;
        col++;
    }
    
    return true;
}

void solve(int row,int n, int board[][20])
{
    if(row==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    
    for(int col=0;col<n;col++)
    {
        if(issafe(row,col,n,board))
        {
            board[row][col] = 1;
            solve(row+1,n,board);
            board[row][col] = 0;
        }
    }
}

int main()
{
    int board[20][20]={0};
    int n;
    cout<<"Enter dimension of matrix: ";
    cin>>n;
    solve(0,n,board);
    
    return 0;
}
