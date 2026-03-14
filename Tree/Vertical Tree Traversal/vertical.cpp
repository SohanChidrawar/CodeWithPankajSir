/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        unordered_map<int,vector<int>>mp;
        int hd = 0;
        
        // create a queue for level order traversal
        queue<pair<Node*, int>>q;
        q.push({root,0});
        
        // mi and mx conatin minimum and maximum horizontal distance
        // from root
        int mi=0,mx = 0;
    
        while(!q.empty())
        {
            // pop from queue front
            //pair<Node*, int>curr = q.front();
            auto nodehd = q.front();
            q.pop();
            
            Node *node = nodehd.first;
            hd = nodehd.second;
            
            mp[hd].push_back(node->data);
            
            // if left node exist
            if(node->left)
                q.push({node->left,hd-1});
            
            // if right node exist
            if(node->right)
                q.push({node->right,hd+1});
                
            // update mi and mx
            mi = min(mi,hd);
            mx = max(hd,mx);
            
        }
        
        vector<vector<int>>result;
        // traverse the mp from min to max hd
        for(int i=mi;i<=mx;i++)
            result.push_back(mp[i]);
        
        return result;
    }
};
