class Solution {
  public:
    
    bool issafe(int row, int col, vector<vector<int>>&board, int n)
    {
        int duprow = row;
        int dupcol = col;
        
        while(col>=0)
        {
            if(board[row][col]==1)
                return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]==1)
                return false;
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]==1)
                return false;
            row++;
            col--;
        }
        return true;
    }
    
    void solve(int col, int n, vector<vector<int>>&board,vector<vector<int>>&ans,
    vector<int>&temp)
    {
        //base condition
        if(col==n)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(issafe(row,col,board,n))
            {
                board[row][col] = 1;
                temp.push_back(row+1);      //record column choice
                solve(col+1,n,board,ans,temp);
                temp.pop_back();
                board[row][col] = 0;
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,n,board,ans,temp);
        
        return ans;
        
    }
};
