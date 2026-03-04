class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int>onerow(m,0);
        vector<int>onecol(n,0);
        vector<int>zerorow(m,0);
        vector<int>zerocol(n,0);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 0)
                {
                    zerorow[i]++;
                    zerocol[j]++;
                }
                else
                {
                    onerow[i]++;
                    onecol[j]++;
                }
            }
        }

        vector<vector<int>>result;

        for(int i=0;i<m;i++)
        {
            vector<int>curr;
            for(int j=0;j<n;j++)
            {
                int result = onerow[i] + onecol[j] - zerorow[i] - zerocol[j];
                curr.push_back(result);
            }
            result.push_back(curr);
        }

        return result;
    }
};
