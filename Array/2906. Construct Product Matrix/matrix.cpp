class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int N = n*m;
        const int mod = 12345;

        // flattening the matrix into 1d array
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                arr.push_back(grid[i][j]);
        }

        //maintain prefix suffix product array
        vector<int>prefix(N,1);
        vector<int>suffix(N,1);

        for(int i=1;i<N;i++)
            prefix[i] = (1LL * prefix[i-1]*arr[i-1])%mod;

        for(int i=N-2;i>=0;i--)
            suffix[i] = (1LL * suffix[i+1]*arr[i+1])%mod;

        // build result matrix
        vector<vector<int>> result(n, vector<int>(m));

        for(int k=0;k<N;k++)
        {
            // all of all element except arr[k]
            int prod = (1LL * prefix[k] * suffix[k])%mod;

            // convert flattend index backed to 2d cordinate (i,j)
            int i = k/m; //row index, integer division by number of columns
            int j = k%m; // column index, remainder when divided by number of columns

            result[i][j] = prod;
        }

        return result;
    }
};
