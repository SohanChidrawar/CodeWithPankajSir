/*
Prims algorithm
We can think of each house as a node in a graph, and the Manhattan distance between any two houses as the weight of the edge connecting those two nodes. 
With this interpretation, the problem of connecting all houses with the minimum total cost becomes equivalent to finding a Minimum Spanning Tree (MST) of 
a complete graph.

Step by Step implementations:

Start with any house (we start with house 0).
Push all distances from this house to other houses into a min-heap (priority queue).
At every step, pick the house with the smallest connection cost that hasn't been visited.
Add that cost to the total cost and mark the house as visited.
Push distances from this new house to all unvisited houses into the heap.
Repeat until all houses are visited and return the total cost.
*/


class Solution {
  public:
  
    int manhattan(vector<int> &u, vector<int> &v)
    {
        return abs(u[0]-v[0]) + abs(u[1]-v[1]);
    }
    
    int minCost(vector<vector<int>>& houses) {
        // code here
        int n = houses.size();
        
        // min heap to store {cost and house index}
        
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<>> minheap;
        
        // mark wheather house is visited or not
        vector<bool>visited(n,false);
        
        // start with first house at (index 0)
        minheap.push({0,0});
        
        int total = 0;
        
        while(!minheap.empty())
        {
            pair<int,int> p = minheap.top();
            minheap.pop();
            int cost = p.first;
            int u = p.second;
            
            if(visited[u] == true)
                continue;
            
            // mark the hpuse as connected and add cost to total
            visited[u] = true;
            total += cost;
            
            // calculate distance to all unvisited house and add to heap
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                {
                    int dist = manhattan(houses[u],houses[i]);
                    minheap.push({dist,i});
                }
            }
        }
        return total;
    }
};
