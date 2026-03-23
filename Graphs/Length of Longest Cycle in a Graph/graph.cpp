class Solution {
  public:
    
    int dfslongest(vector<vector<int>> &adj, int i, vector<bool>&visited, vector<int>&dist)
    {
        visited[i] = true;
        int temp = -1;
        
        // dfs for all node
        for(int e : adj[i])
        {
            // if not visited assign distance and continue dfs
            if(!visited[e])
            {
                dist[e] = dist[i]+1;
                temp = max(temp, dfslongest(adj,e,visited,dist));
            }
            else if(dist[e] != -1)
                temp = max(temp, dist[i] - dist[e] + 1);
            
        }
        
        // remove from recursion stack
        dist[i] = -1;
        return temp;
    }
  
    int longestCycle(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>> adj(V);
        for(auto &e: edges)
        {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }
        
        vector<bool>visited(V,false);
        vector<int>dist(V,-1);
        int ans = -1;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                dist[i] = 0;
                ans = max(ans,dfslongest(adj,i,visited,dist));
            }
        }
        
        return ans;
        
    }
};
