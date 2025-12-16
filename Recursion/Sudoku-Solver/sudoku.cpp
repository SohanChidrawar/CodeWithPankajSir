class Solution {
public:
    bool issafe(char value, int row, int col, vector<vector<char>>& board)
    {
        int n = board.size();
        for(int i=0;i<n;i++)
        {
            if(board[i][col]==value)
                return false;
        }

        for(int i=0;i<n;i++)
        {
            if(board[row][i]==value)
                return false;
        }

        int rowstart = row - row%3;
        int colstart = col - col%3;
        for(int r=rowstart;r<rowstart+3;r++)
        {
            for(int c=colstart;c<colstart+3;c++)
            {
                if(board[r][c]==value)
                    return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board)
    {
        int n = board.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char val='1';val<='9';val++)
                    {
                        if(issafe(val,i,j,board))
                        {
                            board[i][j]=val;
                            bool kyamaiaagejasakta = solve(board);
                            if(kyamaiaagejasakta)
                                return true;
                            else
                                //backtrack
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
