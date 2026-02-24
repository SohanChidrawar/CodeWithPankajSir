class Solution {
  public:
  
    void dfsrec(vector<vector<int>>& adj, vector<bool>& visited,
    int s, vector<int> &res)
    {
        visited[s] = true;
        
        res.push_back(s);
        
        for(int i : adj[s])
        {
            if(visited[i] == false)
            {
                dfsrec(adj,visited,i,res);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(adj.size(), false);
        vector<int> res;
        dfsrec(adj,visited,0,res);
        
        return res;
        
    }
};
