class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);

        // build graph and indegree
        for(auto &e : prerequisites)
        {
            int u = e[0], v = e[1];
            adj[v].push_back(u);
            indegree[u]++;
        }

        queue<int> q;
        // add that vertex in queue that has indegree 0
        // means start with course having no prerequisites
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<int>order;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            order.push_back(u);

            for(int v : adj[u])
            {
                indegree[v]--;
                if(indegree[v] == 0)
                    q.push(v);
            }
        }

        // if we schedule all courses then return order
        if(order.size() == numCourses)
            return order;
        return {};
    }
};
