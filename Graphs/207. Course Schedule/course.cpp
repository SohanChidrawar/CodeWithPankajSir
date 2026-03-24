class Solution {
public:

    bool dfscycle(vector<vector<int>>&adj, int i, vector<bool>&visited,
    vector<bool>&recadj)
    {
        // if course already in recadj 
        if(recadj[i])
            return true;
        
        // if course is already visited no need to process further ==> no cycle
        if(visited[i])
            return false;
        
        visited[i] = true;
        recadj[i] = true;
    
        // visited adj vertex and apply dfs
        for(int v : adj[i])
        {
            if(dfscycle(adj,v,visited,recadj))
                return true;
        }

        // remove from recadj before backtrack
        recadj[i] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto &e :  prerequisites)
        {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }

        vector<bool>visited(numCourses,false);
        vector<bool>recadj(numCourses,false);

        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i] && dfscycle(adj,i,visited,recadj))
                return false;
        }

        return true;
    }
};
