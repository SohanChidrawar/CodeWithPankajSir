class Solution {
  public:
  
    int solve(vector<vector<int>>&mat, int n)
    {
        if(n==0)   return -1;
        
        vector<int>outdegree(n,0);
        vector<int>indegree(n,0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && mat[i][j] == 1)
                {
                    outdegree[i]++;
                    indegree[j]++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==n-1 && outdegree[i]==0)
                return i;
        }
        return -1;
    }
  
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        return solve(mat,n);
        
    }
};
