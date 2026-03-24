class Solution {
  public:
    bool dfscyclic(vector<vector<int>>& adj, int i, vector<bool>&visited,
    vector<bool>&recadj)
    {
        // if node is already in a recadj cycle found
        if(recadj[i])
            return true;
            
        //already visited(processed) no need to visit again -> no cycle
        if(visited[i])
            return false;
            
        visited[i] = true;
        recadj[i] = true;
            
        // recursion for all adjacent vertices
        for(int v : adj[i])
        {
            if(dfscyclic(adj,v,visited,recadj))
                return true;
        }
            
        // remove from recadj before backtrack
        recadj[i] = false;
        return false;
    }

  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        // Build adjancency list
        vector<vector<int>>adj(V);
        for(auto &e : edges)
        {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V,false);
        vector<bool> recadj(V,false);
        
        // run dfs for every unvisited node
        for(int i=0;i<V;i++)
        {
            if(!visited[i] && dfscyclic(adj,i,visited,recadj))
                return true;
        }
        return false;
    }
};
