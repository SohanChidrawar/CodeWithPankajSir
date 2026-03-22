class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        // int ti[n][m] = {0};
        // bool v[n][m];
        // 2D vector initialized with 0
        vector<vector<int>> ti(n, vector<int>(m, 0));
        vector<vector<bool>> v(n, vector<bool>(m, false));

        int ans = 0;
        queue<pair<int,int>>q;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                v[i][j] = false;
                if(grid[i][j] == 2)
                {
                    v[i][j] = true;
                    ti[i][j] = 0;
                    q.push({i,j});
                }
            }
        }

        while(q.empty() == false)
        {
            i = q.front().first;
            j = q.front().second;

            q.pop();

            if(grid[i][j] == 1)
                ans = max(ans,ti[i][j]);
            
            if(i-1>=0 && v[i-1][j]==false && grid[i-1][j]==1)
            {
                v[i-1][j] = true;
                ti[i-1][j] = 1 + ti[i][j];
                q.push({i-1,j});
            }

            if(i+1<n && v[i+1][j]==false && grid[i+1][j]==1)
            {
                v[i+1][j] = true;
                ti[i+1][j] = 1 + ti[i][j];
                q.push({i+1,j});
            }

            if(j-1>=0 && v[i][j-1]==false && grid[i][j-1]==1)
            {
                v[i][j-1] = true;
                ti[i][j-1] = 1 + ti[i][j];
                q.push({i,j-1});
            }

            if(j+1<m && v[i][j+1]==false && grid[i][j+1]==1)
            {
                v[i][j+1] = true;
                ti[i][j+1] = 1 + ti[i][j];
                q.push({i,j+1});
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j]==false && grid[i][j]==1)
                    return -1;
            }
        }

        return ans;
    }
};
