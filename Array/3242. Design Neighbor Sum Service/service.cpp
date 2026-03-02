class NeighborSum {
public:
    vector<vector<int>> res;
    int n;

    NeighborSum(vector<vector<int>>& grid) {
        res = grid;
        n = res.size();    
    }
    
    int adjacentSum(int value) {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(res[i][j] == value)
                {
                    int left = (j>0) ? res[i][j-1] : 0;
                    int right = (j < n-1) ? res[i][j+1] : 0;
                    int up = (i>0) ? res[i-1][j] : 0;
                    int bottom = (i<n-1) ? res[i+1][j] : 0;

                    return left + right + up + bottom;
                }
            }
        }
        return -1;
    }
    
    int diagonalSum(int value) {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(res[i][j] == value)
                {
                    int sum = 0;
                    if(i-1>=0 && j-1>=0)   sum += res[i-1][j-1];    // top-left
                    if(i+1<n && j+1<n)     sum += res[i+1][j+1];    //bottom-right
                    if(i+1<n && j-1>=0)    sum += res[i+1][j-1];    //bottom-left
                    if(i-1>=0 && j+1<n)    sum += res[i-1][j+1];    //top-right

                    return sum;
                }
            }
        }
        return -1;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
